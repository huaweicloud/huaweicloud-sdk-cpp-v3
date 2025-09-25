

#include "huaweicloud/codeartspipeline/v2/model/RetryRunActionsPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RetryRunActionsPipelineResponse::RetryRunActionsPipelineResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

RetryRunActionsPipelineResponse::~RetryRunActionsPipelineResponse() = default;

void RetryRunActionsPipelineResponse::validate()
{
}

web::json::value RetryRunActionsPipelineResponse::toJson() const
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
bool RetryRunActionsPipelineResponse::fromJson(const web::json::value& val)
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


std::string RetryRunActionsPipelineResponse::getErrorCode() const
{
    return errorCode_;
}

void RetryRunActionsPipelineResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool RetryRunActionsPipelineResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void RetryRunActionsPipelineResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string RetryRunActionsPipelineResponse::getErrorMsg() const
{
    return errorMsg_;
}

void RetryRunActionsPipelineResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool RetryRunActionsPipelineResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void RetryRunActionsPipelineResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


