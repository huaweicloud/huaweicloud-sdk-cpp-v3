

#include "huaweicloud/codeartspipeline/v2/model/UploadPluginIconRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPluginIconRequestBody::UploadPluginIconRequestBody()
{
    uploadFileIsSet_ = false;
}

UploadPluginIconRequestBody::~UploadPluginIconRequestBody() = default;

void UploadPluginIconRequestBody::validate()
{
}

web::json::value UploadPluginIconRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadPluginIconRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadPluginIconRequestBody::getUploadFile() const
{
    return uploadFile_;
}

void UploadPluginIconRequestBody::setUploadFile(const HttpContent& value)
{
    uploadFile_ = value;
    uploadFileIsSet_ = true;
}

bool UploadPluginIconRequestBody::uploadFileIsSet() const
{
    return uploadFileIsSet_;
}

void UploadPluginIconRequestBody::unsetuploadFile()
{
    uploadFileIsSet_ = false;
}

}
}
}
}
}


