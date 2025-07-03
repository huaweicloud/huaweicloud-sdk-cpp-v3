

#include "huaweicloud/rds/v3/model/CustomerUpgradeMajorVersionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CustomerUpgradeMajorVersionReq::CustomerUpgradeMajorVersionReq()
{
    delay_ = false;
    delayIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

CustomerUpgradeMajorVersionReq::~CustomerUpgradeMajorVersionReq() = default;

void CustomerUpgradeMajorVersionReq::validate()
{
}

web::json::value CustomerUpgradeMajorVersionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool CustomerUpgradeMajorVersionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    return ok;
}


bool CustomerUpgradeMajorVersionReq::isDelay() const
{
    return delay_;
}

void CustomerUpgradeMajorVersionReq::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool CustomerUpgradeMajorVersionReq::delayIsSet() const
{
    return delayIsSet_;
}

void CustomerUpgradeMajorVersionReq::unsetdelay()
{
    delayIsSet_ = false;
}

std::string CustomerUpgradeMajorVersionReq::getConfigurationId() const
{
    return configurationId_;
}

void CustomerUpgradeMajorVersionReq::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool CustomerUpgradeMajorVersionReq::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void CustomerUpgradeMajorVersionReq::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


