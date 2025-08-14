

#include "huaweicloud/identitycenterstore/v1/model/GetIdentityStoreSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetIdentityStoreSummaryResponse::GetIdentityStoreSummaryResponse()
{
    users_ = 0L;
    usersIsSet_ = false;
    usersQuota_ = 0L;
    usersQuotaIsSet_ = false;
    groups_ = 0L;
    groupsIsSet_ = false;
    groupsQuota_ = 0L;
    groupsQuotaIsSet_ = false;
}

GetIdentityStoreSummaryResponse::~GetIdentityStoreSummaryResponse() = default;

void GetIdentityStoreSummaryResponse::validate()
{
}

web::json::value GetIdentityStoreSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }
    if(usersQuotaIsSet_) {
        val[utility::conversions::to_string_t("users_quota")] = ModelBase::toJson(usersQuota_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(groupsQuotaIsSet_) {
        val[utility::conversions::to_string_t("groups_quota")] = ModelBase::toJson(groupsQuota_);
    }

    return val;
}
bool GetIdentityStoreSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsersQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupsQuota(refVal);
        }
    }
    return ok;
}


int64_t GetIdentityStoreSummaryResponse::getUsers() const
{
    return users_;
}

void GetIdentityStoreSummaryResponse::setUsers(int64_t value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool GetIdentityStoreSummaryResponse::usersIsSet() const
{
    return usersIsSet_;
}

void GetIdentityStoreSummaryResponse::unsetusers()
{
    usersIsSet_ = false;
}

int64_t GetIdentityStoreSummaryResponse::getUsersQuota() const
{
    return usersQuota_;
}

void GetIdentityStoreSummaryResponse::setUsersQuota(int64_t value)
{
    usersQuota_ = value;
    usersQuotaIsSet_ = true;
}

bool GetIdentityStoreSummaryResponse::usersQuotaIsSet() const
{
    return usersQuotaIsSet_;
}

void GetIdentityStoreSummaryResponse::unsetusersQuota()
{
    usersQuotaIsSet_ = false;
}

int64_t GetIdentityStoreSummaryResponse::getGroups() const
{
    return groups_;
}

void GetIdentityStoreSummaryResponse::setGroups(int64_t value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool GetIdentityStoreSummaryResponse::groupsIsSet() const
{
    return groupsIsSet_;
}

void GetIdentityStoreSummaryResponse::unsetgroups()
{
    groupsIsSet_ = false;
}

int64_t GetIdentityStoreSummaryResponse::getGroupsQuota() const
{
    return groupsQuota_;
}

void GetIdentityStoreSummaryResponse::setGroupsQuota(int64_t value)
{
    groupsQuota_ = value;
    groupsQuotaIsSet_ = true;
}

bool GetIdentityStoreSummaryResponse::groupsQuotaIsSet() const
{
    return groupsQuotaIsSet_;
}

void GetIdentityStoreSummaryResponse::unsetgroupsQuota()
{
    groupsQuotaIsSet_ = false;
}

}
}
}
}
}


