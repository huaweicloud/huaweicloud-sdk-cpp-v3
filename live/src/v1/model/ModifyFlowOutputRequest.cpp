

#include "huaweicloud/live/v1/model/ModifyFlowOutputRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowOutputRequest::ModifyFlowOutputRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyFlowOutputRequest::~ModifyFlowOutputRequest() = default;

void ModifyFlowOutputRequest::validate()
{
}

web::json::value ModifyFlowOutputRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(outputNameIsSet_) {
        val[utility::conversions::to_string_t("output_name")] = ModelBase::toJson(outputName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyFlowOutputRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateFlowOutputRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyFlowOutputRequest::getFlowId() const
{
    return flowId_;
}

void ModifyFlowOutputRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowOutputRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowOutputRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string ModifyFlowOutputRequest::getOutputName() const
{
    return outputName_;
}

void ModifyFlowOutputRequest::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool ModifyFlowOutputRequest::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void ModifyFlowOutputRequest::unsetoutputName()
{
    outputNameIsSet_ = false;
}

UpdateFlowOutputRequestBody ModifyFlowOutputRequest::getBody() const
{
    return body_;
}

void ModifyFlowOutputRequest::setBody(const UpdateFlowOutputRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyFlowOutputRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyFlowOutputRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


