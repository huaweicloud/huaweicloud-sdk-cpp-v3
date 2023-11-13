

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreTable::PostgreSQLRestoreTable()
{
    oldName_ = "";
    oldNameIsSet_ = false;
    newName_ = "";
    newNameIsSet_ = false;
}

PostgreSQLRestoreTable::~PostgreSQLRestoreTable() = default;

void PostgreSQLRestoreTable::validate()
{
}

web::json::value PostgreSQLRestoreTable::toJson() const
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
bool PostgreSQLRestoreTable::fromJson(const web::json::value& val)
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


std::string PostgreSQLRestoreTable::getOldName() const
{
    return oldName_;
}

void PostgreSQLRestoreTable::setOldName(const std::string& value)
{
    oldName_ = value;
    oldNameIsSet_ = true;
}

bool PostgreSQLRestoreTable::oldNameIsSet() const
{
    return oldNameIsSet_;
}

void PostgreSQLRestoreTable::unsetoldName()
{
    oldNameIsSet_ = false;
}

std::string PostgreSQLRestoreTable::getNewName() const
{
    return newName_;
}

void PostgreSQLRestoreTable::setNewName(const std::string& value)
{
    newName_ = value;
    newNameIsSet_ = true;
}

bool PostgreSQLRestoreTable::newNameIsSet() const
{
    return newNameIsSet_;
}

void PostgreSQLRestoreTable::unsetnewName()
{
    newNameIsSet_ = false;
}

}
}
}
}
}


