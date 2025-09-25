

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVersionsResponse::ListDatabaseVersionsResponse()
{
    databaseVersionsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListDatabaseVersionsResponse::~ListDatabaseVersionsResponse() = default;

void ListDatabaseVersionsResponse::validate()
{
}

web::json::value ListDatabaseVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseVersionsIsSet_) {
        val[utility::conversions::to_string_t("database_versions")] = ModelBase::toJson(databaseVersions_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListDatabaseVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_versions"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseVersionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseVersions(refVal);
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


std::vector<DatabaseVersionResult>& ListDatabaseVersionsResponse::getDatabaseVersions()
{
    return databaseVersions_;
}

void ListDatabaseVersionsResponse::setDatabaseVersions(const std::vector<DatabaseVersionResult>& value)
{
    databaseVersions_ = value;
    databaseVersionsIsSet_ = true;
}

bool ListDatabaseVersionsResponse::databaseVersionsIsSet() const
{
    return databaseVersionsIsSet_;
}

void ListDatabaseVersionsResponse::unsetdatabaseVersions()
{
    databaseVersionsIsSet_ = false;
}

int32_t ListDatabaseVersionsResponse::getTotal() const
{
    return total_;
}

void ListDatabaseVersionsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDatabaseVersionsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDatabaseVersionsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


