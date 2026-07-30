

#include "huaweicloud/modelarts/v1/model/Job.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Job::Job()
{
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    algorithmIsSet_ = false;
    tasksIsSet_ = false;
    specIsSet_ = false;
    endpointsIsSet_ = false;
    trainType_ = "";
    trainTypeIsSet_ = false;
    ftjobConfigIsSet_ = false;
}

Job::~Job() = default;

void Job::validate()
{
}

web::json::value Job::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
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
    if(trainTypeIsSet_) {
        val[utility::conversions::to_string_t("train_type")] = ModelBase::toJson(trainType_);
    }
    if(ftjobConfigIsSet_) {
        val[utility::conversions::to_string_t("ftjob_config")] = ModelBase::toJson(ftjobConfig_);
    }

    return val;
}
bool Job::fromJson(const web::json::value& val)
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
            JobMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            JobAlgorithm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<Task> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            Spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            JobEndpointsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainType(refVal);
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


std::string Job::getKind() const
{
    return kind_;
}

void Job::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool Job::kindIsSet() const
{
    return kindIsSet_;
}

void Job::unsetkind()
{
    kindIsSet_ = false;
}

JobMetadata Job::getMetadata() const
{
    return metadata_;
}

void Job::setMetadata(const JobMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Job::metadataIsSet() const
{
    return metadataIsSet_;
}

void Job::unsetmetadata()
{
    metadataIsSet_ = false;
}

JobAlgorithm Job::getAlgorithm() const
{
    return algorithm_;
}

void Job::setAlgorithm(const JobAlgorithm& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool Job::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void Job::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::vector<Task>& Job::getTasks()
{
    return tasks_;
}

void Job::setTasks(const std::vector<Task>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool Job::tasksIsSet() const
{
    return tasksIsSet_;
}

void Job::unsettasks()
{
    tasksIsSet_ = false;
}

Spec Job::getSpec() const
{
    return spec_;
}

void Job::setSpec(const Spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool Job::specIsSet() const
{
    return specIsSet_;
}

void Job::unsetspec()
{
    specIsSet_ = false;
}

JobEndpointsReq Job::getEndpoints() const
{
    return endpoints_;
}

void Job::setEndpoints(const JobEndpointsReq& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool Job::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void Job::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string Job::getTrainType() const
{
    return trainType_;
}

void Job::setTrainType(const std::string& value)
{
    trainType_ = value;
    trainTypeIsSet_ = true;
}

bool Job::trainTypeIsSet() const
{
    return trainTypeIsSet_;
}

void Job::unsettrainType()
{
    trainTypeIsSet_ = false;
}

MasJobConfig Job::getFtjobConfig() const
{
    return ftjobConfig_;
}

void Job::setFtjobConfig(const MasJobConfig& value)
{
    ftjobConfig_ = value;
    ftjobConfigIsSet_ = true;
}

bool Job::ftjobConfigIsSet() const
{
    return ftjobConfigIsSet_;
}

void Job::unsetftjobConfig()
{
    ftjobConfigIsSet_ = false;
}

}
}
}
}
}


