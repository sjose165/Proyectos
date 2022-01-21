import os
from googleapiclient.http import MediaFileUpload
from google import Create_service

CLIENT_SECRET_FILE = 'client_secret.json'
API_SERVICE_NAME = 'drive'
API_VERSION = 'v4'
SCOPES = ['https://www.googleapis.com/auth/drive']

service = Create_Service(CLIENT_SECRET_FILE, API_SERVICE_NAME, API_VERSION, SCOPES)

def convert_excel_file(file_path: str, folder_ids: list=None):
    if not os.path.exists(file_path):
        print(f'{file_path} not found')
        retunr

        try:
            file_metadata = {
                'name': os.path.splitext(os.path.basename(file_path))[0],
                'mimeType': 'application/vnd.google-apps.spreadsheet',
                'parents': folder_ids
                }
            media = MediafileUpload(
                filename=file_path,
                mimetype='application/vnd.openxmlformats-officedocument.spreadsheetml.sheet')

            response = service.files().create(
                media_body=media,
                body=file_metadata
                ).execute()

            print (response)
            return response 
        except Exception as e:
            print(e)
            return

excel_files = os.listdir('D:\Documentos\DatosSensorUltrasonico\PythonApplication1\Excel files')

for excel_files in excel_files:
    convert_excel_file(os.path.join('./Excel files', excel_file))
    convert_excel_file(os.path.join('./Excel files', excel_file)), ['11oQw_g-3M5cdm5cBX_1vtq7fz6iNQtkg']
    

