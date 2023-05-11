

#include "huaweicloud/ecs/v2/model/NovaAttachInterfaceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAttachInterfaceRequestBody::NovaAttachInterfaceRequestBody()
{
    interfaceAttachmentIsSet_ = false;
}

NovaAttachInterfaceRequestBody::~NovaAttachInterfaceRequestBody() = default;

void NovaAttachInterfaceRequestBody::validate()
{
}

web::json::value NovaAttachInterfaceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interfaceAttachmentIsSet_) {
        val[utility::conversions::to_string_t("interfaceAttachment")] = ModelBase::toJson(interfaceAttachment_);
    }

    return val;
}

bool NovaAttachInterfaceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interfaceAttachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interfaceAttachment"));
        if(!fieldValue.is_null())
        {
            NovaAttachInterfaceOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceAttachment(refVal);
        }
    }
    return ok;
}


NovaAttachInterfaceOption NovaAttachInterfaceRequestBody::getInterfaceAttachment() const
{
    return interfaceAttachment_;
}

void NovaAttachInterfaceRequestBody::setInterfaceAttachment(const NovaAttachInterfaceOption& value)
{
    interfaceAttachment_ = value;
    interfaceAttachmentIsSet_ = true;
}

bool NovaAttachInterfaceRequestBody::interfaceAttachmentIsSet() const
{
    return interfaceAttachmentIsSet_;
}

void NovaAttachInterfaceRequestBody::unsetinterfaceAttachment()
{
    interfaceAttachmentIsSet_ = false;
}

}
}
}
}
}


