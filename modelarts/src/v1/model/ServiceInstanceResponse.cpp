

#include "huaweicloud/modelarts/v1/model/ServiceInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceInstanceResponse::ServiceInstanceResponse()
{
    instanceName_ = "";
    instanceNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    podCount_ = 0L;
    podCountIsSet_ = false;
    runningPodCount_ = 0L;
    runningPodCountIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
}

ServiceInstanceResponse::~ServiceInstanceResponse() = default;

void ServiceInstanceResponse::validate()
{
}

web::json::value ServiceInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(podCountIsSet_) {
        val[utility::conversions::to_string_t("pod_count")] = ModelBase::toJson(podCount_);
    }
    if(runningPodCountIsSet_) {
        val[utility::conversions::to_string_t("running_pod_count")] = ModelBase::toJson(runningPodCount_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ServiceInstanceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pod_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pod_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_pod_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_pod_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningPodCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string ServiceInstanceResponse::getInstanceName() const
{
    return instanceName_;
}

void ServiceInstanceResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ServiceInstanceResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ServiceInstanceResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string ServiceInstanceResponse::getStatus() const
{
    return status_;
}

void ServiceInstanceResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServiceInstanceResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ServiceInstanceResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ServiceInstanceResponse::getWeight() const
{
    return weight_;
}

void ServiceInstanceResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ServiceInstanceResponse::weightIsSet() const
{
    return weightIsSet_;
}

void ServiceInstanceResponse::unsetweight()
{
    weightIsSet_ = false;
}

int64_t ServiceInstanceResponse::getPodCount() const
{
    return podCount_;
}

void ServiceInstanceResponse::setPodCount(int64_t value)
{
    podCount_ = value;
    podCountIsSet_ = true;
}

bool ServiceInstanceResponse::podCountIsSet() const
{
    return podCountIsSet_;
}

void ServiceInstanceResponse::unsetpodCount()
{
    podCountIsSet_ = false;
}

int64_t ServiceInstanceResponse::getRunningPodCount() const
{
    return runningPodCount_;
}

void ServiceInstanceResponse::setRunningPodCount(int64_t value)
{
    runningPodCount_ = value;
    runningPodCountIsSet_ = true;
}

bool ServiceInstanceResponse::runningPodCountIsSet() const
{
    return runningPodCountIsSet_;
}

void ServiceInstanceResponse::unsetrunningPodCount()
{
    runningPodCountIsSet_ = false;
}

int64_t ServiceInstanceResponse::getUpdateAt() const
{
    return updateAt_;
}

void ServiceInstanceResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ServiceInstanceResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ServiceInstanceResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


