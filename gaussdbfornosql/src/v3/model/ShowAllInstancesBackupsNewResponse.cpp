

#include "huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowAllInstancesBackupsNewResponse::ShowAllInstancesBackupsNewResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    backupsIsSet_ = false;
}

ShowAllInstancesBackupsNewResponse::~ShowAllInstancesBackupsNewResponse() = default;

void ShowAllInstancesBackupsNewResponse::validate()
{
}

web::json::value ShowAllInstancesBackupsNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }

    return val;
}
bool ShowAllInstancesBackupsNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<Backup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    return ok;
}


int32_t ShowAllInstancesBackupsNewResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowAllInstancesBackupsNewResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowAllInstancesBackupsNewResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowAllInstancesBackupsNewResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<Backup>& ShowAllInstancesBackupsNewResponse::getBackups()
{
    return backups_;
}

void ShowAllInstancesBackupsNewResponse::setBackups(const std::vector<Backup>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowAllInstancesBackupsNewResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowAllInstancesBackupsNewResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

}
}
}
}
}


