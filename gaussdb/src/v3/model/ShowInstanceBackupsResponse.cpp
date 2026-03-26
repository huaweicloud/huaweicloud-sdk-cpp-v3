

#include "huaweicloud/gaussdb/v3/model/ShowInstanceBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceBackupsResponse::ShowInstanceBackupsResponse()
{
    backupsIsSet_ = false;
    totalCount_ = "";
    totalCountIsSet_ = false;
}

ShowInstanceBackupsResponse::~ShowInstanceBackupsResponse() = default;

void ShowInstanceBackupsResponse::validate()
{
}

web::json::value ShowInstanceBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowInstanceBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupV3> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<BackupV3>& ShowInstanceBackupsResponse::getBackups()
{
    return backups_;
}

void ShowInstanceBackupsResponse::setBackups(const std::vector<BackupV3>& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ShowInstanceBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ShowInstanceBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

std::string ShowInstanceBackupsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowInstanceBackupsResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowInstanceBackupsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowInstanceBackupsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


