

#include "huaweicloud/live/v1/model/ModifyFlowSourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyFlowSourcesResponse::ModifyFlowSourcesResponse()
{
    flowId_ = "";
    flowIdIsSet_ = false;
    sourceIsSet_ = false;
}

ModifyFlowSourcesResponse::~ModifyFlowSourcesResponse() = default;

void ModifyFlowSourcesResponse::validate()
{
}

web::json::value ModifyFlowSourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool ModifyFlowSourcesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            FlowSource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


std::string ModifyFlowSourcesResponse::getFlowId() const
{
    return flowId_;
}

void ModifyFlowSourcesResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ModifyFlowSourcesResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ModifyFlowSourcesResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

FlowSource ModifyFlowSourcesResponse::getSource() const
{
    return source_;
}

void ModifyFlowSourcesResponse::setSource(const FlowSource& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool ModifyFlowSourcesResponse::sourceIsSet() const
{
    return sourceIsSet_;
}

void ModifyFlowSourcesResponse::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


