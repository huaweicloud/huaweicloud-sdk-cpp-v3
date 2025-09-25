

#include "huaweicloud/codeartspipeline/v2/model/ListActionsPipelineRunsByRunIdsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListActionsPipelineRunsByRunIdsResponse::ListActionsPipelineRunsByRunIdsResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ListActionsPipelineRunsByRunIdsResponse::~ListActionsPipelineRunsByRunIdsResponse() = default;

void ListActionsPipelineRunsByRunIdsResponse::validate()
{
}

web::json::value ListActionsPipelineRunsByRunIdsResponse::toJson() const
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
bool ListActionsPipelineRunsByRunIdsResponse::fromJson(const web::json::value& val)
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


std::string ListActionsPipelineRunsByRunIdsResponse::getErrorCode() const
{
    return errorCode_;
}

void ListActionsPipelineRunsByRunIdsResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListActionsPipelineRunsByRunIdsResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListActionsPipelineRunsByRunIdsResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListActionsPipelineRunsByRunIdsResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListActionsPipelineRunsByRunIdsResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListActionsPipelineRunsByRunIdsResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListActionsPipelineRunsByRunIdsResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


