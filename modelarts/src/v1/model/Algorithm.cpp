

#include "huaweicloud/modelarts/v1/model/Algorithm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Algorithm::Algorithm()
{
    metadataIsSet_ = false;
    jobConfigIsSet_ = false;
    resourceRequirementsIsSet_ = false;
    advancedConfigIsSet_ = false;
}

Algorithm::~Algorithm() = default;

void Algorithm::validate()
{
}

web::json::value Algorithm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(jobConfigIsSet_) {
        val[utility::conversions::to_string_t("job_config")] = ModelBase::toJson(jobConfig_);
    }
    if(resourceRequirementsIsSet_) {
        val[utility::conversions::to_string_t("resource_requirements")] = ModelBase::toJson(resourceRequirements_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }

    return val;
}
bool Algorithm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            AlgorithmMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_config"));
        if(!fieldValue.is_null())
        {
            AlgorithmJobConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceRequirement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advanced_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_config"));
        if(!fieldValue.is_null())
        {
            AlgorithmAdvancedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
        }
    }
    return ok;
}


AlgorithmMetadata Algorithm::getMetadata() const
{
    return metadata_;
}

void Algorithm::setMetadata(const AlgorithmMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Algorithm::metadataIsSet() const
{
    return metadataIsSet_;
}

void Algorithm::unsetmetadata()
{
    metadataIsSet_ = false;
}

AlgorithmJobConfig Algorithm::getJobConfig() const
{
    return jobConfig_;
}

void Algorithm::setJobConfig(const AlgorithmJobConfig& value)
{
    jobConfig_ = value;
    jobConfigIsSet_ = true;
}

bool Algorithm::jobConfigIsSet() const
{
    return jobConfigIsSet_;
}

void Algorithm::unsetjobConfig()
{
    jobConfigIsSet_ = false;
}

std::vector<ResourceRequirement>& Algorithm::getResourceRequirements()
{
    return resourceRequirements_;
}

void Algorithm::setResourceRequirements(const std::vector<ResourceRequirement>& value)
{
    resourceRequirements_ = value;
    resourceRequirementsIsSet_ = true;
}

bool Algorithm::resourceRequirementsIsSet() const
{
    return resourceRequirementsIsSet_;
}

void Algorithm::unsetresourceRequirements()
{
    resourceRequirementsIsSet_ = false;
}

AlgorithmAdvancedConfig Algorithm::getAdvancedConfig() const
{
    return advancedConfig_;
}

void Algorithm::setAdvancedConfig(const AlgorithmAdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool Algorithm::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void Algorithm::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

}
}
}
}
}


