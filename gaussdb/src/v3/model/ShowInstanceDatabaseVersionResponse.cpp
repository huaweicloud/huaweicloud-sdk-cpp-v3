

#include "huaweicloud/gaussdb/v3/model/ShowInstanceDatabaseVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceDatabaseVersionResponse::ShowInstanceDatabaseVersionResponse()
{
    datastoreIsSet_ = false;
    upgradeFlag_ = false;
    upgradeFlagIsSet_ = false;
}

ShowInstanceDatabaseVersionResponse::~ShowInstanceDatabaseVersionResponse() = default;

void ShowInstanceDatabaseVersionResponse::validate()
{
}

web::json::value ShowInstanceDatabaseVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(upgradeFlagIsSet_) {
        val[utility::conversions::to_string_t("upgrade_flag")] = ModelBase::toJson(upgradeFlag_);
    }

    return val;
}
bool ShowInstanceDatabaseVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            InstanceDatabaseVersionInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_flag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeFlag(refVal);
        }
    }
    return ok;
}


InstanceDatabaseVersionInfo ShowInstanceDatabaseVersionResponse::getDatastore() const
{
    return datastore_;
}

void ShowInstanceDatabaseVersionResponse::setDatastore(const InstanceDatabaseVersionInfo& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ShowInstanceDatabaseVersionResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ShowInstanceDatabaseVersionResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

bool ShowInstanceDatabaseVersionResponse::isUpgradeFlag() const
{
    return upgradeFlag_;
}

void ShowInstanceDatabaseVersionResponse::setUpgradeFlag(bool value)
{
    upgradeFlag_ = value;
    upgradeFlagIsSet_ = true;
}

bool ShowInstanceDatabaseVersionResponse::upgradeFlagIsSet() const
{
    return upgradeFlagIsSet_;
}

void ShowInstanceDatabaseVersionResponse::unsetupgradeFlag()
{
    upgradeFlagIsSet_ = false;
}

}
}
}
}
}


