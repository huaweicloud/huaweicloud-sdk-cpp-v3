

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseSchemasResponse::ListDatabaseSchemasResponse()
{
    databaseSchemasIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseSchemasResponse::~ListDatabaseSchemasResponse() = default;

void ListDatabaseSchemasResponse::validate()
{
}

web::json::value ListDatabaseSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseSchemasIsSet_) {
        val[utility::conversions::to_string_t("database_schemas")] = ModelBase::toJson(databaseSchemas_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDatabaseSchemasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_schemas"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussDBforOpenGaussDatabaseForListSchema> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseSchemas(refVal);
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


std::vector<GaussDBforOpenGaussDatabaseForListSchema>& ListDatabaseSchemasResponse::getDatabaseSchemas()
{
    return databaseSchemas_;
}

void ListDatabaseSchemasResponse::setDatabaseSchemas(const std::vector<GaussDBforOpenGaussDatabaseForListSchema>& value)
{
    databaseSchemas_ = value;
    databaseSchemasIsSet_ = true;
}

bool ListDatabaseSchemasResponse::databaseSchemasIsSet() const
{
    return databaseSchemasIsSet_;
}

void ListDatabaseSchemasResponse::unsetdatabaseSchemas()
{
    databaseSchemasIsSet_ = false;
}

int32_t ListDatabaseSchemasResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseSchemasResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseSchemasResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseSchemasResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


