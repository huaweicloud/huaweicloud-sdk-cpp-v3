

#include "huaweicloud/metastudio/v1/model/UpdateDocumentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDocumentRequestBody::UpdateDocumentRequestBody()
{
    fileIsSet_ = false;
}

UpdateDocumentRequestBody::~UpdateDocumentRequestBody() = default;

void UpdateDocumentRequestBody::validate()
{
}

web::json::value UpdateDocumentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UpdateDocumentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UpdateDocumentRequestBody::getFile() const
{
    return file_;
}

void UpdateDocumentRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UpdateDocumentRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UpdateDocumentRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


