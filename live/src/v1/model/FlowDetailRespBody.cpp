

#include "huaweicloud/live/v1/model/FlowDetailRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




FlowDetailRespBody::FlowDetailRespBody()
{
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    sourcesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    flowId_ = "";
    flowIdIsSet_ = false;
    outputsIsSet_ = false;
}

FlowDetailRespBody::~FlowDetailRespBody() = default;

void FlowDetailRespBody::validate()
{
}

web::json::value FlowDetailRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(flowIdIsSet_) {
        val[utility::conversions::to_string_t("flow_id")] = ModelBase::toJson(flowId_);
    }
    if(outputsIsSet_) {
        val[utility::conversions::to_string_t("outputs")] = ModelBase::toJson(outputs_);
    }

    return val;
}
bool FlowDetailRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<FlowSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
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
            std::vector<FlowOutput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputs(refVal);
        }
    }
    return ok;
}


std::string FlowDetailRespBody::getName() const
{
    return name_;
}

void FlowDetailRespBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool FlowDetailRespBody::nameIsSet() const
{
    return nameIsSet_;
}

void FlowDetailRespBody::unsetname()
{
    nameIsSet_ = false;
}

std::string FlowDetailRespBody::getRegion() const
{
    return region_;
}

void FlowDetailRespBody::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool FlowDetailRespBody::regionIsSet() const
{
    return regionIsSet_;
}

void FlowDetailRespBody::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<FlowSource>& FlowDetailRespBody::getSources()
{
    return sources_;
}

void FlowDetailRespBody::setSources(const std::vector<FlowSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool FlowDetailRespBody::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void FlowDetailRespBody::unsetsources()
{
    sourcesIsSet_ = false;
}

std::string FlowDetailRespBody::getStatus() const
{
    return status_;
}

void FlowDetailRespBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool FlowDetailRespBody::statusIsSet() const
{
    return statusIsSet_;
}

void FlowDetailRespBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string FlowDetailRespBody::getFlowId() const
{
    return flowId_;
}

void FlowDetailRespBody::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool FlowDetailRespBody::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void FlowDetailRespBody::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::vector<FlowOutput>& FlowDetailRespBody::getOutputs()
{
    return outputs_;
}

void FlowDetailRespBody::setOutputs(const std::vector<FlowOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool FlowDetailRespBody::outputsIsSet() const
{
    return outputsIsSet_;
}

void FlowDetailRespBody::unsetoutputs()
{
    outputsIsSet_ = false;
}

}
}
}
}
}


