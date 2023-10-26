

#include "huaweicloud/antiddos/v1/model/DeleteDefaultConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




DeleteDefaultConfigResponse::DeleteDefaultConfigResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DeleteDefaultConfigResponse::~DeleteDefaultConfigResponse() = default;

void DeleteDefaultConfigResponse::validate()
{
}

web::json::value DeleteDefaultConfigResponse::toJson() const
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
bool DeleteDefaultConfigResponse::fromJson(const web::json::value& val)
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


std::string DeleteDefaultConfigResponse::getErrorCode() const
{
    return errorCode_;
}

void DeleteDefaultConfigResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteDefaultConfigResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteDefaultConfigResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteDefaultConfigResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteDefaultConfigResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteDefaultConfigResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteDefaultConfigResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


