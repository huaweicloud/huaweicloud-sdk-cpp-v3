

#include "huaweicloud/rds/v3/model/GetInstancesNoIndexTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesNoIndexTablesResponse::GetInstancesNoIndexTablesResponse()
{
    tablesIsSet_ = false;
}

GetInstancesNoIndexTablesResponse::~GetInstancesNoIndexTablesResponse() = default;

void GetInstancesNoIndexTablesResponse::validate()
{
}

web::json::value GetInstancesNoIndexTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool GetInstancesNoIndexTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<Table> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::vector<Table>& GetInstancesNoIndexTablesResponse::getTables()
{
    return tables_;
}

void GetInstancesNoIndexTablesResponse::setTables(const std::vector<Table>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool GetInstancesNoIndexTablesResponse::tablesIsSet() const
{
    return tablesIsSet_;
}

void GetInstancesNoIndexTablesResponse::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


