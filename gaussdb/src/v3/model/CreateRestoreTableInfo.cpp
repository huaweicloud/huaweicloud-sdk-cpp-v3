

#include "huaweicloud/gaussdb/v3/model/CreateRestoreTableInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateRestoreTableInfo::CreateRestoreTableInfo()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

CreateRestoreTableInfo::~CreateRestoreTableInfo() = default;

void CreateRestoreTableInfo::validate()
{
}

web::json::value CreateRestoreTableInfo::toJson() const
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
bool CreateRestoreTableInfo::fromJson(const web::json::value& val)
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


std::string CreateRestoreTableInfo::getOldName() const
{
    return oldName_;
}

void CreateRestoreTableInfo::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool CreateRestoreTableInfo::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void CreateRestoreTableInfo::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string CreateRestoreTableInfo::getNewName() const
{
    return newName_;
}

void CreateRestoreTableInfo::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool CreateRestoreTableInfo::newNameIsSet() const
{
    return newNameIsSet_;
}

void CreateRestoreTableInfo::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


