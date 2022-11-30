

#include "huaweicloud/ecs/v2/model/ShowServerAutoRecoveryResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerAutoRecoveryResponse::ShowServerAutoRecoveryResponse()
{
    supportAutoRecovery_ = "";
    supportAutoRecoveryIsSet_ = false;
}

ShowServerAutoRecoveryResponse::~ShowServerAutoRecoveryResponse() = default;

void ShowServerAutoRecoveryResponse::validate()
{
}

web::json::value ShowServerAutoRecoveryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportAutoRecoveryIsSet_) {
        val[utility::conversions::to_string_t("support_auto_recovery")] = ModelBase::toJson(supportAutoRecovery_);
    }

    return val;
}

bool ShowServerAutoRecoveryResponse::fromJson(const web::json::value& val)
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


std::string ShowServerAutoRecoveryResponse::getSupportAutoRecovery() const
{
    return supportAutoRecovery_;
}

void ShowServerAutoRecoveryResponse::setSupportAutoRecovery(const std::string& value)
{
    supportAutoRecovery_ = value;
    supportAutoRecoveryIsSet_ = true;
}

bool ShowServerAutoRecoveryResponse::supportAutoRecoveryIsSet() const
{
    return supportAutoRecoveryIsSet_;
}

void ShowServerAutoRecoveryResponse::unsetsupportAutoRecovery()
{
    supportAutoRecoveryIsSet_ = false;
}

}
}
}
}
}


