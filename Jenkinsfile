pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                echo 'During this stage,the "npm install" command is used to install the dependencies and the "npm run build" command is used to optimise and bundle the React application in preparation for production deployment.'
            }
        }

        stage('Unit and integration Tests') {
            steps {
                echo 'This stage runs unit tests for the React application using Jest to ensure the individual components function as expected and Cypress for integration testing.'
            }
            post {
                success {
                    emailext body: "Unit and Integration Tests run was successful.",
                            subject: "Unit and Integration Tests ",
                            to: "shravan4841.be22@chitkara.edu.in",
                            attachLog: true
                }
                failure {
                    emailext body: "Unit and Integration Tests run Failed.",
                            subject: "Unit and Integration Tests",
                            to: "shravan4841.be22@chitkara.edu.in",
                            attachLog: true
                }
            }
        }

        stage('Code Analysis') {
            steps {
                echo 'This stage is done with the help of eslint tool.'
            }
        }

        stage('Security Scan') {
            steps {
                echo 'This stage performs a security scan on the React application using "Synk" to identify potential vulnerabilities and security risks.'
            }
            post {
                success {
                    emailext body: "Security Scan stage was successful. ",
                            subject: "Security Scan ",
                            to: "shravan4841.be22@chitkara.edu.in",
                            attachLog: true
                }
                failure {
                    emailext body: "Security Scan stage failed.",
                            subject: "Security Scan ",
                            to: "shravan4841.be22@chitkara.edu.in",
                            attachLog: true
                }
            }
        }

        stage('Deploy to Staging') {
            steps {
                echo 'This stage deploys the built React application to a staging server, netlify'
            }
        }

        stage('Integration Tests on Staging') {
            steps {
                echo 'This stage runs integration tests on the React application deployed to the staging environment using Jest to ensure the application functions as expected in a production-like environment.'
            }
        }

        stage('Deploy to Production') {
            steps {
                echo 'This stage deploys the built React application to a staging server, netlify'
            }
        }
    }
    
}
