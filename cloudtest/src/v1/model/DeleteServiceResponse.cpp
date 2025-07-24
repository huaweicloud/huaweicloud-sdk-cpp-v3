

#include "huaweicloud/cloudtest/v1/model/DeleteServiceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteServiceResponse::DeleteServiceResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DeleteServiceResponse::~DeleteServiceResponse() = default;

void DeleteServiceResponse::validate()
{
}

web::json::value DeleteServiceResponse::toJson() const
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
bool DeleteServiceResponse::fromJson(const web::json::value& val)
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


std::string DeleteServiceResponse::getErrorCode() const
{
    return errorCode_;
}

void DeleteServiceResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteServiceResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteServiceResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteServiceResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteServiceResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteServiceResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteServiceResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


