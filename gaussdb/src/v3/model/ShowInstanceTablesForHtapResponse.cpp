

#include "huaweicloud/gaussdb/v3/model/ShowInstanceTablesForHtapResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceTablesForHtapResponse::ShowInstanceTablesForHtapResponse()
{
    tablesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowInstanceTablesForHtapResponse::~ShowInstanceTablesForHtapResponse() = default;

void ShowInstanceTablesForHtapResponse::validate()
{
}

web::json::value ShowInstanceTablesForHtapResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowInstanceTablesForHtapResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
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


std::vector<std::string>& ShowInstanceTablesForHtapResponse::getTables()
{
    return tables_;
}

void ShowInstanceTablesForHtapResponse::setTables(const std::vector<std::string>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool ShowInstanceTablesForHtapResponse::tablesIsSet() const
{
    return tablesIsSet_;
}

void ShowInstanceTablesForHtapResponse::unsettables()
{
    tablesIsSet_ = false;
}

int32_t ShowInstanceTablesForHtapResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowInstanceTablesForHtapResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowInstanceTablesForHtapResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowInstanceTablesForHtapResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


