

#include "huaweicloud/codeartspipeline/v2/model/UploadPublisherIconRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPublisherIconRequestBody::UploadPublisherIconRequestBody()
{
    uploadFileIsSet_ = false;
}

UploadPublisherIconRequestBody::~UploadPublisherIconRequestBody() = default;

void UploadPublisherIconRequestBody::validate()
{
}

web::json::value UploadPublisherIconRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadPublisherIconRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadPublisherIconRequestBody::getUploadFile() const
{
    return uploadFile_;
}

void UploadPublisherIconRequestBody::setUploadFile(const HttpContent& value)
{
    uploadFile_ = value;
    uploadFileIsSet_ = true;
}

bool UploadPublisherIconRequestBody::uploadFileIsSet() const
{
    return uploadFileIsSet_;
}

void UploadPublisherIconRequestBody::unsetuploadFile()
{
    uploadFileIsSet_ = false;
}

}
}
}
}
}


