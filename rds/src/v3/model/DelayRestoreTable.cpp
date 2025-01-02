

#include "huaweicloud/rds/v3/model/DelayRestoreTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DelayRestoreTable::DelayRestoreTable()
{
    name_ = "";
    nameIsSet_ = false;
}

DelayRestoreTable::~DelayRestoreTable() = default;

void DelayRestoreTable::validate()
{
}

web::json::value DelayRestoreTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool DelayRestoreTable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string DelayRestoreTable::getName() const
{
    return name_;
}

void DelayRestoreTable::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DelayRestoreTable::nameIsSet() const
{
    return nameIsSet_;
}

void DelayRestoreTable::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


