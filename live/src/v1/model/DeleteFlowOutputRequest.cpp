

#include "huaweicloud/live/v1/model/DeleteFlowOutputRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteFlowOutputRequest::DeleteFlowOutputRequest()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
}

DeleteFlowOutputRequest::~DeleteFlowOutputRequest() = default;

void DeleteFlowOutputRequest::validate()
{
}

web::json::value DeleteFlowOutputRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(outputNameIsSet_) {
        val[utility::conversions::to_string_t("output_name")] = ModelBase::toJson(outputName_);
    }

    return val;
}
bool DeleteFlowOutputRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteFlowOutputRequest::getFlowId() const
{
    return flowId_;
}

void DeleteFlowOutputRequest::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool DeleteFlowOutputRequest::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void DeleteFlowOutputRequest::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string DeleteFlowOutputRequest::getOutputName() const
{
    return outputName_;
}

void DeleteFlowOutputRequest::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool DeleteFlowOutputRequest::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void DeleteFlowOutputRequest::unsetoutputName()
{
    outputNameIsSet_ = false;
}

}
}
}
}
}


