

#include "huaweicloud/codeartspipeline/v2/model/DeleteActionsRunPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteActionsRunPipelineResponse::DeleteActionsRunPipelineResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DeleteActionsRunPipelineResponse::~DeleteActionsRunPipelineResponse() = default;

void DeleteActionsRunPipelineResponse::validate()
{
}

web::json::value DeleteActionsRunPipelineResponse::toJson() const
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
bool DeleteActionsRunPipelineResponse::fromJson(const web::json::value& val)
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


std::string DeleteActionsRunPipelineResponse::getErrorCode() const
{
    return errorCode_;
}

void DeleteActionsRunPipelineResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DeleteActionsRunPipelineResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DeleteActionsRunPipelineResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DeleteActionsRunPipelineResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DeleteActionsRunPipelineResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DeleteActionsRunPipelineResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DeleteActionsRunPipelineResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


