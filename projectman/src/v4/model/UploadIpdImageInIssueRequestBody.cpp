

#include "huaweicloud/projectman/v4/model/UploadIpdImageInIssueRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIpdImageInIssueRequestBody::UploadIpdImageInIssueRequestBody()
{
    fileIsSet_ = false;
}

UploadIpdImageInIssueRequestBody::~UploadIpdImageInIssueRequestBody() = default;

void UploadIpdImageInIssueRequestBody::validate()
{
}

web::json::value UploadIpdImageInIssueRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadIpdImageInIssueRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadIpdImageInIssueRequestBody::getFile() const
{
    return file_;
}

void UploadIpdImageInIssueRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadIpdImageInIssueRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadIpdImageInIssueRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


