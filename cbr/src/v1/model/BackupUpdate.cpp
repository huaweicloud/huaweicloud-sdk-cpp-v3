

#include "huaweicloud/cbr/v1/model/BackupUpdate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupUpdate::BackupUpdate()
{
    name_ = "";
    nameIsSet_ = false;
}

BackupUpdate::~BackupUpdate() = default;

void BackupUpdate::validate()
{
}

web::json::value BackupUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool BackupUpdate::fromJson(const web::json::value& val)
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


std::string BackupUpdate::getName() const
{
    return name_;
}

void BackupUpdate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupUpdate::nameIsSet() const
{
    return nameIsSet_;
}

void BackupUpdate::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


