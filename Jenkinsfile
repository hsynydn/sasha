pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                sh 'cd build && cmake .. && make'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
    post {
        stage('Send'){
            success{
                slackSend channel:'@huseyinaydin.ce', message 'Build deployed successfully'
            }
        }
    }
}