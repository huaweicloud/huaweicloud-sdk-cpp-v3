

#include "huaweicloud/metastudio/v1/model/CreateDocumentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDocumentRequestBody::CreateDocumentRequestBody()
{
    fileIsSet_ = false;
}

CreateDocumentRequestBody::~CreateDocumentRequestBody() = default;

void CreateDocumentRequestBody::validate()
{
}

web::json::value CreateDocumentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool CreateDocumentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent CreateDocumentRequestBody::getFile() const
{
    return file_;
}

void CreateDocumentRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool CreateDocumentRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void CreateDocumentRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


