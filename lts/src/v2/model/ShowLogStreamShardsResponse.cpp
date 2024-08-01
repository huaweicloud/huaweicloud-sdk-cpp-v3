

#include "huaweicloud/lts/v2/model/ShowLogStreamShardsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowLogStreamShardsResponse::ShowLogStreamShardsResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    isQueryComplete_ = false;
    isQueryCompleteIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ShowLogStreamShardsResponse::~ShowLogStreamShardsResponse() = default;

void ShowLogStreamShardsResponse::validate()
{
}

web::json::value ShowLogStreamShardsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("errorCode")] = ModelBase::toJson(errorCode_);
    }
    if(isQueryCompleteIsSet_) {
        val[utility::conversions::to_string_t("isQueryComplete")] = ModelBase::toJson(isQueryComplete_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowLogStreamShardsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("isQueryComplete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isQueryComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryComplete(refVal);
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
    return ok;
}


std::string ShowLogStreamShardsResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowLogStreamShardsResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowLogStreamShardsResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowLogStreamShardsResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

bool ShowLogStreamShardsResponse::isIsQueryComplete() const
{
    return isQueryComplete_;
}

void ShowLogStreamShardsResponse::setIsQueryComplete(bool value)
{
    isQueryComplete_ = value;
    isQueryCompleteIsSet_ = true;
}

bool ShowLogStreamShardsResponse::isQueryCompleteIsSet() const
{
    return isQueryCompleteIsSet_;
}

void ShowLogStreamShardsResponse::unsetisQueryComplete()
{
    isQueryCompleteIsSet_ = false;
}

std::string ShowLogStreamShardsResponse::getResult() const
{
    return result_;
}

void ShowLogStreamShardsResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowLogStreamShardsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowLogStreamShardsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


