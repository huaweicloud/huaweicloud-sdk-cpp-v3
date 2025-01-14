

#include "huaweicloud/rds/v3/model/RestoreInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreInfo::RestoreInfo()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

RestoreInfo::~RestoreInfo() = default;

void RestoreInfo::validate()
{
}

web::json::value RestoreInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldNameIsSet_) {
        val[utility::conversions::to_string_t("old_name")] = ModelBase::toJson(oldName_);
    }
    if(newNameIsSet_) {
        val[utility::conversions::to_string_t("new_name")] = ModelBase::toJson(newName_);
    }

    return val;
}
bool RestoreInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewName(refVal);
        }
    }
    return ok;
}


std::string RestoreInfo::getOldName() const
{
    return oldName_;
}

void RestoreInfo::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool RestoreInfo::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void RestoreInfo::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string RestoreInfo::getNewName() const
{
    return newName_;
}

void RestoreInfo::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool RestoreInfo::newNameIsSet() const
{
    return newNameIsSet_;
}

void RestoreInfo::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


