

#include "huaweicloud/modelarts/v1/model/NetworkStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkStatus::NetworkStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    connectionStatusIsSet_ = false;
}

NetworkStatus::~NetworkStatus() = default;

void NetworkStatus::validate()
{
}

web::json::value NetworkStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(connectionStatusIsSet_) {
        val[utility::conversions::to_string_t("connectionStatus")] = ModelBase::toJson(connectionStatus_);
    }

    return val;
}
bool NetworkStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connectionStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionStatus"));
        if(!fieldValue.is_null())
        {
            NetworkConnectionStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionStatus(refVal);
        }
    }
    return ok;
}


std::string NetworkStatus::getPhase() const
{
    return phase_;
}

void NetworkStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NetworkStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NetworkStatus::unsetphase()
{
    phaseIsSet_ = false;
}

NetworkConnectionStatus NetworkStatus::getConnectionStatus() const
{
    return connectionStatus_;
}

void NetworkStatus::setConnectionStatus(const NetworkConnectionStatus& value)
{
    connectionStatus_ = value;
    connectionStatusIsSet_ = true;
}

bool NetworkStatus::connectionStatusIsSet() const
{
    return connectionStatusIsSet_;
}

void NetworkStatus::unsetconnectionStatus()
{
    connectionStatusIsSet_ = false;
}

}
}
}
}
}


