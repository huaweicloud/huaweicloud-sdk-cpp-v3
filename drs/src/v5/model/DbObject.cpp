

#include "huaweicloud/drs/v5/model/DbObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbObject::DbObject()
{
    objectScope_ = "";
    objectScopeIsSet_ = false;
    targetRootDbIsSet_ = false;
    objectInfoIsSet_ = false;
}

DbObject::~DbObject() = default;

void DbObject::validate()
{
}

web::json::value DbObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectScopeIsSet_) {
        val[utility::conversions::to_string_t("object_scope")] = ModelBase::toJson(objectScope_);
    }
    if(targetRootDbIsSet_) {
        val[utility::conversions::to_string_t("target_root_db")] = ModelBase::toJson(targetRootDb_);
    }
    if(objectInfoIsSet_) {
        val[utility::conversions::to_string_t("object_info")] = ModelBase::toJson(objectInfo_);
    }

    return val;
}

bool DbObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_root_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_root_db"));
        if(!fieldValue.is_null())
        {
            TargetRootDb refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRootDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_info"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, DatabaseObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectInfo(refVal);
        }
    }
    return ok;
}

std::string DbObject::getObjectScope() const
{
    return objectScope_;
}

void DbObject::setObjectScope(const std::string& value)
{
    objectScope_ = value;
    objectScopeIsSet_ = true;
}

bool DbObject::objectScopeIsSet() const
{
    return objectScopeIsSet_;
}

void DbObject::unsetobjectScope()
{
    objectScopeIsSet_ = false;
}

TargetRootDb DbObject::getTargetRootDb() const
{
    return targetRootDb_;
}

void DbObject::setTargetRootDb(const TargetRootDb& value)
{
    targetRootDb_ = value;
    targetRootDbIsSet_ = true;
}

bool DbObject::targetRootDbIsSet() const
{
    return targetRootDbIsSet_;
}

void DbObject::unsettargetRootDb()
{
    targetRootDbIsSet_ = false;
}

std::map<std::string, DatabaseObject>& DbObject::getObjectInfo()
{
    return objectInfo_;
}

void DbObject::setObjectInfo(const std::map<std::string, DatabaseObject>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool DbObject::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void DbObject::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

}
}
}
}
}


