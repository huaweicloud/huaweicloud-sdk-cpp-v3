

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse::AlgorithmResponse()
{
    metadataIsSet_ = false;
    jobConfigIsSet_ = false;
    resourceRequirementsIsSet_ = false;
    advancedConfigIsSet_ = false;
}

AlgorithmResponse::~AlgorithmResponse() = default;

void AlgorithmResponse::validate()
{
}

web::json::value AlgorithmResponse::toJson() const
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
bool AlgorithmResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            AlgorithmResponse_metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_config"));
        if(!fieldValue.is_null())
        {
            AlgorithmResponse_job_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_requirements"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_requirements"));
        if(!fieldValue.is_null())
        {
            std::vector<AlgorithmResponse_resource_requirements> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRequirements(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advanced_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_config"));
        if(!fieldValue.is_null())
        {
            AlgorithmResponse_advanced_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
        }
    }
    return ok;
}


AlgorithmResponse_metadata AlgorithmResponse::getMetadata() const
{
    return metadata_;
}

void AlgorithmResponse::setMetadata(const AlgorithmResponse_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool AlgorithmResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void AlgorithmResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

AlgorithmResponse_job_config AlgorithmResponse::getJobConfig() const
{
    return jobConfig_;
}

void AlgorithmResponse::setJobConfig(const AlgorithmResponse_job_config& value)
{
    jobConfig_ = value;
    jobConfigIsSet_ = true;
}

bool AlgorithmResponse::jobConfigIsSet() const
{
    return jobConfigIsSet_;
}

void AlgorithmResponse::unsetjobConfig()
{
    jobConfigIsSet_ = false;
}

std::vector<AlgorithmResponse_resource_requirements>& AlgorithmResponse::getResourceRequirements()
{
    return resourceRequirements_;
}

void AlgorithmResponse::setResourceRequirements(const std::vector<AlgorithmResponse_resource_requirements>& value)
{
    resourceRequirements_ = value;
    resourceRequirementsIsSet_ = true;
}

bool AlgorithmResponse::resourceRequirementsIsSet() const
{
    return resourceRequirementsIsSet_;
}

void AlgorithmResponse::unsetresourceRequirements()
{
    resourceRequirementsIsSet_ = false;
}

AlgorithmResponse_advanced_config AlgorithmResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void AlgorithmResponse::setAdvancedConfig(const AlgorithmResponse_advanced_config& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool AlgorithmResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void AlgorithmResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

}
}
}
}
}


