

#include "huaweicloud/ecs/v2/model/ListServerInterfacesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerInterfacesResponse::ListServerInterfacesResponse()
{
    attachableQuantityIsSet_ = false;
    interfaceAttachmentsIsSet_ = false;
}

ListServerInterfacesResponse::~ListServerInterfacesResponse() = default;

void ListServerInterfacesResponse::validate()
{
}

web::json::value ListServerInterfacesResponse::toJson() const
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
bool ListServerInterfacesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachableQuantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachableQuantity"));
        if(!fieldValue.is_null())
        {
            InterfaceAttachableQuantity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachableQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interfaceAttachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interfaceAttachments"));
        if(!fieldValue.is_null())
        {
            std::vector<InterfaceAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceAttachments(refVal);
        }
    }
    return ok;
}


InterfaceAttachableQuantity ListServerInterfacesResponse::getAttachableQuantity() const
{
    return attachableQuantity_;
}

void ListServerInterfacesResponse::setAttachableQuantity(const InterfaceAttachableQuantity& value)
{
    attachableQuantity_ = value;
    attachableQuantityIsSet_ = true;
}

bool ListServerInterfacesResponse::attachableQuantityIsSet() const
{
    return attachableQuantityIsSet_;
}

void ListServerInterfacesResponse::unsetattachableQuantity()
{
    attachableQuantityIsSet_ = false;
}

std::vector<InterfaceAttachment>& ListServerInterfacesResponse::getInterfaceAttachments()
{
    return interfaceAttachments_;
}

void ListServerInterfacesResponse::setInterfaceAttachments(const std::vector<InterfaceAttachment>& value)
{
    interfaceAttachments_ = value;
    interfaceAttachmentsIsSet_ = true;
}

bool ListServerInterfacesResponse::interfaceAttachmentsIsSet() const
{
    return interfaceAttachmentsIsSet_;
}

void ListServerInterfacesResponse::unsetinterfaceAttachments()
{
    interfaceAttachmentsIsSet_ = false;
}

}
}
}
}
}


