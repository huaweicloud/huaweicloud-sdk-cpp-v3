

#include "huaweicloud/projectman/v4/model/UploadAttachmentsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UploadAttachmentsRequestBody::UploadAttachmentsRequestBody()
{
    attachmentIsSet_ = false;
}

UploadAttachmentsRequestBody::~UploadAttachmentsRequestBody() = default;

void UploadAttachmentsRequestBody::validate()
{
}

web::json::value UploadAttachmentsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}
bool UploadAttachmentsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    return ok;
}


HttpContent UploadAttachmentsRequestBody::getAttachment() const
{
    return attachment_;
}

void UploadAttachmentsRequestBody::setAttachment(const HttpContent& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool UploadAttachmentsRequestBody::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void UploadAttachmentsRequestBody::unsetattachment()
{
    attachmentIsSet_ = false;
}

}
}
}
}
}


