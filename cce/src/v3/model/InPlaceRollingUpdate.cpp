

#include "huaweicloud/cce/v3/model/InPlaceRollingUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




InPlaceRollingUpdate::InPlaceRollingUpdate()
{
    userDefinedStep_ = 0;
    userDefinedStepIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
}

InPlaceRollingUpdate::~InPlaceRollingUpdate() = default;

void InPlaceRollingUpdate::validate()
{
}

web::json::value InPlaceRollingUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userDefinedStepIsSet_) {
        val[utility::conversions::to_string_t("userDefinedStep")] = ModelBase::toJson(userDefinedStep_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }

    return val;
}
bool InPlaceRollingUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userDefinedStep"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userDefinedStep"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefinedStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    return ok;
}


int32_t InPlaceRollingUpdate::getUserDefinedStep() const
{
    return userDefinedStep_;
}

void InPlaceRollingUpdate::setUserDefinedStep(int32_t value)
{
    userDefinedStep_ = value;
    userDefinedStepIsSet_ = true;
}

bool InPlaceRollingUpdate::userDefinedStepIsSet() const
{
    return userDefinedStepIsSet_;
}

void InPlaceRollingUpdate::unsetuserDefinedStep()
{
    userDefinedStepIsSet_ = false;
}

std::string InPlaceRollingUpdate::getScope() const
{
    return scope_;
}

void InPlaceRollingUpdate::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool InPlaceRollingUpdate::scopeIsSet() const
{
    return scopeIsSet_;
}

void InPlaceRollingUpdate::unsetscope()
{
    scopeIsSet_ = false;
}

}
}
}
}
}


