

#include "huaweicloud/live/v1/model/ShowFlowDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowFlowDetailResponse::ShowFlowDetailResponse()
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

ShowFlowDetailResponse::~ShowFlowDetailResponse() = default;

void ShowFlowDetailResponse::validate()
{
}

web::json::value ShowFlowDetailResponse::toJson() const
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
bool ShowFlowDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowFlowDetailResponse::getName() const
{
    return name_;
}

void ShowFlowDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowFlowDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowFlowDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowFlowDetailResponse::getRegion() const
{
    return region_;
}

void ShowFlowDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowFlowDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowFlowDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::vector<FlowSource>& ShowFlowDetailResponse::getSources()
{
    return sources_;
}

void ShowFlowDetailResponse::setSources(const std::vector<FlowSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ShowFlowDetailResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ShowFlowDetailResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

std::string ShowFlowDetailResponse::getStatus() const
{
    return status_;
}

void ShowFlowDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFlowDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFlowDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowFlowDetailResponse::getFlowId() const
{
    return flowId_;
}

void ShowFlowDetailResponse::setFlowId(const std::string& value)
{
    flowId_ = value;
    flowIdIsSet_ = true;
}

bool ShowFlowDetailResponse::flowIdIsSet() const
{
    return flowIdIsSet_;
}

void ShowFlowDetailResponse::unsetflowId()
{
    flowIdIsSet_ = false;
}

std::vector<FlowOutput>& ShowFlowDetailResponse::getOutputs()
{
    return outputs_;
}

void ShowFlowDetailResponse::setOutputs(const std::vector<FlowOutput>& value)
{
    outputs_ = value;
    outputsIsSet_ = true;
}

bool ShowFlowDetailResponse::outputsIsSet() const
{
    return outputsIsSet_;
}

void ShowFlowDetailResponse::unsetoutputs()
{
    outputsIsSet_ = false;
}

}
}
}
}
}


