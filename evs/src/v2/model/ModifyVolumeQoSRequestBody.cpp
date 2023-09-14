

#include "huaweicloud/evs/v2/model/ModifyVolumeQoSRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ModifyVolumeQoSRequestBody::ModifyVolumeQoSRequestBody()
{
    qosModifyIsSet_ = false;
}

ModifyVolumeQoSRequestBody::~ModifyVolumeQoSRequestBody() = default;

void ModifyVolumeQoSRequestBody::validate()
{
}

web::json::value ModifyVolumeQoSRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(qosModifyIsSet_) {
        val[utility::conversions::to_string_t("qos_modify")] = ModelBase::toJson(qosModify_);
    }

    return val;
}

bool ModifyVolumeQoSRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("qos_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qos_modify"));
        if(!fieldValue.is_null())
        {
            ModifyVolumeQoSOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosModify(refVal);
        }
    }
    return ok;
}

ModifyVolumeQoSOption ModifyVolumeQoSRequestBody::getQosModify() const
{
    return qosModify_;
}

void ModifyVolumeQoSRequestBody::setQosModify(const ModifyVolumeQoSOption& value)
{
    qosModify_ = value;
    qosModifyIsSet_ = true;
}

bool ModifyVolumeQoSRequestBody::qosModifyIsSet() const
{
    return qosModifyIsSet_;
}

void ModifyVolumeQoSRequestBody::unsetqosModify()
{
    qosModifyIsSet_ = false;
}

}
}
}
}
}


