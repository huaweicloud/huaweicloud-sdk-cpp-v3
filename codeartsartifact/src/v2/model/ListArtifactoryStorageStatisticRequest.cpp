

#include "huaweicloud/codeartsartifact/v2/model/ListArtifactoryStorageStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListArtifactoryStorageStatisticRequest::ListArtifactoryStorageStatisticRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    repo_ = "";
    repoIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListArtifactoryStorageStatisticRequest::~ListArtifactoryStorageStatisticRequest() = default;

void ListArtifactoryStorageStatisticRequest::validate()
{
}

web::json::value ListArtifactoryStorageStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(repoIsSet_) {
        val[utility::conversions::to_string_t("repo")] = ModelBase::toJson(repo_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListArtifactoryStorageStatisticRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListArtifactoryStorageStatisticRequest::getTenantId() const
{
    return tenantId_;
}

void ListArtifactoryStorageStatisticRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListArtifactoryStorageStatisticRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListArtifactoryStorageStatisticRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListArtifactoryStorageStatisticRequest::getRepo() const
{
    return repo_;
}

void ListArtifactoryStorageStatisticRequest::setRepo(const std::string& value)
{
    repo_ = value;
    repoIsSet_ = true;
}

bool ListArtifactoryStorageStatisticRequest::repoIsSet() const
{
    return repoIsSet_;
}

void ListArtifactoryStorageStatisticRequest::unsetrepo()
{
    repoIsSet_ = false;
}

std::string ListArtifactoryStorageStatisticRequest::getStartTime() const
{
    return startTime_;
}

void ListArtifactoryStorageStatisticRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListArtifactoryStorageStatisticRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListArtifactoryStorageStatisticRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListArtifactoryStorageStatisticRequest::getEndTime() const
{
    return endTime_;
}

void ListArtifactoryStorageStatisticRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListArtifactoryStorageStatisticRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListArtifactoryStorageStatisticRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListArtifactoryStorageStatisticRequest::getInstanceId() const
{
    return instanceId_;
}

void ListArtifactoryStorageStatisticRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListArtifactoryStorageStatisticRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListArtifactoryStorageStatisticRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


