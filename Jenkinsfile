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
        always{
            steps{
                script{
                    slackSend channel:'@huseyinaydin.ce', message 'Build deployed successfully'
                }
            }
        }
    }
}