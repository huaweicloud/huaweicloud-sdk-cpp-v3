

#include "huaweicloud/sdrs/v1/model/DrillServerParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DrillServerParams::DrillServerParams()
{
    protectedInstance_ = "";
    protectedInstanceIsSet_ = false;
    drillServerId_ = "";
    drillServerIdIsSet_ = false;
}

DrillServerParams::~DrillServerParams() = default;

void DrillServerParams::validate()
{
}

web::json::value DrillServerParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedInstanceIsSet_) {
        val[utility::conversions::to_string_t("protected_instance")] = ModelBase::toJson(protectedInstance_);
    }
    if(drillServerIdIsSet_) {
        val[utility::conversions::to_string_t("drill_server_id")] = ModelBase::toJson(drillServerId_);
    }

    return val;
}

bool DrillServerParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drill_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drill_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrillServerId(refVal);
        }
    }
    return ok;
}

std::string DrillServerParams::getProtectedInstance() const
{
    return protectedInstance_;
}

void DrillServerParams::setProtectedInstance(const std::string& value)
{
    protectedInstance_ = value;
    protectedInstanceIsSet_ = true;
}

bool DrillServerParams::protectedInstanceIsSet() const
{
    return protectedInstanceIsSet_;
}

void DrillServerParams::unsetprotectedInstance()
{
    protectedInstanceIsSet_ = false;
}

std::string DrillServerParams::getDrillServerId() const
{
    return drillServerId_;
}

void DrillServerParams::setDrillServerId(const std::string& value)
{
    drillServerId_ = value;
    drillServerIdIsSet_ = true;
}

bool DrillServerParams::drillServerIdIsSet() const
{
    return drillServerIdIsSet_;
}

void DrillServerParams::unsetdrillServerId()
{
    drillServerIdIsSet_ = false;
}

}
}
}
}
}


