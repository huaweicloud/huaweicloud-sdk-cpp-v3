

#include "huaweicloud/dbss/v1/model/ListAuditDatabasesNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditDatabasesNewResponse::ListAuditDatabasesNewResponse()
{
    databasesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAuditDatabasesNewResponse::~ListAuditDatabasesNewResponse() = default;

void ListAuditDatabasesNewResponse::validate()
{
}

web::json::value ListAuditDatabasesNewResponse::toJson() const
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
bool ListAuditDatabasesNewResponse::fromJson(const web::json::value& val)
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


std::vector<DataBaseBean>& ListAuditDatabasesNewResponse::getDatabases()
{
    return databases_;
}

void ListAuditDatabasesNewResponse::setDatabases(const std::vector<DataBaseBean>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListAuditDatabasesNewResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListAuditDatabasesNewResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListAuditDatabasesNewResponse::getTotal() const
{
    return total_;
}

void ListAuditDatabasesNewResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAuditDatabasesNewResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAuditDatabasesNewResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


