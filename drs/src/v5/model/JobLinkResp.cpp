

#include "huaweicloud/drs/v5/model/JobLinkResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobLinkResp::JobLinkResp()
{
    jobType_ = "";
    jobTypeIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    sourceEndpointType_ = "";
    sourceEndpointTypeIsSet_ = false;
    targetEndpointType_ = "";
    targetEndpointTypeIsSet_ = false;
    jobDirection_ = "";
    jobDirectionIsSet_ = false;
    netType_ = "";
    netTypeIsSet_ = false;
    taskTypesIsSet_ = false;
    clusterModesIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

JobLinkResp::~JobLinkResp() = default;

void JobLinkResp::validate()
{
}

web::json::value JobLinkResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
    }
    if(sourceEndpointTypeIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint_type")] = ModelBase::toJson(sourceEndpointType_);
    }
    if(targetEndpointTypeIsSet_) {
        val[utility::conversions::to_string_t("target_endpoint_type")] = ModelBase::toJson(targetEndpointType_);
    }
    if(jobDirectionIsSet_) {
        val[utility::conversions::to_string_t("job_direction")] = ModelBase::toJson(jobDirection_);
    }
    if(netTypeIsSet_) {
        val[utility::conversions::to_string_t("net_type")] = ModelBase::toJson(netType_);
    }
    if(taskTypesIsSet_) {
        val[utility::conversions::to_string_t("task_types")] = ModelBase::toJson(taskTypes_);
    }
    if(clusterModesIsSet_) {
        val[utility::conversions::to_string_t("cluster_modes")] = ModelBase::toJson(clusterModes_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool JobLinkResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpointType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_endpoint_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_endpoint_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetEndpointType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_modes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_modes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterModes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string JobLinkResp::getJobType() const
{
    return jobType_;
}

void JobLinkResp::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobLinkResp::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobLinkResp::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string JobLinkResp::getEngineType() const
{
    return engineType_;
}

void JobLinkResp::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool JobLinkResp::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void JobLinkResp::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string JobLinkResp::getSourceEndpointType() const
{
    return sourceEndpointType_;
}

void JobLinkResp::setSourceEndpointType(const std::string& value)
{
    sourceEndpointType_ = value;
    sourceEndpointTypeIsSet_ = true;
}

bool JobLinkResp::sourceEndpointTypeIsSet() const
{
    return sourceEndpointTypeIsSet_;
}

void JobLinkResp::unsetsourceEndpointType()
{
    sourceEndpointTypeIsSet_ = false;
}

std::string JobLinkResp::getTargetEndpointType() const
{
    return targetEndpointType_;
}

void JobLinkResp::setTargetEndpointType(const std::string& value)
{
    targetEndpointType_ = value;
    targetEndpointTypeIsSet_ = true;
}

bool JobLinkResp::targetEndpointTypeIsSet() const
{
    return targetEndpointTypeIsSet_;
}

void JobLinkResp::unsettargetEndpointType()
{
    targetEndpointTypeIsSet_ = false;
}

std::string JobLinkResp::getJobDirection() const
{
    return jobDirection_;
}

void JobLinkResp::setJobDirection(const std::string& value)
{
    jobDirection_ = value;
    jobDirectionIsSet_ = true;
}

bool JobLinkResp::jobDirectionIsSet() const
{
    return jobDirectionIsSet_;
}

void JobLinkResp::unsetjobDirection()
{
    jobDirectionIsSet_ = false;
}

std::string JobLinkResp::getNetType() const
{
    return netType_;
}

void JobLinkResp::setNetType(const std::string& value)
{
    netType_ = value;
    netTypeIsSet_ = true;
}

bool JobLinkResp::netTypeIsSet() const
{
    return netTypeIsSet_;
}

void JobLinkResp::unsetnetType()
{
    netTypeIsSet_ = false;
}

std::vector<std::string>& JobLinkResp::getTaskTypes()
{
    return taskTypes_;
}

void JobLinkResp::setTaskTypes(const std::vector<std::string>& value)
{
    taskTypes_ = value;
    taskTypesIsSet_ = true;
}

bool JobLinkResp::taskTypesIsSet() const
{
    return taskTypesIsSet_;
}

void JobLinkResp::unsettaskTypes()
{
    taskTypesIsSet_ = false;
}

std::vector<std::string>& JobLinkResp::getClusterModes()
{
    return clusterModes_;
}

void JobLinkResp::setClusterModes(const std::vector<std::string>& value)
{
    clusterModes_ = value;
    clusterModesIsSet_ = true;
}

bool JobLinkResp::clusterModesIsSet() const
{
    return clusterModesIsSet_;
}

void JobLinkResp::unsetclusterModes()
{
    clusterModesIsSet_ = false;
}

std::string JobLinkResp::getDescription() const
{
    return description_;
}

void JobLinkResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobLinkResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobLinkResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


