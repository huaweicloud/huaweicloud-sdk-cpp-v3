

#include "huaweicloud/modelarts/v1/model/PoolDriverStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolDriverStatus::PoolDriverStatus()
{
    version_ = "";
    versionIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

PoolDriverStatus::~PoolDriverStatus() = default;

void PoolDriverStatus::validate()
{
}

web::json::value PoolDriverStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool PoolDriverStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string PoolDriverStatus::getVersion() const
{
    return version_;
}

void PoolDriverStatus::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PoolDriverStatus::versionIsSet() const
{
    return versionIsSet_;
}

void PoolDriverStatus::unsetversion()
{
    versionIsSet_ = false;
}

std::string PoolDriverStatus::getState() const
{
    return state_;
}

void PoolDriverStatus::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool PoolDriverStatus::stateIsSet() const
{
    return stateIsSet_;
}

void PoolDriverStatus::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


