

#include "huaweicloud/drs/v5/model/ValidateJobNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ValidateJobNameResponse::ValidateJobNameResponse()
{
    isValid_ = false;
    isValidIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ValidateJobNameResponse::~ValidateJobNameResponse() = default;

void ValidateJobNameResponse::validate()
{
}

web::json::value ValidateJobNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ValidateJobNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
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


bool ValidateJobNameResponse::isIsValid() const
{
    return isValid_;
}

void ValidateJobNameResponse::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ValidateJobNameResponse::isValidIsSet() const
{
    return isValidIsSet_;
}

void ValidateJobNameResponse::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string ValidateJobNameResponse::getErrorCode() const
{
    return errorCode_;
}

void ValidateJobNameResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ValidateJobNameResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ValidateJobNameResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ValidateJobNameResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ValidateJobNameResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ValidateJobNameResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ValidateJobNameResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


