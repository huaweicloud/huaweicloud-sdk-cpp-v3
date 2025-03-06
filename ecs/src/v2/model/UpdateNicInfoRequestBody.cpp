

#include "huaweicloud/ecs/v2/model/UpdateNicInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateNicInfoRequestBody::UpdateNicInfoRequestBody()
{
    interfaceAttachmentIsSet_ = false;
}

UpdateNicInfoRequestBody::~UpdateNicInfoRequestBody() = default;

void UpdateNicInfoRequestBody::validate()
{
}

web::json::value UpdateNicInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(interfaceAttachmentIsSet_) {
        val[utility::conversions::to_string_t("interface_attachment")] = ModelBase::toJson(interfaceAttachment_);
    }

    return val;
}
bool UpdateNicInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("interface_attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interface_attachment"));
        if(!fieldValue.is_null())
        {
            InterfaceAttachment refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterfaceAttachment(refVal);
        }
    }
    return ok;
}


InterfaceAttachment UpdateNicInfoRequestBody::getInterfaceAttachment() const
{
    return interfaceAttachment_;
}

void UpdateNicInfoRequestBody::setInterfaceAttachment(const InterfaceAttachment& value)
{
    interfaceAttachment_ = value;
    interfaceAttachmentIsSet_ = true;
}

bool UpdateNicInfoRequestBody::interfaceAttachmentIsSet() const
{
    return interfaceAttachmentIsSet_;
}

void UpdateNicInfoRequestBody::unsetinterfaceAttachment()
{
    interfaceAttachmentIsSet_ = false;
}

}
}
}
}
}


