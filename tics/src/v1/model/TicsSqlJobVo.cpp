

#include "huaweicloud/tics/v1/model/TicsSqlJobVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsSqlJobVo::TicsSqlJobVo()
{
    approvalStatus_ = "";
    approvalStatusIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    leagueId_ = "";
    leagueIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateUserId_ = "";
    updateUserIdIsSet_ = false;
    updateUserName_ = "";
    updateUserNameIsSet_ = false;
}

TicsSqlJobVo::~TicsSqlJobVo() = default;

void TicsSqlJobVo::validate()
{
}

web::json::value TicsSqlJobVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approvalStatusIsSet_) {
        val[utility::conversions::to_string_t("approval_status")] = ModelBase::toJson(approvalStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(leagueIdIsSet_) {
        val[utility::conversions::to_string_t("league_id")] = ModelBase::toJson(leagueId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIdIsSet_) {
        val[utility::conversions::to_string_t("update_user_id")] = ModelBase::toJson(updateUserId_);
    }
    if(updateUserNameIsSet_) {
        val[utility::conversions::to_string_t("update_user_name")] = ModelBase::toJson(updateUserName_);
    }

    return val;
}
bool TicsSqlJobVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approval_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUserName(refVal);
        }
    }
    return ok;
}


std::string TicsSqlJobVo::getApprovalStatus() const
{
    return approvalStatus_;
}

void TicsSqlJobVo::setApprovalStatus(const std::string& value)
{
    approvalStatus_ = value;
    approvalStatusIsSet_ = true;
}

bool TicsSqlJobVo::approvalStatusIsSet() const
{
    return approvalStatusIsSet_;
}

void TicsSqlJobVo::unsetapprovalStatus()
{
    approvalStatusIsSet_ = false;
}

utility::datetime TicsSqlJobVo::getCreateTime() const
{
    return createTime_;
}

void TicsSqlJobVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsSqlJobVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsSqlJobVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsSqlJobVo::getCreatorId() const
{
    return creatorId_;
}

void TicsSqlJobVo::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool TicsSqlJobVo::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void TicsSqlJobVo::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string TicsSqlJobVo::getCreatorName() const
{
    return creatorName_;
}

void TicsSqlJobVo::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool TicsSqlJobVo::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void TicsSqlJobVo::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

bool TicsSqlJobVo::isDeleted() const
{
    return deleted_;
}

void TicsSqlJobVo::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool TicsSqlJobVo::deletedIsSet() const
{
    return deletedIsSet_;
}

void TicsSqlJobVo::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string TicsSqlJobVo::getDescription() const
{
    return description_;
}

void TicsSqlJobVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool TicsSqlJobVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void TicsSqlJobVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string TicsSqlJobVo::getDomainId() const
{
    return domainId_;
}

void TicsSqlJobVo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool TicsSqlJobVo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void TicsSqlJobVo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string TicsSqlJobVo::getId() const
{
    return id_;
}

void TicsSqlJobVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TicsSqlJobVo::idIsSet() const
{
    return idIsSet_;
}

void TicsSqlJobVo::unsetid()
{
    idIsSet_ = false;
}

std::string TicsSqlJobVo::getJobType() const
{
    return jobType_;
}

void TicsSqlJobVo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool TicsSqlJobVo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void TicsSqlJobVo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string TicsSqlJobVo::getLeagueId() const
{
    return leagueId_;
}

void TicsSqlJobVo::setLeagueId(const std::string& value)
{
    leagueId_ = value;
    leagueIdIsSet_ = true;
}

bool TicsSqlJobVo::leagueIdIsSet() const
{
    return leagueIdIsSet_;
}

void TicsSqlJobVo::unsetleagueId()
{
    leagueIdIsSet_ = false;
}

std::string TicsSqlJobVo::getName() const
{
    return name_;
}

void TicsSqlJobVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TicsSqlJobVo::nameIsSet() const
{
    return nameIsSet_;
}

void TicsSqlJobVo::unsetname()
{
    nameIsSet_ = false;
}

utility::datetime TicsSqlJobVo::getUpdateTime() const
{
    return updateTime_;
}

void TicsSqlJobVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TicsSqlJobVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TicsSqlJobVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TicsSqlJobVo::getUpdateUserId() const
{
    return updateUserId_;
}

void TicsSqlJobVo::setUpdateUserId(const std::string& value)
{
    updateUserId_ = value;
    updateUserIdIsSet_ = true;
}

bool TicsSqlJobVo::updateUserIdIsSet() const
{
    return updateUserIdIsSet_;
}

void TicsSqlJobVo::unsetupdateUserId()
{
    updateUserIdIsSet_ = false;
}

std::string TicsSqlJobVo::getUpdateUserName() const
{
    return updateUserName_;
}

void TicsSqlJobVo::setUpdateUserName(const std::string& value)
{
    updateUserName_ = value;
    updateUserNameIsSet_ = true;
}

bool TicsSqlJobVo::updateUserNameIsSet() const
{
    return updateUserNameIsSet_;
}

void TicsSqlJobVo::unsetupdateUserName()
{
    updateUserNameIsSet_ = false;
}

}
}
}
}
}


