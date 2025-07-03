

#include "huaweicloud/ecs/v2/model/TemplateNetworkInterfaceOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateNetworkInterfaceOption::TemplateNetworkInterfaceOption()
{
    virsubnetId_ = "";
    virsubnetIdIsSet_ = false;
    attachmentIsSet_ = false;
}

TemplateNetworkInterfaceOption::~TemplateNetworkInterfaceOption() = default;

void TemplateNetworkInterfaceOption::validate()
{
}

web::json::value TemplateNetworkInterfaceOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(virsubnetIdIsSet_) {
        val[utility::conversions::to_string_t("virsubnet_id")] = ModelBase::toJson(virsubnetId_);
    }
    if(attachmentIsSet_) {
        val[utility::conversions::to_string_t("attachment")] = ModelBase::toJson(attachment_);
    }

    return val;
}
bool TemplateNetworkInterfaceOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("virsubnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virsubnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirsubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment"));
        if(!fieldValue.is_null())
        {
            TemplateNetworkInterfaceAttachmentOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachment(refVal);
        }
    }
    return ok;
}


std::string TemplateNetworkInterfaceOption::getVirsubnetId() const
{
    return virsubnetId_;
}

void TemplateNetworkInterfaceOption::setVirsubnetId(const std::string& value)
{
    virsubnetId_ = value;
    virsubnetIdIsSet_ = true;
}

bool TemplateNetworkInterfaceOption::virsubnetIdIsSet() const
{
    return virsubnetIdIsSet_;
}

void TemplateNetworkInterfaceOption::unsetvirsubnetId()
{
    virsubnetIdIsSet_ = false;
}

TemplateNetworkInterfaceAttachmentOption TemplateNetworkInterfaceOption::getAttachment() const
{
    return attachment_;
}

void TemplateNetworkInterfaceOption::setAttachment(const TemplateNetworkInterfaceAttachmentOption& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool TemplateNetworkInterfaceOption::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void TemplateNetworkInterfaceOption::unsetattachment()
{
    attachmentIsSet_ = false;
}

}
}
}
}
}


