

#include "huaweicloud/gaussdbfornosql/v3/model/ListRestoreTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRestoreTablesResponse::ListRestoreTablesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tableNamesIsSet_ = false;
}

ListRestoreTablesResponse::~ListRestoreTablesResponse() = default;

void ListRestoreTablesResponse::validate()
{
}

web::json::value ListRestoreTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tableNamesIsSet_) {
        val[utility::conversions::to_string_t("table_names")] = ModelBase::toJson(tableNames_);
    }

    return val;
}
bool ListRestoreTablesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("table_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableNames(refVal);
        }
    }
    return ok;
}


int32_t ListRestoreTablesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestoreTablesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestoreTablesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestoreTablesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<std::string>& ListRestoreTablesResponse::getTableNames()
{
    return tableNames_;
}

void ListRestoreTablesResponse::setTableNames(const std::vector<std::string>& value)
{
    tableNames_ = value;
    tableNamesIsSet_ = true;
}

bool ListRestoreTablesResponse::tableNamesIsSet() const
{
    return tableNamesIsSet_;
}

void ListRestoreTablesResponse::unsettableNames()
{
    tableNamesIsSet_ = false;
}

}
}
}
}
}


