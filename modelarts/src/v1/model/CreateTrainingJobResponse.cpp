

#include "huaweicloud/modelarts/v1/model/CreateTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateTrainingJobResponse::CreateTrainingJobResponse()
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

CreateTrainingJobResponse::~CreateTrainingJobResponse() = default;

void CreateTrainingJobResponse::validate()
{
}

web::json::value CreateTrainingJobResponse::toJson() const
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
bool CreateTrainingJobResponse::fromJson(const web::json::value& val)
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


std::string CreateTrainingJobResponse::getKind() const
{
    return kind_;
}

void CreateTrainingJobResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateTrainingJobResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreateTrainingJobResponse::unsetkind()
{
    kindIsSet_ = false;
}

JobMetadataResponse CreateTrainingJobResponse::getMetadata() const
{
    return metadata_;
}

void CreateTrainingJobResponse::setMetadata(const JobMetadataResponse& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateTrainingJobResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateTrainingJobResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

Status CreateTrainingJobResponse::getStatus() const
{
    return status_;
}

void CreateTrainingJobResponse::setStatus(const Status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTrainingJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTrainingJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

JobAlgorithmResponse CreateTrainingJobResponse::getAlgorithm() const
{
    return algorithm_;
}

void CreateTrainingJobResponse::setAlgorithm(const JobAlgorithmResponse& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool CreateTrainingJobResponse::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void CreateTrainingJobResponse::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::vector<TaskResponse>& CreateTrainingJobResponse::getTasks()
{
    return tasks_;
}

void CreateTrainingJobResponse::setTasks(const std::vector<TaskResponse>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool CreateTrainingJobResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void CreateTrainingJobResponse::unsettasks()
{
    tasksIsSet_ = false;
}

SpecResponse CreateTrainingJobResponse::getSpec() const
{
    return spec_;
}

void CreateTrainingJobResponse::setSpec(const SpecResponse& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateTrainingJobResponse::specIsSet() const
{
    return specIsSet_;
}

void CreateTrainingJobResponse::unsetspec()
{
    specIsSet_ = false;
}

JobEndpointsResp CreateTrainingJobResponse::getEndpoints() const
{
    return endpoints_;
}

void CreateTrainingJobResponse::setEndpoints(const JobEndpointsResp& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool CreateTrainingJobResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void CreateTrainingJobResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

MasJobConfig CreateTrainingJobResponse::getFtjobConfig() const
{
    return ftjobConfig_;
}

void CreateTrainingJobResponse::setFtjobConfig(const MasJobConfig& value)
{
    ftjobConfig_ = value;
    ftjobConfigIsSet_ = true;
}

bool CreateTrainingJobResponse::ftjobConfigIsSet() const
{
    return ftjobConfigIsSet_;
}

void CreateTrainingJobResponse::unsetftjobConfig()
{
    ftjobConfigIsSet_ = false;
}

}
}
}
}
}


