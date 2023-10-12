

#include "huaweicloud/drs/v5/model/ListDbObjectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListDbObjectsResponse::ListDbObjectsResponse()
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

ListDbObjectsResponse::~ListDbObjectsResponse() = default;

void ListDbObjectsResponse::validate()
{
}

web::json::value ListDbObjectsResponse::toJson() const
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
bool ListDbObjectsResponse::fromJson(const web::json::value& val)
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


TargetRootDb ListDbObjectsResponse::getTargetRootDb() const
{
    return targetRootDb_;
}

void ListDbObjectsResponse::setTargetRootDb(const TargetRootDb& value)
{
    targetRootDb_ = value;
    targetRootDbIsSet_ = true;
}

bool ListDbObjectsResponse::targetRootDbIsSet() const
{
    return targetRootDbIsSet_;
}

void ListDbObjectsResponse::unsettargetRootDb()
{
    targetRootDbIsSet_ = false;
}

std::map<std::string, DatabaseObject>& ListDbObjectsResponse::getObjectInfo()
{
    return objectInfo_;
}

void ListDbObjectsResponse::setObjectInfo(const std::map<std::string, DatabaseObject>& value)
{
    objectInfo_ = value;
    objectInfoIsSet_ = true;
}

bool ListDbObjectsResponse::objectInfoIsSet() const
{
    return objectInfoIsSet_;
}

void ListDbObjectsResponse::unsetobjectInfo()
{
    objectInfoIsSet_ = false;
}

int32_t ListDbObjectsResponse::getMaxTableNum() const
{
    return maxTableNum_;
}

void ListDbObjectsResponse::setMaxTableNum(int32_t value)
{
    maxTableNum_ = value;
    maxTableNumIsSet_ = true;
}

bool ListDbObjectsResponse::maxTableNumIsSet() const
{
    return maxTableNumIsSet_;
}

void ListDbObjectsResponse::unsetmaxTableNum()
{
    maxTableNumIsSet_ = false;
}

std::string ListDbObjectsResponse::getStatus() const
{
    return status_;
}

void ListDbObjectsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDbObjectsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListDbObjectsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDbObjectsResponse::getId() const
{
    return id_;
}

void ListDbObjectsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListDbObjectsResponse::idIsSet() const
{
    return idIsSet_;
}

void ListDbObjectsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListDbObjectsResponse::getObjectScope() const
{
    return objectScope_;
}

void ListDbObjectsResponse::setObjectScope(const std::string& value)
{
    objectScope_ = value;
    objectScopeIsSet_ = true;
}

bool ListDbObjectsResponse::objectScopeIsSet() const
{
    return objectScopeIsSet_;
}

void ListDbObjectsResponse::unsetobjectScope()
{
    objectScopeIsSet_ = false;
}

}
}
}
}
}


