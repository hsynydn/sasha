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
                    def ch = '@huseyinaydin.ce'
                    def colorCode = '##FF0000'
                    def summary = 'Build Successful'
                    slackSend (channel: ch, color: colorCode, message: summary)
                }
            }
        }
    }
}