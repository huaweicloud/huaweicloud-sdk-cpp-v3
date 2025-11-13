

#include "huaweicloud/rds/v3/model/ListReplicationProfilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationProfilesResponse::ListReplicationProfilesResponse()
{
    profilesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListReplicationProfilesResponse::~ListReplicationProfilesResponse() = default;

void ListReplicationProfilesResponse::validate()
{
}

web::json::value ListReplicationProfilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(profilesIsSet_) {
        val[utility::conversions::to_string_t("profiles")] = ModelBase::toJson(profiles_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListReplicationProfilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profiles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profiles"));
        if(!fieldValue.is_null())
        {
            std::vector<ListReplicationProfilesResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfiles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ListReplicationProfilesResult>& ListReplicationProfilesResponse::getProfiles()
{
    return profiles_;
}

void ListReplicationProfilesResponse::setProfiles(const std::vector<ListReplicationProfilesResult>& value)
{
    profiles_ = value;
    profilesIsSet_ = true;
}

bool ListReplicationProfilesResponse::profilesIsSet() const
{
    return profilesIsSet_;
}

void ListReplicationProfilesResponse::unsetprofiles()
{
    profilesIsSet_ = false;
}

int32_t ListReplicationProfilesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListReplicationProfilesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListReplicationProfilesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListReplicationProfilesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


