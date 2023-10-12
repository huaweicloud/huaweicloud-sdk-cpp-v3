

#include "huaweicloud/rds/v3/model/BackupDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BackupDatabase::BackupDatabase()
{
    name_ = "";
    nameIsSet_ = false;
}

BackupDatabase::~BackupDatabase() = default;

void BackupDatabase::validate()
{
}

web::json::value BackupDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool BackupDatabase::fromJson(const web::json::value& val)
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


std::string BackupDatabase::getName() const
{
    return name_;
}

void BackupDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void BackupDatabase::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


