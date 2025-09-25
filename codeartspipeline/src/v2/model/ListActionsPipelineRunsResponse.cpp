

#include "huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListActionsPipelineRunsResponse::ListActionsPipelineRunsResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ListActionsPipelineRunsResponse::~ListActionsPipelineRunsResponse() = default;

void ListActionsPipelineRunsResponse::validate()
{
}

web::json::value ListActionsPipelineRunsResponse::toJson() const
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
bool ListActionsPipelineRunsResponse::fromJson(const web::json::value& val)
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


std::string ListActionsPipelineRunsResponse::getErrorCode() const
{
    return errorCode_;
}

void ListActionsPipelineRunsResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListActionsPipelineRunsResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListActionsPipelineRunsResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListActionsPipelineRunsResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListActionsPipelineRunsResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListActionsPipelineRunsResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListActionsPipelineRunsResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


