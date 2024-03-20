pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                echo 'Install dependencies and optimize the React application for production deployment.'
            }
        }

        stage('Unit and Integration Tests') {
            steps {
                echo 'Run unit tests with Jest and integration tests with Cypress to ensure functionality.'
            }
            post {
                success {
                    emailext body: "Unit and Integration Tests were successful.",
                            subject: "Unit and Integration Tests",
                            to: "shravan4841.be22@chitkara.edu.in","vansh4857.be22@chitkara.edu.in",
                            attachLog: true
                }
                failure {
                    emailext body: "Unit and Integration Tests failed.",
                            subject: "Unit and Integration Tests",
                            to: "shravan4841.be22@chitkara.edu.in","vansh4857.be22@chitkara.edu.in",
                            attachLog: true
                }
            }
        }

        stage('Code Analysis') {
            steps {
                echo 'Analyze code using ESLint.'
            }
        }

        stage('Security Scan') {
            steps {
                echo 'Scan for security vulnerabilities using OWASP ZAP.'
            }
            post {
                success {
                    emailext body: "Security Scan was successful.",
                            subject: "Security Scan",
                            to: "shravan4841.be22@chitkara.edu.in","vansh4857.be22@chitkara.edu.in",
                            attachLog: true
                }
                failure {
                    emailext body: "Security Scan failed.",
                            subject: "Security Scan",
                            to: "shravan4841.be22@chitkara.edu.in","vansh4857.be22@chitkara.edu.in",
                            attachLog: true
                }
            }
        }

        stage('Deploy to Staging') {
            steps {
                echo 'Deploy the application to the staging server AWS S3 Bucket using AWS CLI.'
            }
        }

        stage('Integration Tests on Staging') {
            steps {
                echo 'Run integration tests on the staging environment.'
            }
        }

        stage('Deploy to Production') {
            steps {
                echo 'Deploy the application to the production server AWS S3 Bucket using AWS CLI..'
            }
        }
    }
}
