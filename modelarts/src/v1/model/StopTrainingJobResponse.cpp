

#include "huaweicloud/modelarts/v1/model/StopTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopTrainingJobResponse::StopTrainingJobResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    statusIsSet_ = false;
    algorithmIsSet_ = false;
    tasksIsSet_ = false;
    specIsSet_ = false;
    endpointsIsSet_ = false;
    ftjobConfigIsSet_ = false;
}

StopTrainingJobResponse::~StopTrainingJobResponse() = default;

void StopTrainingJobResponse::validate()
{
}

web::json::value StopTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(ftjobConfigIsSet_) {
        val[utility::conversions::to_string_t("ftjob_config")] = ModelBase::toJson(ftjobConfig_);
    }

    return val;
}
bool StopTrainingJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            JobMetadataResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            JobAlgorithmResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            SpecResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            JobEndpointsResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ftjob_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ftjob_config"));
        if(!fieldValue.is_null())
        {
            MasJobConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFtjobConfig(refVal);
        }
    }
    return ok;
}


std::string StopTrainingJobResponse::getKind() const
{
    return kind_;
}

void StopTrainingJobResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool StopTrainingJobResponse::kindIsSet() const
{
    return kindIsSet_;
}

void StopTrainingJobResponse::unsetkind()
{
    kindIsSet_ = false;
}

JobMetadataResponse StopTrainingJobResponse::getMetadata() const
{
    return metadata_;
}

void StopTrainingJobResponse::setMetadata(const JobMetadataResponse& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool StopTrainingJobResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void StopTrainingJobResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

Status StopTrainingJobResponse::getStatus() const
{
    return status_;
}

void StopTrainingJobResponse::setStatus(const Status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StopTrainingJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StopTrainingJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

JobAlgorithmResponse StopTrainingJobResponse::getAlgorithm() const
{
    return algorithm_;
}

void StopTrainingJobResponse::setAlgorithm(const JobAlgorithmResponse& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool StopTrainingJobResponse::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void StopTrainingJobResponse::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::vector<TaskResponse>& StopTrainingJobResponse::getTasks()
{
    return tasks_;
}

void StopTrainingJobResponse::setTasks(const std::vector<TaskResponse>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool StopTrainingJobResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void StopTrainingJobResponse::unsettasks()
{
    tasksIsSet_ = false;
}

SpecResponse StopTrainingJobResponse::getSpec() const
{
    return spec_;
}

void StopTrainingJobResponse::setSpec(const SpecResponse& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool StopTrainingJobResponse::specIsSet() const
{
    return specIsSet_;
}

void StopTrainingJobResponse::unsetspec()
{
    specIsSet_ = false;
}

JobEndpointsResp StopTrainingJobResponse::getEndpoints() const
{
    return endpoints_;
}

void StopTrainingJobResponse::setEndpoints(const JobEndpointsResp& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool StopTrainingJobResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void StopTrainingJobResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

MasJobConfig StopTrainingJobResponse::getFtjobConfig() const
{
    return ftjobConfig_;
}

void StopTrainingJobResponse::setFtjobConfig(const MasJobConfig& value)
{
    ftjobConfig_ = value;
    ftjobConfigIsSet_ = true;
}

bool StopTrainingJobResponse::ftjobConfigIsSet() const
{
    return ftjobConfigIsSet_;
}

void StopTrainingJobResponse::unsetftjobConfig()
{
    ftjobConfigIsSet_ = false;
}

}
}
}
}
}


