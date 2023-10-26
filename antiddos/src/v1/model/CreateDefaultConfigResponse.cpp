

#include "huaweicloud/antiddos/v1/model/CreateDefaultConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




CreateDefaultConfigResponse::CreateDefaultConfigResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreateDefaultConfigResponse::~CreateDefaultConfigResponse() = default;

void CreateDefaultConfigResponse::validate()
{
}

web::json::value CreateDefaultConfigResponse::toJson() const
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
bool CreateDefaultConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateDefaultConfigResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateDefaultConfigResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateDefaultConfigResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateDefaultConfigResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateDefaultConfigResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateDefaultConfigResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateDefaultConfigResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateDefaultConfigResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


