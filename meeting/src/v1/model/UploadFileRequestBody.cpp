

#include "huaweicloud/meeting/v1/model/UploadFileRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UploadFileRequestBody::UploadFileRequestBody()
{
    fileIsSet_ = false;
}

UploadFileRequestBody::~UploadFileRequestBody() = default;

void UploadFileRequestBody::validate()
{
}

web::json::value UploadFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadFileRequestBody::getFile() const
{
    return file_;
}

void UploadFileRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadFileRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadFileRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


