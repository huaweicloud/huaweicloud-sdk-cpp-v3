

#include "huaweicloud/codeartspipeline/v2/model/ShowActionsRunsDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowActionsRunsDetailResponse::ShowActionsRunsDetailResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ShowActionsRunsDetailResponse::~ShowActionsRunsDetailResponse() = default;

void ShowActionsRunsDetailResponse::validate()
{
}

web::json::value ShowActionsRunsDetailResponse::toJson() const
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
bool ShowActionsRunsDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowActionsRunsDetailResponse::getErrorCode() const
{
    return errorCode_;
}

void ShowActionsRunsDetailResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ShowActionsRunsDetailResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ShowActionsRunsDetailResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ShowActionsRunsDetailResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ShowActionsRunsDetailResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ShowActionsRunsDetailResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ShowActionsRunsDetailResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


