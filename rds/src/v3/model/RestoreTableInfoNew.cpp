

#include "huaweicloud/rds/v3/model/RestoreTableInfoNew.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreTableInfoNew::RestoreTableInfoNew()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

RestoreTableInfoNew::~RestoreTableInfoNew() = default;

void RestoreTableInfoNew::validate()
{
}

web::json::value RestoreTableInfoNew::toJson() const
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

bool RestoreTableInfoNew::fromJson(const web::json::value& val)
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

std::string RestoreTableInfoNew::getOldName() const
{
    return oldName_;
}

void RestoreTableInfoNew::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool RestoreTableInfoNew::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void RestoreTableInfoNew::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string RestoreTableInfoNew::getNewName() const
{
    return newName_;
}

void RestoreTableInfoNew::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool RestoreTableInfoNew::newNameIsSet() const
{
    return newNameIsSet_;
}

void RestoreTableInfoNew::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


