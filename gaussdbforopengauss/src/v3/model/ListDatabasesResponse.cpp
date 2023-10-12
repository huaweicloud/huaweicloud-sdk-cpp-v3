

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabasesResponse::ListDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ListDatabasesResponse::~ListDatabasesResponse() = default;

void ListDatabasesResponse::validate()
{
}

web::json::value ListDatabasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBforOpenGaussListDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<GaussDBforOpenGaussListDatabase>& ListDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListDatabasesResponse::setDatabases(const std::vector<GaussDBforOpenGaussListDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int64_t ListDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabasesResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


