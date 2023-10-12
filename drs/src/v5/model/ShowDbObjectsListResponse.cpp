

#include "huaweicloud/drs/v5/model/ShowDbObjectsListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowDbObjectsListResponse::ShowDbObjectsListResponse()
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

ShowDbObjectsListResponse::~ShowDbObjectsListResponse() = default;

void ShowDbObjectsListResponse::validate()
{
}

web::json::value ShowDbObjectsListResponse::toJson() const
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
bool ShowDbObjectsListResponse::fromJson(const web::json::value& val)
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


TargetRootDb ShowDbObjectsListResponse::getTargetRootDb() const
{
    return targetRootDb_;
}

void ShowDbObjectsListResponse::setTargetRootDb(const TargetRootDb& value)
{
    targetRootDb_ = value;
    targetRootDbIsSet_ = true;
}

bool ShowDbObjectsListResponse::targetRootDbIsSet() const
{
    return targetRootDbIsSet_;
}

void ShowDbObjectsListResponse::unsettargetRootDb()
{
    targetRootDbIsSet_ = false;
}

std::map<std::string, DatabaseObject>& ShowDbObjectsListResponse::getObjectInfo()
{
    return objectInfo_;
}

void ShowDbObjectsListResponse::setObjectInfo(const std::map<std::string, DatabaseObject>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool ShowDbObjectsListResponse::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void ShowDbObjectsListResponse::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

int32_t ShowDbObjectsListResponse::getMaxTableNum() const
{
    return maxTableNum_;
}

void ShowDbObjectsListResponse::setMaxTableNum(int32_t value)
{
    maxTableNum_ = value;
    maxTableNumIsSet_ = true;
}

bool ShowDbObjectsListResponse::maxTableNumIsSet() const
{
    return maxTableNumIsSet_;
}

void ShowDbObjectsListResponse::unsetmaxTableNum()
{
    maxTableNumIsSet_ = false;
}

std::string ShowDbObjectsListResponse::getStatus() const
{
    return status_;
}

void ShowDbObjectsListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDbObjectsListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDbObjectsListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowDbObjectsListResponse::getId() const
{
    return id_;
}

void ShowDbObjectsListResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowDbObjectsListResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowDbObjectsListResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowDbObjectsListResponse::getObjectScope() const
{
    return objectScope_;
}

void ShowDbObjectsListResponse::setObjectScope(const std::string& value)
{
    objectScope_ = value;
    objectScopeIsSet_ = true;
}

bool ShowDbObjectsListResponse::objectScopeIsSet() const
{
    return objectScopeIsSet_;
}

void ShowDbObjectsListResponse::unsetobjectScope()
{
    objectScopeIsSet_ = false;
}

}
}
}
}
}


