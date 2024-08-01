

#include "huaweicloud/lts/v2/model/DeleteConsumerGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteConsumerGroupResponse::DeleteConsumerGroupResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

DeleteConsumerGroupResponse::~DeleteConsumerGroupResponse() = default;

void DeleteConsumerGroupResponse::validate()
{
}

web::json::value DeleteConsumerGroupResponse::toJson() const
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
bool DeleteConsumerGroupResponse::fromJson(const web::json::value& val)
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


std::string DeleteConsumerGroupResponse::getErrorCode() const
{
    return errorCode_;
}

void DeleteConsumerGroupResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteConsumerGroupResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteConsumerGroupResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteConsumerGroupResponse::getErrorMessage() const
{
    return errorMessage_;
}

void DeleteConsumerGroupResponse::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool DeleteConsumerGroupResponse::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void DeleteConsumerGroupResponse::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


