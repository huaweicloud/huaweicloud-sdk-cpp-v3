

#include "huaweicloud/rds/v3/model/UpdateStatisticsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateStatisticsRequestBody::UpdateStatisticsRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
}

UpdateStatisticsRequestBody::~UpdateStatisticsRequestBody() = default;

void UpdateStatisticsRequestBody::validate()
{
}

web::json::value UpdateStatisticsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}
bool UpdateStatisticsRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateStatisticsRequestBody::getDbName() const
{
    return dbName_;
}

void UpdateStatisticsRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool UpdateStatisticsRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void UpdateStatisticsRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


