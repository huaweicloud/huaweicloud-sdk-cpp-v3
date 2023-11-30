

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreDatabaseRequest::PostgreSQLRestoreDatabaseRequest()
{
    instancesIsSet_ = false;
}

PostgreSQLRestoreDatabaseRequest::~PostgreSQLRestoreDatabaseRequest() = default;

void PostgreSQLRestoreDatabaseRequest::validate()
{
}

web::json::value PostgreSQLRestoreDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool PostgreSQLRestoreDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<RestoreDatabaseInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<RestoreDatabaseInstance>& PostgreSQLRestoreDatabaseRequest::getInstances()
{
    return instances_;
}

void PostgreSQLRestoreDatabaseRequest::setInstances(const std::vector<RestoreDatabaseInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool PostgreSQLRestoreDatabaseRequest::instancesIsSet() const
{
    return instancesIsSet_;
}

void PostgreSQLRestoreDatabaseRequest::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


