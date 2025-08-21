

#include "huaweicloud/live/v1/model/CreateFlowOutputResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateFlowOutputResponse::CreateFlowOutputResponse()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    outputsIsSet_ = false;
}

CreateFlowOutputResponse::~CreateFlowOutputResponse() = default;

void CreateFlowOutputResponse::validate()
{
}

web::json::value CreateFlowOutputResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }

    return val;
}
bool CreateFlowOutputResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("outputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputs"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowsOutput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    return ok;
}


std::string CreateFlowOutputResponse::getFlowId() const
{
    return flowId_;
}

void CreateFlowOutputResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool CreateFlowOutputResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void CreateFlowOutputResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::vector<FlowsOutput>& CreateFlowOutputResponse::getOutputs()
{
    return outputs_;
}

void CreateFlowOutputResponse::setOutputs(const std::vector<FlowsOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool CreateFlowOutputResponse::outputsIsSet() const
{
    return outputsIsSet_;
}

void CreateFlowOutputResponse::unsetoutputs()
{
    outputsIsSet_ = false;
}

}
}
}
}
}


