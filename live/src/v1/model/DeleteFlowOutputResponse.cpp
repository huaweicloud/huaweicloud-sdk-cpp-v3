

#include "huaweicloud/live/v1/model/DeleteFlowOutputResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteFlowOutputResponse::DeleteFlowOutputResponse()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
}

DeleteFlowOutputResponse::~DeleteFlowOutputResponse() = default;

void DeleteFlowOutputResponse::validate()
{
}

web::json::value DeleteFlowOutputResponse::toJson() const
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
bool DeleteFlowOutputResponse::fromJson(const web::json::value& val)
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


std::string DeleteFlowOutputResponse::getFlowId() const
{
    return flowId_;
}

void DeleteFlowOutputResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool DeleteFlowOutputResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void DeleteFlowOutputResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::string DeleteFlowOutputResponse::getOutputName() const
{
    return outputName_;
}

void DeleteFlowOutputResponse::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool DeleteFlowOutputResponse::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void DeleteFlowOutputResponse::unsetoutputName()
{
    outputNameIsSet_ = false;
}

}
}
}
}
}


