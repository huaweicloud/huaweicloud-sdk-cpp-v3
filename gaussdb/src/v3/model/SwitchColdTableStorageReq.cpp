

#include "huaweicloud/gaussdb/v3/model/SwitchColdTableStorageReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchColdTableStorageReq::SwitchColdTableStorageReq()
{
    action_ = "";
    actionIsSet_ = false;
    tablesIsSet_ = false;
}

SwitchColdTableStorageReq::~SwitchColdTableStorageReq() = default;

void SwitchColdTableStorageReq::validate()
{
}

web::json::value SwitchColdTableStorageReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool SwitchColdTableStorageReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::vector<TableTarget> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string SwitchColdTableStorageReq::getAction() const
{
    return action_;
}

void SwitchColdTableStorageReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool SwitchColdTableStorageReq::actionIsSet() const
{
    return actionIsSet_;
}

void SwitchColdTableStorageReq::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<TableTarget>& SwitchColdTableStorageReq::getTables()
{
    return tables_;
}

void SwitchColdTableStorageReq::setTables(const std::vector<TableTarget>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool SwitchColdTableStorageReq::tablesIsSet() const
{
    return tablesIsSet_;
}

void SwitchColdTableStorageReq::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


