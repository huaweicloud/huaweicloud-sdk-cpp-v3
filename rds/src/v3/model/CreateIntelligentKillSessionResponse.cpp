

#include "huaweicloud/rds/v3/model/CreateIntelligentKillSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateIntelligentKillSessionResponse::CreateIntelligentKillSessionResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreateIntelligentKillSessionResponse::~CreateIntelligentKillSessionResponse() = default;

void CreateIntelligentKillSessionResponse::validate()
{
}

web::json::value CreateIntelligentKillSessionResponse::toJson() const
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
bool CreateIntelligentKillSessionResponse::fromJson(const web::json::value& val)
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


std::string CreateIntelligentKillSessionResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateIntelligentKillSessionResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateIntelligentKillSessionResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateIntelligentKillSessionResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateIntelligentKillSessionResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateIntelligentKillSessionResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateIntelligentKillSessionResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateIntelligentKillSessionResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


