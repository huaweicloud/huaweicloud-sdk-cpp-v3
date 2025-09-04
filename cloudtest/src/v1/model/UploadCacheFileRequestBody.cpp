

#include "huaweicloud/cloudtest/v1/model/UploadCacheFileRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadCacheFileRequestBody::UploadCacheFileRequestBody()
{
    fileIsSet_ = false;
}

UploadCacheFileRequestBody::~UploadCacheFileRequestBody() = default;

void UploadCacheFileRequestBody::validate()
{
}

web::json::value UploadCacheFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadCacheFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadCacheFileRequestBody::getFile() const
{
    return file_;
}

void UploadCacheFileRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadCacheFileRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadCacheFileRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


