

#include "huaweicloud/gaussdb/v3/model/CreateRestoreTablesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateRestoreTablesRequestBody::CreateRestoreTablesRequestBody()
{
    restoreTime_ = "";
    restoreTimeIsSet_ = false;
    lastTableInfo_ = "";
    lastTableInfoIsSet_ = false;
    restoreTablesIsSet_ = false;
}

CreateRestoreTablesRequestBody::~CreateRestoreTablesRequestBody() = default;

void CreateRestoreTablesRequestBody::validate()
{
}

web::json::value CreateRestoreTablesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restoreTimeIsSet_) {
        val[utility::conversions::to_string_t("restore_time")] = ModelBase::toJson(restoreTime_);
    }
    if(lastTableInfoIsSet_) {
        val[utility::conversions::to_string_t("last_table_info")] = ModelBase::toJson(lastTableInfo_);
    }
    if(restoreTablesIsSet_) {
        val[utility::conversions::to_string_t("restore_tables")] = ModelBase::toJson(restoreTables_);
    }

    return val;
}
bool CreateRestoreTablesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restore_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_table_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_table_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastTableInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateRestoreDatabaseTableInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTables(refVal);
        }
    }
    return ok;
}


std::string CreateRestoreTablesRequestBody::getRestoreTime() const
{
    return restoreTime_;
}

void CreateRestoreTablesRequestBody::setRestoreTime(const std::string& value)
{
    restoreTime_ = value;
    restoreTimeIsSet_ = true;
}

bool CreateRestoreTablesRequestBody::restoreTimeIsSet() const
{
    return restoreTimeIsSet_;
}

void CreateRestoreTablesRequestBody::unsetrestoreTime()
{
    restoreTimeIsSet_ = false;
}

std::string CreateRestoreTablesRequestBody::getLastTableInfo() const
{
    return lastTableInfo_;
}

void CreateRestoreTablesRequestBody::setLastTableInfo(const std::string& value)
{
    lastTableInfo_ = value;
    lastTableInfoIsSet_ = true;
}

bool CreateRestoreTablesRequestBody::lastTableInfoIsSet() const
{
    return lastTableInfoIsSet_;
}

void CreateRestoreTablesRequestBody::unsetlastTableInfo()
{
    lastTableInfoIsSet_ = false;
}

std::vector<CreateRestoreDatabaseTableInfo>& CreateRestoreTablesRequestBody::getRestoreTables()
{
    return restoreTables_;
}

void CreateRestoreTablesRequestBody::setRestoreTables(const std::vector<CreateRestoreDatabaseTableInfo>& value)
{
    restoreTables_ = value;
    restoreTablesIsSet_ = true;
}

bool CreateRestoreTablesRequestBody::restoreTablesIsSet() const
{
    return restoreTablesIsSet_;
}

void CreateRestoreTablesRequestBody::unsetrestoreTables()
{
    restoreTablesIsSet_ = false;
}

}
}
}
}
}


