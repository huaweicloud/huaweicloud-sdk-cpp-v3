

#include "huaweicloud/rds/v3/model/HistoryDatabaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




HistoryDatabaseInfo::HistoryDatabaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    totalTables_ = 0;
    totalTablesIsSet_ = false;
}

HistoryDatabaseInfo::~HistoryDatabaseInfo() = default;

void HistoryDatabaseInfo::validate()
{
}

web::json::value HistoryDatabaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(totalTablesIsSet_) {
        val[utility::conversions::to_string_t("total_tables")] = ModelBase::toJson(totalTables_);
    }

    return val;
}
bool HistoryDatabaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_tables"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTables(refVal);
        }
    }
    return ok;
}


std::string HistoryDatabaseInfo::getName() const
{
    return name_;
}

void HistoryDatabaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HistoryDatabaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void HistoryDatabaseInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t HistoryDatabaseInfo::getTotalTables() const
{
    return totalTables_;
}

void HistoryDatabaseInfo::setTotalTables(int32_t value)
{
    totalTables_ = value;
    totalTablesIsSet_ = true;
}

bool HistoryDatabaseInfo::totalTablesIsSet() const
{
    return totalTablesIsSet_;
}

void HistoryDatabaseInfo::unsettotalTables()
{
    totalTablesIsSet_ = false;
}

}
}
}
}
}


