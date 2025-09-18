

#include "huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateIpdProjectIssueAttachmentRequestBody::CreateIpdProjectIssueAttachmentRequestBody()
{
    attachmentIsSet_ = false;
}

CreateIpdProjectIssueAttachmentRequestBody::~CreateIpdProjectIssueAttachmentRequestBody() = default;

void CreateIpdProjectIssueAttachmentRequestBody::validate()
{
}

web::json::value CreateIpdProjectIssueAttachmentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool CreateIpdProjectIssueAttachmentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent CreateIpdProjectIssueAttachmentRequestBody::getAttachment() const
{
    return attachment_;
}

void CreateIpdProjectIssueAttachmentRequestBody::setAttachment(const HttpContent& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool CreateIpdProjectIssueAttachmentRequestBody::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void CreateIpdProjectIssueAttachmentRequestBody::unsetattachment()
{
    attachmentIsSet_ = false;
}

}
}
}
}
}


