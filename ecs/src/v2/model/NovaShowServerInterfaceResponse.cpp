

#include "huaweicloud/ecs/v2/model/NovaShowServerInterfaceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowServerInterfaceResponse::NovaShowServerInterfaceResponse()
{
    interfaceAttachmentIsSet_ = false;
}

NovaShowServerInterfaceResponse::~NovaShowServerInterfaceResponse() = default;

void NovaShowServerInterfaceResponse::validate()
{
}

web::json::value NovaShowServerInterfaceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interfaceAttachmentIsSet_) {
        val[utility::conversions::to_string_t("interfaceAttachment")] = ModelBase::toJson(interfaceAttachment_);
    }

    return val;
}
bool NovaShowServerInterfaceResponse::fromJson(const web::json::value& val)
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


NovaServerInterfaceDetail NovaShowServerInterfaceResponse::getInterfaceAttachment() const
{
    return interfaceAttachment_;
}

void NovaShowServerInterfaceResponse::setInterfaceAttachment(const NovaServerInterfaceDetail& value)
{
    interfaceAttachment_ = value;
    interfaceAttachmentIsSet_ = true;
}

bool NovaShowServerInterfaceResponse::interfaceAttachmentIsSet() const
{
    return interfaceAttachmentIsSet_;
}

void NovaShowServerInterfaceResponse::unsetinterfaceAttachment()
{
    interfaceAttachmentIsSet_ = false;
}

}
}
}
}
}


