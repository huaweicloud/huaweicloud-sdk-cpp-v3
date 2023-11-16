

#include "huaweicloud/codeartsbuild/v3/model/ShowFlowGraphResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowFlowGraphResponse::ShowFlowGraphResponse()
{
    success_ = false;
    successIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    errCode_ = "";
    errCodeIsSet_ = false;
    resultIsSet_ = false;
}

ShowFlowGraphResponse::~ShowFlowGraphResponse() = default;

void ShowFlowGraphResponse::validate()
{
}

web::json::value ShowFlowGraphResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(errCodeIsSet_) {
        val[utility::conversions::to_string_t("err_code")] = ModelBase::toJson(errCode_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowFlowGraphResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("err_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("err_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            FlowGraph_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool ShowFlowGraphResponse::isSuccess() const
{
    return success_;
}

void ShowFlowGraphResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ShowFlowGraphResponse::successIsSet() const
{
    return successIsSet_;
}

void ShowFlowGraphResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string ShowFlowGraphResponse::getMessage() const
{
    return message_;
}

void ShowFlowGraphResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowFlowGraphResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowFlowGraphResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowFlowGraphResponse::getErrCode() const
{
    return errCode_;
}

void ShowFlowGraphResponse::setErrCode(const std::string& value)
{
    errCode_ = value;
    errCodeIsSet_ = true;
}

bool ShowFlowGraphResponse::errCodeIsSet() const
{
    return errCodeIsSet_;
}

void ShowFlowGraphResponse::unseterrCode()
{
    errCodeIsSet_ = false;
}

FlowGraph_result ShowFlowGraphResponse::getResult() const
{
    return result_;
}

void ShowFlowGraphResponse::setResult(const FlowGraph_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowFlowGraphResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowFlowGraphResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


