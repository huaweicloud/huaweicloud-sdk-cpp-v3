

#include "huaweicloud/cloudtest/v1/model/CreatePlanResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreatePlanResponse::CreatePlanResponse()
{
    planId_ = "";
    planIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreatePlanResponse::~CreatePlanResponse() = default;

void CreatePlanResponse::validate()
{
}

web::json::value CreatePlanResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool CreatePlanResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string CreatePlanResponse::getPlanId() const
{
    return planId_;
}

void CreatePlanResponse::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool CreatePlanResponse::planIdIsSet() const
{
    return planIdIsSet_;
}

void CreatePlanResponse::unsetplanId()
{
    planIdIsSet_ = false;
}

std::string CreatePlanResponse::getErrorCode() const
{
    return errorCode_;
}

void CreatePlanResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreatePlanResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreatePlanResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreatePlanResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreatePlanResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreatePlanResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreatePlanResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


