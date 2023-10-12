

#include "huaweicloud/rds/v3/model/ListOffSiteInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOffSiteInstancesResponse::ListOffSiteInstancesResponse()
{
    offsiteBackupInstancesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListOffSiteInstancesResponse::~ListOffSiteInstancesResponse() = default;

void ListOffSiteInstancesResponse::validate()
{
}

web::json::value ListOffSiteInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsiteBackupInstancesIsSet_) {
        val[utility::conversions::to_string_t("offsite_backup_instances")] = ModelBase::toJson(offsiteBackupInstances_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListOffSiteInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offsite_backup_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offsite_backup_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<OffsiteBackupInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffsiteBackupInstances(refVal);
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


std::vector<OffsiteBackupInstance>& ListOffSiteInstancesResponse::getOffsiteBackupInstances()
{
    return offsiteBackupInstances_;
}

void ListOffSiteInstancesResponse::setOffsiteBackupInstances(const std::vector<OffsiteBackupInstance>& value)
{
    offsiteBackupInstances_ = value;
    offsiteBackupInstancesIsSet_ = true;
}

bool ListOffSiteInstancesResponse::offsiteBackupInstancesIsSet() const
{
    return offsiteBackupInstancesIsSet_;
}

void ListOffSiteInstancesResponse::unsetoffsiteBackupInstances()
{
    offsiteBackupInstancesIsSet_ = false;
}

int32_t ListOffSiteInstancesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListOffSiteInstancesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListOffSiteInstancesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListOffSiteInstancesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


