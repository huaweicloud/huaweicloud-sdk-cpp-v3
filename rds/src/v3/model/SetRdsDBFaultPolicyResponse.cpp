

#include "huaweicloud/rds/v3/model/SetRdsDBFaultPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetRdsDBFaultPolicyResponse::SetRdsDBFaultPolicyResponse()
{
    state_ = "";
    stateIsSet_ = false;
    errmsg_ = "";
    errmsgIsSet_ = false;
}

SetRdsDBFaultPolicyResponse::~SetRdsDBFaultPolicyResponse() = default;

void SetRdsDBFaultPolicyResponse::validate()
{
}

web::json::value SetRdsDBFaultPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(errmsgIsSet_) {
        val[utility::conversions::to_string_t("errmsg")] = ModelBase::toJson(errmsg_);
    }

    return val;
}
bool SetRdsDBFaultPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errmsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errmsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrmsg(refVal);
        }
    }
    return ok;
}


std::string SetRdsDBFaultPolicyResponse::getState() const
{
    return state_;
}

void SetRdsDBFaultPolicyResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SetRdsDBFaultPolicyResponse::stateIsSet() const
{
    return stateIsSet_;
}

void SetRdsDBFaultPolicyResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string SetRdsDBFaultPolicyResponse::getErrmsg() const
{
    return errmsg_;
}

void SetRdsDBFaultPolicyResponse::setErrmsg(const std::string& value)
{
    errmsg_ = value;
    errmsgIsSet_ = true;
}

bool SetRdsDBFaultPolicyResponse::errmsgIsSet() const
{
    return errmsgIsSet_;
}

void SetRdsDBFaultPolicyResponse::unseterrmsg()
{
    errmsgIsSet_ = false;
}

}
}
}
}
}


