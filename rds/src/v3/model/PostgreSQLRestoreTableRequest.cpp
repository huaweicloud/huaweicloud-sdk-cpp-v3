

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreTableRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreTableRequest::PostgreSQLRestoreTableRequest()
{
    instancesIsSet_ = false;
}

PostgreSQLRestoreTableRequest::~PostgreSQLRestoreTableRequest() = default;

void PostgreSQLRestoreTableRequest::validate()
{
}

web::json::value PostgreSQLRestoreTableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool PostgreSQLRestoreTableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<PostgreSQLRestoreTableInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<PostgreSQLRestoreTableInstance>& PostgreSQLRestoreTableRequest::getInstances()
{
    return instances_;
}

void PostgreSQLRestoreTableRequest::setInstances(const std::vector<PostgreSQLRestoreTableInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool PostgreSQLRestoreTableRequest::instancesIsSet() const
{
    return instancesIsSet_;
}

void PostgreSQLRestoreTableRequest::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


