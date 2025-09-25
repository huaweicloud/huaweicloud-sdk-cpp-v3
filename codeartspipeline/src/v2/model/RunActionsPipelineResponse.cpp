

#include "huaweicloud/codeartspipeline/v2/model/RunActionsPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunActionsPipelineResponse::RunActionsPipelineResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

RunActionsPipelineResponse::~RunActionsPipelineResponse() = default;

void RunActionsPipelineResponse::validate()
{
}

web::json::value RunActionsPipelineResponse::toJson() const
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
bool RunActionsPipelineResponse::fromJson(const web::json::value& val)
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


std::string RunActionsPipelineResponse::getErrorCode() const
{
    return errorCode_;
}

void RunActionsPipelineResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool RunActionsPipelineResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void RunActionsPipelineResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string RunActionsPipelineResponse::getErrorMsg() const
{
    return errorMsg_;
}

void RunActionsPipelineResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool RunActionsPipelineResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void RunActionsPipelineResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


