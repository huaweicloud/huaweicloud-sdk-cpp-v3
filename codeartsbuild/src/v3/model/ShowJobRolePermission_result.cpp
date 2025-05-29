

#include "huaweicloud/codeartsbuild/v3/model/ShowJobRolePermission_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobRolePermission_result::ShowJobRolePermission_result()
{
    id_ = 0;
    idIsSet_ = false;
    roleId_ = 0;
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    isModify_ = false;
    isModifyIsSet_ = false;
    isDelete_ = false;
    isDeleteIsSet_ = false;
    isView_ = false;
    isViewIsSet_ = false;
    isExecute_ = false;
    isExecuteIsSet_ = false;
    isCopy_ = false;
    isCopyIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    isManager_ = false;
    isManagerIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowJobRolePermission_result::~ShowJobRolePermission_result() = default;

void ShowJobRolePermission_result::validate()
{
}

web::json::value ShowJobRolePermission_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(isModifyIsSet_) {
        val[utility::conversions::to_string_t("is_modify")] = ModelBase::toJson(isModify_);
    }
    if(isDeleteIsSet_) {
        val[utility::conversions::to_string_t("is_delete")] = ModelBase::toJson(isDelete_);
    }
    if(isViewIsSet_) {
        val[utility::conversions::to_string_t("is_view")] = ModelBase::toJson(isView_);
    }
    if(isExecuteIsSet_) {
        val[utility::conversions::to_string_t("is_execute")] = ModelBase::toJson(isExecute_);
    }
    if(isCopyIsSet_) {
        val[utility::conversions::to_string_t("is_copy")] = ModelBase::toJson(isCopy_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(isManagerIsSet_) {
        val[utility::conversions::to_string_t("is_manager")] = ModelBase::toJson(isManager_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ShowJobRolePermission_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_modify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_modify"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsModify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_view"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_execute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_execute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCopy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_forbidden"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForbidden(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_manager"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_manager"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsManager(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t ShowJobRolePermission_result::getId() const
{
    return id_;
}

void ShowJobRolePermission_result::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowJobRolePermission_result::idIsSet() const
{
    return idIsSet_;
}

void ShowJobRolePermission_result::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowJobRolePermission_result::getRoleId() const
{
    return roleId_;
}

void ShowJobRolePermission_result::setRoleId(int32_t value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowJobRolePermission_result::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowJobRolePermission_result::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ShowJobRolePermission_result::getRoleName() const
{
    return roleName_;
}

void ShowJobRolePermission_result::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ShowJobRolePermission_result::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ShowJobRolePermission_result::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string ShowJobRolePermission_result::getJobId() const
{
    return jobId_;
}

void ShowJobRolePermission_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobRolePermission_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobRolePermission_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsModify() const
{
    return isModify_;
}

void ShowJobRolePermission_result::setIsModify(bool value)
{
    isModify_ = value;
    isModifyIsSet_ = true;
}

bool ShowJobRolePermission_result::isModifyIsSet() const
{
    return isModifyIsSet_;
}

void ShowJobRolePermission_result::unsetisModify()
{
    isModifyIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsDelete() const
{
    return isDelete_;
}

void ShowJobRolePermission_result::setIsDelete(bool value)
{
    isDelete_ = value;
    isDeleteIsSet_ = true;
}

bool ShowJobRolePermission_result::isDeleteIsSet() const
{
    return isDeleteIsSet_;
}

void ShowJobRolePermission_result::unsetisDelete()
{
    isDeleteIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsView() const
{
    return isView_;
}

void ShowJobRolePermission_result::setIsView(bool value)
{
    isView_ = value;
    isViewIsSet_ = true;
}

bool ShowJobRolePermission_result::isViewIsSet() const
{
    return isViewIsSet_;
}

void ShowJobRolePermission_result::unsetisView()
{
    isViewIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsExecute() const
{
    return isExecute_;
}

void ShowJobRolePermission_result::setIsExecute(bool value)
{
    isExecute_ = value;
    isExecuteIsSet_ = true;
}

bool ShowJobRolePermission_result::isExecuteIsSet() const
{
    return isExecuteIsSet_;
}

void ShowJobRolePermission_result::unsetisExecute()
{
    isExecuteIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsCopy() const
{
    return isCopy_;
}

void ShowJobRolePermission_result::setIsCopy(bool value)
{
    isCopy_ = value;
    isCopyIsSet_ = true;
}

bool ShowJobRolePermission_result::isCopyIsSet() const
{
    return isCopyIsSet_;
}

void ShowJobRolePermission_result::unsetisCopy()
{
    isCopyIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsForbidden() const
{
    return isForbidden_;
}

void ShowJobRolePermission_result::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool ShowJobRolePermission_result::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void ShowJobRolePermission_result::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

bool ShowJobRolePermission_result::isIsManager() const
{
    return isManager_;
}

void ShowJobRolePermission_result::setIsManager(bool value)
{
    isManager_ = value;
    isManagerIsSet_ = true;
}

bool ShowJobRolePermission_result::isManagerIsSet() const
{
    return isManagerIsSet_;
}

void ShowJobRolePermission_result::unsetisManager()
{
    isManagerIsSet_ = false;
}

std::string ShowJobRolePermission_result::getCreateTime() const
{
    return createTime_;
}

void ShowJobRolePermission_result::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowJobRolePermission_result::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowJobRolePermission_result::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowJobRolePermission_result::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void ShowJobRolePermission_result::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool ShowJobRolePermission_result::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void ShowJobRolePermission_result::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

int32_t ShowJobRolePermission_result::getCount() const
{
    return count_;
}

void ShowJobRolePermission_result::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowJobRolePermission_result::countIsSet() const
{
    return countIsSet_;
}

void ShowJobRolePermission_result::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


