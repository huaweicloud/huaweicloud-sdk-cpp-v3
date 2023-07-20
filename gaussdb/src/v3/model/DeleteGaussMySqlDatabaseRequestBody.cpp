

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlDatabaseRequestBody::DeleteGaussMySqlDatabaseRequestBody()
{
    databasesIsSet_ = false;
}

DeleteGaussMySqlDatabaseRequestBody::~DeleteGaussMySqlDatabaseRequestBody() = default;

void DeleteGaussMySqlDatabaseRequestBody::validate()
{
}

web::json::value DeleteGaussMySqlDatabaseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}

bool DeleteGaussMySqlDatabaseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& DeleteGaussMySqlDatabaseRequestBody::getDatabases()
{
    return databases_;
}

void DeleteGaussMySqlDatabaseRequestBody::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void DeleteGaussMySqlDatabaseRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


