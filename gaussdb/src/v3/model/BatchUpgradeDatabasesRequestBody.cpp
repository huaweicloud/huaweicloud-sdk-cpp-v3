

#include "huaweicloud/gaussdb/v3/model/BatchUpgradeDatabasesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpgradeDatabasesRequestBody::BatchUpgradeDatabasesRequestBody()
{
    databasesInstanceInfosIsSet_ = false;
    delay_ = "";
    delayIsSet_ = false;
}

BatchUpgradeDatabasesRequestBody::~BatchUpgradeDatabasesRequestBody() = default;

void BatchUpgradeDatabasesRequestBody::validate()
{
}

web::json::value BatchUpgradeDatabasesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesInstanceInfosIsSet_) {
        val[utility::conversions::to_string_t("databases_instance_infos")] = ModelBase::toJson(databasesInstanceInfos_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool BatchUpgradeDatabasesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases_instance_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases_instance_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeDatabasesSingleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabasesInstanceInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeDatabasesSingleInstance>& BatchUpgradeDatabasesRequestBody::getDatabasesInstanceInfos()
{
    return databasesInstanceInfos_;
}

void BatchUpgradeDatabasesRequestBody::setDatabasesInstanceInfos(const std::vector<UpgradeDatabasesSingleInstance>& value)
{
    databasesInstanceInfos_ = value;
    databasesInstanceInfosIsSet_ = true;
}

bool BatchUpgradeDatabasesRequestBody::databasesInstanceInfosIsSet() const
{
    return databasesInstanceInfosIsSet_;
}

void BatchUpgradeDatabasesRequestBody::unsetdatabasesInstanceInfos()
{
    databasesInstanceInfosIsSet_ = false;
}

std::string BatchUpgradeDatabasesRequestBody::getDelay() const
{
    return delay_;
}

void BatchUpgradeDatabasesRequestBody::setDelay(const std::string& value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool BatchUpgradeDatabasesRequestBody::delayIsSet() const
{
    return delayIsSet_;
}

void BatchUpgradeDatabasesRequestBody::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


