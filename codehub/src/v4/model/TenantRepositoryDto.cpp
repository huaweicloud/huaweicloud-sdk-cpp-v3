

#include "huaweicloud/codehub/v4/model/TenantRepositoryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




TenantRepositoryDto::TenantRepositoryDto()
{
    owner_ = "";
    ownerIsSet_ = false;
    capacity_ = 0.0;
    capacityIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    memberNumber_ = 0;
    memberNumberIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

TenantRepositoryDto::~TenantRepositoryDto() = default;

void TenantRepositoryDto::validate()
{
}

web::json::value TenantRepositoryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(moderationResultIsSet_) {
        val[utility::conversions::to_string_t("moderation_result")] = ModelBase::toJson(moderationResult_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(memberNumberIsSet_) {
        val[utility::conversions::to_string_t("member_number")] = ModelBase::toJson(memberNumber_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool TenantRepositoryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string TenantRepositoryDto::getOwner() const
{
    return owner_;
}

void TenantRepositoryDto::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TenantRepositoryDto::ownerIsSet() const
{
    return ownerIsSet_;
}

void TenantRepositoryDto::unsetowner()
{
    ownerIsSet_ = false;
}

double TenantRepositoryDto::getCapacity() const
{
    return capacity_;
}

void TenantRepositoryDto::setCapacity(double value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool TenantRepositoryDto::capacityIsSet() const
{
    return capacityIsSet_;
}

void TenantRepositoryDto::unsetcapacity()
{
    capacityIsSet_ = false;
}

int32_t TenantRepositoryDto::getStatus() const
{
    return status_;
}

void TenantRepositoryDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TenantRepositoryDto::statusIsSet() const
{
    return statusIsSet_;
}

void TenantRepositoryDto::unsetstatus()
{
    statusIsSet_ = false;
}

bool TenantRepositoryDto::isModerationResult() const
{
    return moderationResult_;
}

void TenantRepositoryDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool TenantRepositoryDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void TenantRepositoryDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

std::string TenantRepositoryDto::getCreateTime() const
{
    return createTime_;
}

void TenantRepositoryDto::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TenantRepositoryDto::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TenantRepositoryDto::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int32_t TenantRepositoryDto::getMemberNumber() const
{
    return memberNumber_;
}

void TenantRepositoryDto::setMemberNumber(int32_t value)
{
    memberNumber_ = value;
    memberNumberIsSet_ = true;
}

bool TenantRepositoryDto::memberNumberIsSet() const
{
    return memberNumberIsSet_;
}

void TenantRepositoryDto::unsetmemberNumber()
{
    memberNumberIsSet_ = false;
}

int32_t TenantRepositoryDto::getRepositoryId() const
{
    return repositoryId_;
}

void TenantRepositoryDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool TenantRepositoryDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void TenantRepositoryDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string TenantRepositoryDto::getRepositoryName() const
{
    return repositoryName_;
}

void TenantRepositoryDto::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool TenantRepositoryDto::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void TenantRepositoryDto::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string TenantRepositoryDto::getProjectName() const
{
    return projectName_;
}

void TenantRepositoryDto::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TenantRepositoryDto::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TenantRepositoryDto::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TenantRepositoryDto::getProjectId() const
{
    return projectId_;
}

void TenantRepositoryDto::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TenantRepositoryDto::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TenantRepositoryDto::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


