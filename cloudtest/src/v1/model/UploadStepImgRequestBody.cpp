

#include "huaweicloud/cloudtest/v1/model/UploadStepImgRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UploadStepImgRequestBody::UploadStepImgRequestBody()
{
    fileIsSet_ = false;
}

UploadStepImgRequestBody::~UploadStepImgRequestBody() = default;

void UploadStepImgRequestBody::validate()
{
}

web::json::value UploadStepImgRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadStepImgRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadStepImgRequestBody::getFile() const
{
    return file_;
}

void UploadStepImgRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadStepImgRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadStepImgRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


