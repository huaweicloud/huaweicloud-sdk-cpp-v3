

#include "huaweicloud/rds/v3/model/SqlserverDatabaseForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverDatabaseForCreation::SqlserverDatabaseForCreation()
{
    name_ = "";
    nameIsSet_ = false;
}

SqlserverDatabaseForCreation::~SqlserverDatabaseForCreation() = default;

void SqlserverDatabaseForCreation::validate()
{
}

web::json::value SqlserverDatabaseForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool SqlserverDatabaseForCreation::fromJson(const web::json::value& val)
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


std::string SqlserverDatabaseForCreation::getName() const
{
    return name_;
}

void SqlserverDatabaseForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SqlserverDatabaseForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void SqlserverDatabaseForCreation::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


