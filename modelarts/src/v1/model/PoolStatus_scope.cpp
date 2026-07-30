

#include "huaweicloud/modelarts/v1/model/PoolStatus_scope.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolStatus_scope::PoolStatus_scope()
{
    scopeType_ = "";
    scopeTypeIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

PoolStatus_scope::~PoolStatus_scope() = default;

void PoolStatus_scope::validate()
{
}

web::json::value PoolStatus_scope::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scopeTypeIsSet_) {
        val[utility::conversions::to_string_t("scopeType")] = ModelBase::toJson(scopeType_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool PoolStatus_scope::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scopeType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scopeType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopeType(refVal);
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


std::string PoolStatus_scope::getScopeType() const
{
    return scopeType_;
}

void PoolStatus_scope::setScopeType(const std::string& value)
{
    scopeType_ = value;
    scopeTypeIsSet_ = true;
}

bool PoolStatus_scope::scopeTypeIsSet() const
{
    return scopeTypeIsSet_;
}

void PoolStatus_scope::unsetscopeType()
{
    scopeTypeIsSet_ = false;
}

std::string PoolStatus_scope::getState() const
{
    return state_;
}

void PoolStatus_scope::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool PoolStatus_scope::stateIsSet() const
{
    return stateIsSet_;
}

void PoolStatus_scope::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


