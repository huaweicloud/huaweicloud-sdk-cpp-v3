

#include "huaweicloud/ocr/v1/model/AutoClassificationResult_status.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoClassificationResult_status::AutoClassificationResult_status()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

AutoClassificationResult_status::~AutoClassificationResult_status() = default;

void AutoClassificationResult_status::validate()
{
}

web::json::value AutoClassificationResult_status::toJson() const
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

bool AutoClassificationResult_status::fromJson(const web::json::value& val)
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

std::string AutoClassificationResult_status::getErrorCode() const
{
    return errorCode_;
}

void AutoClassificationResult_status::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool AutoClassificationResult_status::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void AutoClassificationResult_status::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string AutoClassificationResult_status::getErrorMsg() const
{
    return errorMsg_;
}

void AutoClassificationResult_status::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool AutoClassificationResult_status::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void AutoClassificationResult_status::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


