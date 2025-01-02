

#include "huaweicloud/rds/v3/model/LogReplayDatabaseReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




LogReplayDatabaseReq::LogReplayDatabaseReq()
{
    databasesIsSet_ = false;
}

LogReplayDatabaseReq::~LogReplayDatabaseReq() = default;

void LogReplayDatabaseReq::validate()
{
}

web::json::value LogReplayDatabaseReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool LogReplayDatabaseReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::vector<RestoreInfo>& LogReplayDatabaseReq::getDatabases()
{
    return databases_;
}

void LogReplayDatabaseReq::setDatabases(const std::vector<RestoreInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool LogReplayDatabaseReq::databasesIsSet() const
{
    return databasesIsSet_;
}

void LogReplayDatabaseReq::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


