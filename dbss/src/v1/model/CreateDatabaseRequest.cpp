

#include "huaweicloud/dbss/v1/model/CreateDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CreateDatabaseRequest::CreateDatabaseRequest()
{
    databaseIsSet_ = false;
}

CreateDatabaseRequest::~CreateDatabaseRequest() = default;

void CreateDatabaseRequest::validate()
{
}

web::json::value CreateDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }

    return val;
}
bool CreateDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            CreateDatabaseRequest_database refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    return ok;
}


CreateDatabaseRequest_database CreateDatabaseRequest::getDatabase() const
{
    return database_;
}

void CreateDatabaseRequest::setDatabase(const CreateDatabaseRequest_database& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool CreateDatabaseRequest::databaseIsSet() const
{
    return databaseIsSet_;
}

void CreateDatabaseRequest::unsetdatabase()
{
    databaseIsSet_ = false;
}

}
}
}
}
}


