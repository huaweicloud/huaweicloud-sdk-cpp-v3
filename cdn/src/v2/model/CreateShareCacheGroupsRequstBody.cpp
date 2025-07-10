

#include "huaweicloud/cdn/v2/model/CreateShareCacheGroupsRequstBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CreateShareCacheGroupsRequstBody::CreateShareCacheGroupsRequstBody()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    primaryDomain_ = "";
    primaryDomainIsSet_ = false;
    shareCacheRecordsIsSet_ = false;
}

CreateShareCacheGroupsRequstBody::~CreateShareCacheGroupsRequstBody() = default;

void CreateShareCacheGroupsRequstBody::validate()
{
}

web::json::value CreateShareCacheGroupsRequstBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(primaryDomainIsSet_) {
        val[utility::conversions::to_string_t("primary_domain")] = ModelBase::toJson(primaryDomain_);
    }
    if(shareCacheRecordsIsSet_) {
        val[utility::conversions::to_string_t("share_cache_records")] = ModelBase::toJson(shareCacheRecords_);
    }

    return val;
}
bool CreateShareCacheGroupsRequstBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("share_cache_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("share_cache_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ShareCacheGroupsRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShareCacheRecords(refVal);
        }
    }
    return ok;
}


std::string CreateShareCacheGroupsRequstBody::getGroupName() const
{
    return groupName_;
}

void CreateShareCacheGroupsRequstBody::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool CreateShareCacheGroupsRequstBody::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void CreateShareCacheGroupsRequstBody::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string CreateShareCacheGroupsRequstBody::getPrimaryDomain() const
{
    return primaryDomain_;
}

void CreateShareCacheGroupsRequstBody::setPrimaryDomain(const std::string& value)
{
    primaryDomain_ = value;
    primaryDomainIsSet_ = true;
}

bool CreateShareCacheGroupsRequstBody::primaryDomainIsSet() const
{
    return primaryDomainIsSet_;
}

void CreateShareCacheGroupsRequstBody::unsetprimaryDomain()
{
    primaryDomainIsSet_ = false;
}

std::vector<ShareCacheGroupsRecord>& CreateShareCacheGroupsRequstBody::getShareCacheRecords()
{
    return shareCacheRecords_;
}

void CreateShareCacheGroupsRequstBody::setShareCacheRecords(const std::vector<ShareCacheGroupsRecord>& value)
{
    shareCacheRecords_ = value;
    shareCacheRecordsIsSet_ = true;
}

bool CreateShareCacheGroupsRequstBody::shareCacheRecordsIsSet() const
{
    return shareCacheRecordsIsSet_;
}

void CreateShareCacheGroupsRequstBody::unsetshareCacheRecords()
{
    shareCacheRecordsIsSet_ = false;
}

}
}
}
}
}


