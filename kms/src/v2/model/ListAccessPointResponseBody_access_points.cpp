

#include "huaweicloud/kms/v2/model/ListAccessPointResponseBody_access_points.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAccessPointResponseBody_access_points::ListAccessPointResponseBody_access_points()
{
    accessPointId_ = "";
    accessPointIdIsSet_ = false;
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    accessPointName_ = "";
    accessPointNameIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lsatModifyTime_ = "";
    lsatModifyTimeIsSet_ = false;
}

ListAccessPointResponseBody_access_points::~ListAccessPointResponseBody_access_points() = default;

void ListAccessPointResponseBody_access_points::validate()
{
}

web::json::value ListAccessPointResponseBody_access_points::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessPointIdIsSet_) {
        val[utility::conversions::to_string_t("access_point_id")] = ModelBase::toJson(accessPointId_);
    }
    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(accessPointNameIsSet_) {
        val[utility::conversions::to_string_t("access_point_name")] = ModelBase::toJson(accessPointName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lsatModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("lsat_modify_time")] = ModelBase::toJson(lsatModifyTime_);
    }

    return val;
}
bool ListAccessPointResponseBody_access_points::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_point_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_point_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_point_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_point_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPointName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lsat_modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lsat_modify_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLsatModifyTime(refVal);
        }
    }
    return ok;
}


std::string ListAccessPointResponseBody_access_points::getAccessPointId() const
{
    return accessPointId_;
}

void ListAccessPointResponseBody_access_points::setAccessPointId(const std::string& value)
{
    accessPointId_ = value;
    accessPointIdIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::accessPointIdIsSet() const
{
    return accessPointIdIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetaccessPointId()
{
    accessPointIdIsSet_ = false;
}

std::string ListAccessPointResponseBody_access_points::getKeyspaceId() const
{
    return keyspaceId_;
}

void ListAccessPointResponseBody_access_points::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string ListAccessPointResponseBody_access_points::getAccessPointName() const
{
    return accessPointName_;
}

void ListAccessPointResponseBody_access_points::setAccessPointName(const std::string& value)
{
    accessPointName_ = value;
    accessPointNameIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::accessPointNameIsSet() const
{
    return accessPointNameIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetaccessPointName()
{
    accessPointNameIsSet_ = false;
}

int32_t ListAccessPointResponseBody_access_points::getState() const
{
    return state_;
}

void ListAccessPointResponseBody_access_points::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::stateIsSet() const
{
    return stateIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetstate()
{
    stateIsSet_ = false;
}

int32_t ListAccessPointResponseBody_access_points::getType() const
{
    return type_;
}

void ListAccessPointResponseBody_access_points::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::typeIsSet() const
{
    return typeIsSet_;
}

void ListAccessPointResponseBody_access_points::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAccessPointResponseBody_access_points::getCreatedBy() const
{
    return createdBy_;
}

void ListAccessPointResponseBody_access_points::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::createdByIsSet() const
{
    return createdByIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ListAccessPointResponseBody_access_points::getCreateTime() const
{
    return createTime_;
}

void ListAccessPointResponseBody_access_points::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListAccessPointResponseBody_access_points::getLsatModifyTime() const
{
    return lsatModifyTime_;
}

void ListAccessPointResponseBody_access_points::setLsatModifyTime(const std::string& value)
{
    lsatModifyTime_ = value;
    lsatModifyTimeIsSet_ = true;
}

bool ListAccessPointResponseBody_access_points::lsatModifyTimeIsSet() const
{
    return lsatModifyTimeIsSet_;
}

void ListAccessPointResponseBody_access_points::unsetlsatModifyTime()
{
    lsatModifyTimeIsSet_ = false;
}

}
}
}
}
}


