

#include "huaweicloud/modelarts/v1/model/Workload.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Workload::Workload()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    jobUUID_ = "";
    jobUUIDIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    resourceRequirementIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    runningDuration_ = 0;
    runningDurationIsSet_ = false;
    pendingDuration_ = 0;
    pendingDurationIsSet_ = false;
    pendingPosition_ = 0;
    pendingPositionIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    gvk_ = "";
    gvkIsSet_ = false;
    hostIps_ = "";
    hostIpsIsSet_ = false;
    nodesIsSet_ = false;
}

Workload::~Workload() = default;

void Workload::validate()
{
}

web::json::value Workload::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("jobName")] = ModelBase::toJson(jobName_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(jobUUIDIsSet_) {
        val[utility::conversions::to_string_t("jobUUID")] = ModelBase::toJson(jobUUID_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resourceRequirementIsSet_) {
        val[utility::conversions::to_string_t("resourceRequirement")] = ModelBase::toJson(resourceRequirement_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(runningDurationIsSet_) {
        val[utility::conversions::to_string_t("runningDuration")] = ModelBase::toJson(runningDuration_);
    }
    if(pendingDurationIsSet_) {
        val[utility::conversions::to_string_t("pendingDuration")] = ModelBase::toJson(pendingDuration_);
    }
    if(pendingPositionIsSet_) {
        val[utility::conversions::to_string_t("pendingPosition")] = ModelBase::toJson(pendingPosition_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(gvkIsSet_) {
        val[utility::conversions::to_string_t("gvk")] = ModelBase::toJson(gvk_);
    }
    if(hostIpsIsSet_) {
        val[utility::conversions::to_string_t("hostIps")] = ModelBase::toJson(hostIps_);
    }
    if(nodesIsSet_) {
        val[utility::conversions::to_string_t("nodes")] = ModelBase::toJson(nodes_);
    }

    return val;
}
bool Workload::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resourceRequirement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceRequirement"));
        if(!fieldValue.is_null())
        {
            Workload_resourceRequirement refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceRequirement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runningDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runningDuration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pendingDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pendingDuration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pendingPosition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pendingPosition"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingPosition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gvk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gvk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGvk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostIps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostIps"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodes"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkloadNodeVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodes(refVal);
        }
    }
    return ok;
}


std::string Workload::getApiVersion() const
{
    return apiVersion_;
}

void Workload::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool Workload::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void Workload::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string Workload::getKind() const
{
    return kind_;
}

void Workload::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool Workload::kindIsSet() const
{
    return kindIsSet_;
}

void Workload::unsetkind()
{
    kindIsSet_ = false;
}

std::string Workload::getType() const
{
    return type_;
}

void Workload::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Workload::typeIsSet() const
{
    return typeIsSet_;
}

void Workload::unsettype()
{
    typeIsSet_ = false;
}

std::string Workload::getNamespace() const
{
    return namespace_;
}

void Workload::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool Workload::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void Workload::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string Workload::getName() const
{
    return name_;
}

void Workload::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Workload::nameIsSet() const
{
    return nameIsSet_;
}

void Workload::unsetname()
{
    nameIsSet_ = false;
}

std::string Workload::getJobName() const
{
    return jobName_;
}

void Workload::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool Workload::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void Workload::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string Workload::getUid() const
{
    return uid_;
}

void Workload::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool Workload::uidIsSet() const
{
    return uidIsSet_;
}

void Workload::unsetuid()
{
    uidIsSet_ = false;
}

std::string Workload::getJobUUID() const
{
    return jobUUID_;
}

void Workload::setJobUUID(const std::string& value)
{
    jobUUID_ = value;
    jobUUIDIsSet_ = true;
}

bool Workload::jobUUIDIsSet() const
{
    return jobUUIDIsSet_;
}

void Workload::unsetjobUUID()
{
    jobUUIDIsSet_ = false;
}

std::string Workload::getFlavor() const
{
    return flavor_;
}

void Workload::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool Workload::flavorIsSet() const
{
    return flavorIsSet_;
}

void Workload::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string Workload::getStatus() const
{
    return status_;
}

void Workload::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Workload::statusIsSet() const
{
    return statusIsSet_;
}

void Workload::unsetstatus()
{
    statusIsSet_ = false;
}

Workload_resourceRequirement Workload::getResourceRequirement() const
{
    return resourceRequirement_;
}

void Workload::setResourceRequirement(const Workload_resourceRequirement& value)
{
    resourceRequirement_ = value;
    resourceRequirementIsSet_ = true;
}

bool Workload::resourceRequirementIsSet() const
{
    return resourceRequirementIsSet_;
}

void Workload::unsetresourceRequirement()
{
    resourceRequirementIsSet_ = false;
}

std::string Workload::getPriority() const
{
    return priority_;
}

void Workload::setPriority(const std::string& value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool Workload::priorityIsSet() const
{
    return priorityIsSet_;
}

void Workload::unsetpriority()
{
    priorityIsSet_ = false;
}

int32_t Workload::getRunningDuration() const
{
    return runningDuration_;
}

void Workload::setRunningDuration(int32_t value)
{
    runningDuration_ = value;
    runningDurationIsSet_ = true;
}

bool Workload::runningDurationIsSet() const
{
    return runningDurationIsSet_;
}

void Workload::unsetrunningDuration()
{
    runningDurationIsSet_ = false;
}

int32_t Workload::getPendingDuration() const
{
    return pendingDuration_;
}

void Workload::setPendingDuration(int32_t value)
{
    pendingDuration_ = value;
    pendingDurationIsSet_ = true;
}

bool Workload::pendingDurationIsSet() const
{
    return pendingDurationIsSet_;
}

void Workload::unsetpendingDuration()
{
    pendingDurationIsSet_ = false;
}

int32_t Workload::getPendingPosition() const
{
    return pendingPosition_;
}

void Workload::setPendingPosition(int32_t value)
{
    pendingPosition_ = value;
    pendingPositionIsSet_ = true;
}

bool Workload::pendingPositionIsSet() const
{
    return pendingPositionIsSet_;
}

void Workload::unsetpendingPosition()
{
    pendingPositionIsSet_ = false;
}

int32_t Workload::getCreateTime() const
{
    return createTime_;
}

void Workload::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool Workload::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void Workload::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string Workload::getGvk() const
{
    return gvk_;
}

void Workload::setGvk(const std::string& value)
{
    gvk_ = value;
    gvkIsSet_ = true;
}

bool Workload::gvkIsSet() const
{
    return gvkIsSet_;
}

void Workload::unsetgvk()
{
    gvkIsSet_ = false;
}

std::string Workload::getHostIps() const
{
    return hostIps_;
}

void Workload::setHostIps(const std::string& value)
{
    hostIps_ = value;
    hostIpsIsSet_ = true;
}

bool Workload::hostIpsIsSet() const
{
    return hostIpsIsSet_;
}

void Workload::unsethostIps()
{
    hostIpsIsSet_ = false;
}

std::vector<WorkloadNodeVO>& Workload::getNodes()
{
    return nodes_;
}

void Workload::setNodes(const std::vector<WorkloadNodeVO>& value)
{
    nodes_ = value;
    nodesIsSet_ = true;
}

bool Workload::nodesIsSet() const
{
    return nodesIsSet_;
}

void Workload::unsetnodes()
{
    nodesIsSet_ = false;
}

}
}
}
}
}


