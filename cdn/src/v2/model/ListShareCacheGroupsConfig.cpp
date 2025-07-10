

#include "huaweicloud/cdn/v2/model/ListShareCacheGroupsConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListShareCacheGroupsConfig::ListShareCacheGroupsConfig()
{
    id_ = "";
    idIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    shareCacheRecordsIsSet_ = false;
    primaryDomain_ = "";
    primaryDomainIsSet_ = false;
}

ListShareCacheGroupsConfig::~ListShareCacheGroupsConfig() = default;

void ListShareCacheGroupsConfig::validate()
{
}

web::json::value ListShareCacheGroupsConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(shareCacheRecordsIsSet_) {
        val[utility::conversions::to_string_t("share_cache_records")] = ModelBase::toJson(shareCacheRecords_);
    }
    if(primaryDomainIsSet_) {
        val[utility::conversions::to_string_t("primary_domain")] = ModelBase::toJson(primaryDomain_);
    }

    return val;
}
bool ListShareCacheGroupsConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("share_cache_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_cache_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ListShareCacheGroupsRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareCacheRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryDomain(refVal);
        }
    }
    return ok;
}


std::string ListShareCacheGroupsConfig::getId() const
{
    return id_;
}

void ListShareCacheGroupsConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListShareCacheGroupsConfig::idIsSet() const
{
    return idIsSet_;
}

void ListShareCacheGroupsConfig::unsetid()
{
    idIsSet_ = false;
}

std::string ListShareCacheGroupsConfig::getGroupName() const
{
    return groupName_;
}

void ListShareCacheGroupsConfig::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListShareCacheGroupsConfig::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListShareCacheGroupsConfig::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t ListShareCacheGroupsConfig::getCreateTime() const
{
    return createTime_;
}

void ListShareCacheGroupsConfig::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListShareCacheGroupsConfig::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListShareCacheGroupsConfig::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<ListShareCacheGroupsRecord>& ListShareCacheGroupsConfig::getShareCacheRecords()
{
    return shareCacheRecords_;
}

void ListShareCacheGroupsConfig::setShareCacheRecords(const std::vector<ListShareCacheGroupsRecord>& value)
{
    shareCacheRecords_ = value;
    shareCacheRecordsIsSet_ = true;
}

bool ListShareCacheGroupsConfig::shareCacheRecordsIsSet() const
{
    return shareCacheRecordsIsSet_;
}

void ListShareCacheGroupsConfig::unsetshareCacheRecords()
{
    shareCacheRecordsIsSet_ = false;
}

std::string ListShareCacheGroupsConfig::getPrimaryDomain() const
{
    return primaryDomain_;
}

void ListShareCacheGroupsConfig::setPrimaryDomain(const std::string& value)
{
    primaryDomain_ = value;
    primaryDomainIsSet_ = true;
}

bool ListShareCacheGroupsConfig::primaryDomainIsSet() const
{
    return primaryDomainIsSet_;
}

void ListShareCacheGroupsConfig::unsetprimaryDomain()
{
    primaryDomainIsSet_ = false;
}

}
}
}
}
}


