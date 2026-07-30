

#include "huaweicloud/modelarts/v1/model/JobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobResponse::JobResponse()
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

JobResponse::~JobResponse() = default;

void JobResponse::validate()
{
}

web::json::value JobResponse::toJson() const
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
bool JobResponse::fromJson(const web::json::value& val)
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


std::string JobResponse::getKind() const
{
    return kind_;
}

void JobResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool JobResponse::kindIsSet() const
{
    return kindIsSet_;
}

void JobResponse::unsetkind()
{
    kindIsSet_ = false;
}

JobMetadataResponse JobResponse::getMetadata() const
{
    return metadata_;
}

void JobResponse::setMetadata(const JobMetadataResponse& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool JobResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void JobResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

Status JobResponse::getStatus() const
{
    return status_;
}

void JobResponse::setStatus(const Status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void JobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

JobAlgorithmResponse JobResponse::getAlgorithm() const
{
    return algorithm_;
}

void JobResponse::setAlgorithm(const JobAlgorithmResponse& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool JobResponse::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void JobResponse::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::vector<TaskResponse>& JobResponse::getTasks()
{
    return tasks_;
}

void JobResponse::setTasks(const std::vector<TaskResponse>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool JobResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void JobResponse::unsettasks()
{
    tasksIsSet_ = false;
}

SpecResponse JobResponse::getSpec() const
{
    return spec_;
}

void JobResponse::setSpec(const SpecResponse& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool JobResponse::specIsSet() const
{
    return specIsSet_;
}

void JobResponse::unsetspec()
{
    specIsSet_ = false;
}

JobEndpointsResp JobResponse::getEndpoints() const
{
    return endpoints_;
}

void JobResponse::setEndpoints(const JobEndpointsResp& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool JobResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void JobResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

MasJobConfig JobResponse::getFtjobConfig() const
{
    return ftjobConfig_;
}

void JobResponse::setFtjobConfig(const MasJobConfig& value)
{
    ftjobConfig_ = value;
    ftjobConfigIsSet_ = true;
}

bool JobResponse::ftjobConfigIsSet() const
{
    return ftjobConfigIsSet_;
}

void JobResponse::unsetftjobConfig()
{
    ftjobConfigIsSet_ = false;
}

}
}
}
}
}


