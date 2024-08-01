

#include "huaweicloud/lts/v2/model/UpdateCheckPointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateCheckPointResponse::UpdateCheckPointResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

UpdateCheckPointResponse::~UpdateCheckPointResponse() = default;

void UpdateCheckPointResponse::validate()
{
}

web::json::value UpdateCheckPointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("errorCode")] = ModelBase::toJson(errorCode_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("errorMessage")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool UpdateCheckPointResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string UpdateCheckPointResponse::getErrorCode() const
{
    return errorCode_;
}

void UpdateCheckPointResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateCheckPointResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateCheckPointResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateCheckPointResponse::getErrorMessage() const
{
    return errorMessage_;
}

void UpdateCheckPointResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool UpdateCheckPointResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void UpdateCheckPointResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


