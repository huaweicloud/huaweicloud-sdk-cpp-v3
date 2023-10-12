

#include "huaweicloud/rds/v3/model/RestoreTableInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTableInfo::RestoreTableInfo()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

RestoreTableInfo::~RestoreTableInfo() = default;

void RestoreTableInfo::validate()
{
}

web::json::value RestoreTableInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldNameIsSet_) {
        val[utility::conversions::to_string_t("oldName")] = ModelBase::toJson(oldName_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("newName")] = ModelBase::toJson(newName_);
    }

    return val;
}
bool RestoreTableInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("oldName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("oldName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    return ok;
}


std::string RestoreTableInfo::getOldName() const
{
    return oldName_;
}

void RestoreTableInfo::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool RestoreTableInfo::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void RestoreTableInfo::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string RestoreTableInfo::getNewName() const
{
    return newName_;
}

void RestoreTableInfo::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool RestoreTableInfo::newNameIsSet() const
{
    return newNameIsSet_;
}

void RestoreTableInfo::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


