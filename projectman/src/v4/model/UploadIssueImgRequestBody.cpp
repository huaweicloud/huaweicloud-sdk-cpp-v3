

#include "huaweicloud/projectman/v4/model/UploadIssueImgRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadIssueImgRequestBody::UploadIssueImgRequestBody()
{
    fileIsSet_ = false;
}

UploadIssueImgRequestBody::~UploadIssueImgRequestBody() = default;

void UploadIssueImgRequestBody::validate()
{
}

web::json::value UploadIssueImgRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadIssueImgRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadIssueImgRequestBody::getFile() const
{
    return file_;
}

void UploadIssueImgRequestBody::setFile(const HttpContent& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UploadIssueImgRequestBody::fileIsSet() const
{
    return fileIsSet_;
}

void UploadIssueImgRequestBody::unsetfile()
{
    fileIsSet_ = false;
}

}
}
}
}
}


