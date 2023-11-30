

#include "huaweicloud/rds/v3/model/UpdateDBShrinkRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDBShrinkRequestBody::UpdateDBShrinkRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
}

UpdateDBShrinkRequestBody::~UpdateDBShrinkRequestBody() = default;

void UpdateDBShrinkRequestBody::validate()
{
}

web::json::value UpdateDBShrinkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}
bool UpdateDBShrinkRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    return ok;
}


std::string UpdateDBShrinkRequestBody::getDbName() const
{
    return dbName_;
}

void UpdateDBShrinkRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool UpdateDBShrinkRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void UpdateDBShrinkRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


