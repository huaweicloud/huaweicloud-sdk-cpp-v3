

#include "huaweicloud/lts/v2/model/CreateLogStreamIndexResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamIndexResponse::CreateLogStreamIndexResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    isQueryComplete_ = false;
    isQueryCompleteIsSet_ = false;
}

CreateLogStreamIndexResponse::~CreateLogStreamIndexResponse() = default;

void CreateLogStreamIndexResponse::validate()
{
}

web::json::value CreateLogStreamIndexResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("errorCode")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("errorMessage")] = ModelBase::toJson(errorMessage_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(isQueryCompleteIsSet_) {
        val[utility::conversions::to_string_t("isQueryComplete")] = ModelBase::toJson(isQueryComplete_);
    }

    return val;
}
bool CreateLogStreamIndexResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("errorCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorMessage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorMessage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isQueryComplete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isQueryComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryComplete(refVal);
        }
    }
    return ok;
}


std::string CreateLogStreamIndexResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateLogStreamIndexResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateLogStreamIndexResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateLogStreamIndexResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateLogStreamIndexResponse::getErrorMessage() const
{
    return errorMessage_;
}

void CreateLogStreamIndexResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool CreateLogStreamIndexResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void CreateLogStreamIndexResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

std::string CreateLogStreamIndexResponse::getResult() const
{
    return result_;
}

void CreateLogStreamIndexResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateLogStreamIndexResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateLogStreamIndexResponse::unsetresult()
{
    resultIsSet_ = false;
}

bool CreateLogStreamIndexResponse::isIsQueryComplete() const
{
    return isQueryComplete_;
}

void CreateLogStreamIndexResponse::setIsQueryComplete(bool value)
{
    isQueryComplete_ = value;
    isQueryCompleteIsSet_ = true;
}

bool CreateLogStreamIndexResponse::isQueryCompleteIsSet() const
{
    return isQueryCompleteIsSet_;
}

void CreateLogStreamIndexResponse::unsetisQueryComplete()
{
    isQueryCompleteIsSet_ = false;
}

}
}
}
}
}


