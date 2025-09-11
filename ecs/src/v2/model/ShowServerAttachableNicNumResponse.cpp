

#include "huaweicloud/ecs/v2/model/ShowServerAttachableNicNumResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerAttachableNicNumResponse::ShowServerAttachableNicNumResponse()
{
    attachableQuantityIsSet_ = false;
    interfaceAttachmentsIsSet_ = false;
}

ShowServerAttachableNicNumResponse::~ShowServerAttachableNicNumResponse() = default;

void ShowServerAttachableNicNumResponse::validate()
{
}

web::json::value ShowServerAttachableNicNumResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachableQuantityIsSet_) {
        val[utility::conversions::to_string_t("attachableQuantity")] = ModelBase::toJson(attachableQuantity_);
    }
    if(interfaceAttachmentsIsSet_) {
        val[utility::conversions::to_string_t("interfaceAttachments")] = ModelBase::toJson(interfaceAttachments_);
    }

    return val;
}
bool ShowServerAttachableNicNumResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachableQuantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachableQuantity"));
        if(!fieldValue.is_null())
        {
            AttachableQuantityForNic refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachableQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interfaceAttachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interfaceAttachments"));
        if(!fieldValue.is_null())
        {
            std::vector<InterfaceExt> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceAttachments(refVal);
        }
    }
    return ok;
}


AttachableQuantityForNic ShowServerAttachableNicNumResponse::getAttachableQuantity() const
{
    return attachableQuantity_;
}

void ShowServerAttachableNicNumResponse::setAttachableQuantity(const AttachableQuantityForNic& value)
{
    attachableQuantity_ = value;
    attachableQuantityIsSet_ = true;
}

bool ShowServerAttachableNicNumResponse::attachableQuantityIsSet() const
{
    return attachableQuantityIsSet_;
}

void ShowServerAttachableNicNumResponse::unsetattachableQuantity()
{
    attachableQuantityIsSet_ = false;
}

std::vector<InterfaceExt>& ShowServerAttachableNicNumResponse::getInterfaceAttachments()
{
    return interfaceAttachments_;
}

void ShowServerAttachableNicNumResponse::setInterfaceAttachments(const std::vector<InterfaceExt>& value)
{
    interfaceAttachments_ = value;
    interfaceAttachmentsIsSet_ = true;
}

bool ShowServerAttachableNicNumResponse::interfaceAttachmentsIsSet() const
{
    return interfaceAttachmentsIsSet_;
}

void ShowServerAttachableNicNumResponse::unsetinterfaceAttachments()
{
    interfaceAttachmentsIsSet_ = false;
}

}
}
}
}
}


