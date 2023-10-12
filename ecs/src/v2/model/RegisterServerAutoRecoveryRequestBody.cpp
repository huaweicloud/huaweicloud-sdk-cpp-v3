

#include "huaweicloud/ecs/v2/model/RegisterServerAutoRecoveryRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RegisterServerAutoRecoveryRequestBody::RegisterServerAutoRecoveryRequestBody()
{
    supportAutoRecovery_ = "";
    supportAutoRecoveryIsSet_ = false;
}

RegisterServerAutoRecoveryRequestBody::~RegisterServerAutoRecoveryRequestBody() = default;

void RegisterServerAutoRecoveryRequestBody::validate()
{
}

web::json::value RegisterServerAutoRecoveryRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportAutoRecoveryIsSet_) {
        val[utility::conversions::to_string_t("support_auto_recovery")] = ModelBase::toJson(supportAutoRecovery_);
    }

    return val;
}
bool RegisterServerAutoRecoveryRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("support_auto_recovery"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_auto_recovery"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAutoRecovery(refVal);
        }
    }
    return ok;
}


std::string RegisterServerAutoRecoveryRequestBody::getSupportAutoRecovery() const
{
    return supportAutoRecovery_;
}

void RegisterServerAutoRecoveryRequestBody::setSupportAutoRecovery(const std::string& value)
{
    supportAutoRecovery_ = value;
    supportAutoRecoveryIsSet_ = true;
}

bool RegisterServerAutoRecoveryRequestBody::supportAutoRecoveryIsSet() const
{
    return supportAutoRecoveryIsSet_;
}

void RegisterServerAutoRecoveryRequestBody::unsetsupportAutoRecovery()
{
    supportAutoRecoveryIsSet_ = false;
}

}
}
}
}
}


