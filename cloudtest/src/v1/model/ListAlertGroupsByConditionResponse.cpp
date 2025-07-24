

#include "huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlertGroupsByConditionResponse::ListAlertGroupsByConditionResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ListAlertGroupsByConditionResponse::~ListAlertGroupsByConditionResponse() = default;

void ListAlertGroupsByConditionResponse::validate()
{
}

web::json::value ListAlertGroupsByConditionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ListAlertGroupsByConditionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListAlertGroupsByConditionResponse::getErrorCode() const
{
    return errorCode_;
}

void ListAlertGroupsByConditionResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListAlertGroupsByConditionResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListAlertGroupsByConditionResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListAlertGroupsByConditionResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListAlertGroupsByConditionResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListAlertGroupsByConditionResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListAlertGroupsByConditionResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


