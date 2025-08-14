

#include "huaweicloud/iotda/v5/model/ResetBridgeSecret.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetBridgeSecret::ResetBridgeSecret()
{
    forceDisconnect_ = false;
    forceDisconnectIsSet_ = false;
}

ResetBridgeSecret::~ResetBridgeSecret() = default;

void ResetBridgeSecret::validate()
{
}

web::json::value ResetBridgeSecret::toJson() const
{
    web::json::value val = web::json::value::object();

    if(forceDisconnectIsSet_) {
        val[utility::conversions::to_string_t("force_disconnect")] = ModelBase::toJson(forceDisconnect_);
    }

    return val;
}
bool ResetBridgeSecret::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("force_disconnect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_disconnect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDisconnect(refVal);
        }
    }
    return ok;
}


bool ResetBridgeSecret::isForceDisconnect() const
{
    return forceDisconnect_;
}

void ResetBridgeSecret::setForceDisconnect(bool value)
{
    forceDisconnect_ = value;
    forceDisconnectIsSet_ = true;
}

bool ResetBridgeSecret::forceDisconnectIsSet() const
{
    return forceDisconnectIsSet_;
}

void ResetBridgeSecret::unsetforceDisconnect()
{
    forceDisconnectIsSet_ = false;
}

}
}
}
}
}


