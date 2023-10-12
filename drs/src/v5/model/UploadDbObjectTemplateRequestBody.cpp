

#include "huaweicloud/drs/v5/model/UploadDbObjectTemplateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UploadDbObjectTemplateRequestBody::UploadDbObjectTemplateRequestBody()
{
    fileIsSet_ = false;
}

UploadDbObjectTemplateRequestBody::~UploadDbObjectTemplateRequestBody() = default;

void UploadDbObjectTemplateRequestBody::validate()
{
}

web::json::value UploadDbObjectTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadDbObjectTemplateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadDbObjectTemplateRequestBody::getFile() const
{
    return file_;
}

void UploadDbObjectTemplateRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadDbObjectTemplateRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadDbObjectTemplateRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


