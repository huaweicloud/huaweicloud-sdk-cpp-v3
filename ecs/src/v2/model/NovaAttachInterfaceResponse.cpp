

#include "huaweicloud/ecs/v2/model/NovaAttachInterfaceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAttachInterfaceResponse::NovaAttachInterfaceResponse()
{
    interfaceAttachmentIsSet_ = false;
}

NovaAttachInterfaceResponse::~NovaAttachInterfaceResponse() = default;

void NovaAttachInterfaceResponse::validate()
{
}

web::json::value NovaAttachInterfaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interfaceAttachmentIsSet_) {
        val[utility::conversions::to_string_t("interfaceAttachment")] = ModelBase::toJson(interfaceAttachment_);
    }

    return val;
}

bool NovaAttachInterfaceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interfaceAttachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interfaceAttachment"));
        if(!fieldValue.is_null())
        {
            NovaServerInterfaceDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceAttachment(refVal);
        }
    }
    return ok;
}


NovaServerInterfaceDetail NovaAttachInterfaceResponse::getInterfaceAttachment() const
{
    return interfaceAttachment_;
}

void NovaAttachInterfaceResponse::setInterfaceAttachment(const NovaServerInterfaceDetail& value)
{
    interfaceAttachment_ = value;
    interfaceAttachmentIsSet_ = true;
}

bool NovaAttachInterfaceResponse::interfaceAttachmentIsSet() const
{
    return interfaceAttachmentIsSet_;
}

void NovaAttachInterfaceResponse::unsetinterfaceAttachment()
{
    interfaceAttachmentIsSet_ = false;
}

}
}
}
}
}


