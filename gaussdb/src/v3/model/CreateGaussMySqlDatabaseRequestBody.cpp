

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabaseRequestBody::CreateGaussMySqlDatabaseRequestBody()
{
    databasesIsSet_ = false;
}

CreateGaussMySqlDatabaseRequestBody::~CreateGaussMySqlDatabaseRequestBody() = default;

void CreateGaussMySqlDatabaseRequestBody::validate()
{
}

web::json::value CreateGaussMySqlDatabaseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool CreateGaussMySqlDatabaseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateGaussMySqlDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::vector<CreateGaussMySqlDatabase>& CreateGaussMySqlDatabaseRequestBody::getDatabases()
{
    return databases_;
}

void CreateGaussMySqlDatabaseRequestBody::setDatabases(const std::vector<CreateGaussMySqlDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateGaussMySqlDatabaseRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateGaussMySqlDatabaseRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


