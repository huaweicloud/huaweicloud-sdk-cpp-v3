

#include "huaweicloud/modelarts/v1/model/CreateAlgorithmResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateAlgorithmResponse::CreateAlgorithmResponse()
{
    metadataIsSet_ = false;
    jobConfigIsSet_ = false;
    resourceRequirementsIsSet_ = false;
    advancedConfigIsSet_ = false;
}

CreateAlgorithmResponse::~CreateAlgorithmResponse() = default;

void CreateAlgorithmResponse::validate()
{
}

web::json::value CreateAlgorithmResponse::toJson() const
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
bool CreateAlgorithmResponse::fromJson(const web::json::value& val)
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


AlgorithmResponse_metadata CreateAlgorithmResponse::getMetadata() const
{
    return metadata_;
}

void CreateAlgorithmResponse::setMetadata(const AlgorithmResponse_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateAlgorithmResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateAlgorithmResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

AlgorithmResponse_job_config CreateAlgorithmResponse::getJobConfig() const
{
    return jobConfig_;
}

void CreateAlgorithmResponse::setJobConfig(const AlgorithmResponse_job_config& value)
{
    jobConfig_ = value;
    jobConfigIsSet_ = true;
}

bool CreateAlgorithmResponse::jobConfigIsSet() const
{
    return jobConfigIsSet_;
}

void CreateAlgorithmResponse::unsetjobConfig()
{
    jobConfigIsSet_ = false;
}

std::vector<AlgorithmResponse_resource_requirements>& CreateAlgorithmResponse::getResourceRequirements()
{
    return resourceRequirements_;
}

void CreateAlgorithmResponse::setResourceRequirements(const std::vector<AlgorithmResponse_resource_requirements>& value)
{
    resourceRequirements_ = value;
    resourceRequirementsIsSet_ = true;
}

bool CreateAlgorithmResponse::resourceRequirementsIsSet() const
{
    return resourceRequirementsIsSet_;
}

void CreateAlgorithmResponse::unsetresourceRequirements()
{
    resourceRequirementsIsSet_ = false;
}

AlgorithmResponse_advanced_config CreateAlgorithmResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void CreateAlgorithmResponse::setAdvancedConfig(const AlgorithmResponse_advanced_config& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool CreateAlgorithmResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void CreateAlgorithmResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

}
}
}
}
}


