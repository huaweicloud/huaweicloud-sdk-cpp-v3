

#include "huaweicloud/dbss/v1/model/ListAuditDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditDatabasesResponse::ListAuditDatabasesResponse()
{
    databasesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditDatabasesResponse::~ListAuditDatabasesResponse() = default;

void ListAuditDatabasesResponse::validate()
{
}

web::json::value ListAuditDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAuditDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DataBaseBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<DataBaseBean>& ListAuditDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListAuditDatabasesResponse::setDatabases(const std::vector<DataBaseBean>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListAuditDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListAuditDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListAuditDatabasesResponse::getTotal() const
{
    return total_;
}

void ListAuditDatabasesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditDatabasesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditDatabasesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


