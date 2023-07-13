

#include "huaweicloud/drs/v5/model/ShowDbObjectCollectionStatusResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDbObjectCollectionStatusResponse::ShowDbObjectCollectionStatusResponse()
{
    targetRootDbIsSet_ = false;
    objectInfoIsSet_ = false;
    maxTableNum_ = 0;
    maxTableNumIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    objectScope_ = "";
    objectScopeIsSet_ = false;
}

ShowDbObjectCollectionStatusResponse::~ShowDbObjectCollectionStatusResponse() = default;

void ShowDbObjectCollectionStatusResponse::validate()
{
}

web::json::value ShowDbObjectCollectionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetRootDbIsSet_) {
        val[utility::conversions::to_string_t("target_root_db")] = ModelBase::toJson(targetRootDb_);
    }
    if(objectInfoIsSet_) {
        val[utility::conversions::to_string_t("object_info")] = ModelBase::toJson(objectInfo_);
    }
    if(maxTableNumIsSet_) {
        val[utility::conversions::to_string_t("max_table_num")] = ModelBase::toJson(maxTableNum_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(objectScopeIsSet_) {
        val[utility::conversions::to_string_t("object_scope")] = ModelBase::toJson(objectScope_);
    }

    return val;
}

bool ShowDbObjectCollectionStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("max_table_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_table_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTableNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectScope(refVal);
        }
    }
    return ok;
}

TargetRootDb ShowDbObjectCollectionStatusResponse::getTargetRootDb() const
{
    return targetRootDb_;
}

void ShowDbObjectCollectionStatusResponse::setTargetRootDb(const TargetRootDb& value)
{
    targetRootDb_ = value;
    targetRootDbIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::targetRootDbIsSet() const
{
    return targetRootDbIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsettargetRootDb()
{
    targetRootDbIsSet_ = false;
}

std::map<std::string, DatabaseObject>& ShowDbObjectCollectionStatusResponse::getObjectInfo()
{
    return objectInfo_;
}

void ShowDbObjectCollectionStatusResponse::setObjectInfo(const std::map<std::string, DatabaseObject>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

int32_t ShowDbObjectCollectionStatusResponse::getMaxTableNum() const
{
    return maxTableNum_;
}

void ShowDbObjectCollectionStatusResponse::setMaxTableNum(int32_t value)
{
    maxTableNum_ = value;
    maxTableNumIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::maxTableNumIsSet() const
{
    return maxTableNumIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsetmaxTableNum()
{
    maxTableNumIsSet_ = false;
}

std::string ShowDbObjectCollectionStatusResponse::getStatus() const
{
    return status_;
}

void ShowDbObjectCollectionStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowDbObjectCollectionStatusResponse::getId() const
{
    return id_;
}

void ShowDbObjectCollectionStatusResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowDbObjectCollectionStatusResponse::getObjectScope() const
{
    return objectScope_;
}

void ShowDbObjectCollectionStatusResponse::setObjectScope(const std::string& value)
{
    objectScope_ = value;
    objectScopeIsSet_ = true;
}

bool ShowDbObjectCollectionStatusResponse::objectScopeIsSet() const
{
    return objectScopeIsSet_;
}

void ShowDbObjectCollectionStatusResponse::unsetobjectScope()
{
    objectScopeIsSet_ = false;
}

}
}
}
}
}


