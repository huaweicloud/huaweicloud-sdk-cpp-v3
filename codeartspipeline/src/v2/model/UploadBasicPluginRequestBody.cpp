

#include "huaweicloud/codeartspipeline/v2/model/UploadBasicPluginRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadBasicPluginRequestBody::UploadBasicPluginRequestBody()
{
    uploadFileIsSet_ = false;
}

UploadBasicPluginRequestBody::~UploadBasicPluginRequestBody() = default;

void UploadBasicPluginRequestBody::validate()
{
}

web::json::value UploadBasicPluginRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadBasicPluginRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadBasicPluginRequestBody::getUploadFile() const
{
    return uploadFile_;
}

void UploadBasicPluginRequestBody::setUploadFile(const HttpContent& value)
{
    uploadFile_ = value;
    uploadFileIsSet_ = true;
}

bool UploadBasicPluginRequestBody::uploadFileIsSet() const
{
    return uploadFileIsSet_;
}

void UploadBasicPluginRequestBody::unsetuploadFile()
{
    uploadFileIsSet_ = false;
}

}
}
}
}
}


