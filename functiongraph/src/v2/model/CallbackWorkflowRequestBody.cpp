

#include "huaweicloud/functiongraph/v2/model/CallbackWorkflowRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CallbackWorkflowRequestBody::CallbackWorkflowRequestBody()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    outputIsSet_ = false;
}

CallbackWorkflowRequestBody::~CallbackWorkflowRequestBody() = default;

void CallbackWorkflowRequestBody::validate()
{
}

web::json::value CallbackWorkflowRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool CallbackWorkflowRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string CallbackWorkflowRequestBody::getResult() const
{
    return result_;
}

void CallbackWorkflowRequestBody::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CallbackWorkflowRequestBody::resultIsSet() const
{
    return resultIsSet_;
}

void CallbackWorkflowRequestBody::unsetresult()
{
    resultIsSet_ = false;
}

std::string CallbackWorkflowRequestBody::getError() const
{
    return error_;
}

void CallbackWorkflowRequestBody::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool CallbackWorkflowRequestBody::errorIsSet() const
{
    return errorIsSet_;
}

void CallbackWorkflowRequestBody::unseterror()
{
    errorIsSet_ = false;
}

Object CallbackWorkflowRequestBody::getOutput() const
{
    return output_;
}

void CallbackWorkflowRequestBody::setOutput(const Object& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CallbackWorkflowRequestBody::outputIsSet() const
{
    return outputIsSet_;
}

void CallbackWorkflowRequestBody::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


