

#include "huaweicloud/kms/v2/model/ListTrustedKeySpaceResponseBody_keyspaces.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListTrustedKeySpaceResponseBody_keyspaces::ListTrustedKeySpaceResponseBody_keyspaces()
{
    keyspaceId_ = "";
    keyspaceIdIsSet_ = false;
    keyspaceName_ = "";
    keyspaceNameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastModifyTime_ = "";
    lastModifyTimeIsSet_ = false;
}

ListTrustedKeySpaceResponseBody_keyspaces::~ListTrustedKeySpaceResponseBody_keyspaces() = default;

void ListTrustedKeySpaceResponseBody_keyspaces::validate()
{
}

web::json::value ListTrustedKeySpaceResponseBody_keyspaces::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyspaceIdIsSet_) {
        val[utility::conversions::to_string_t("keyspace_id")] = ModelBase::toJson(keyspaceId_);
    }
    if(keyspaceNameIsSet_) {
        val[utility::conversions::to_string_t("keyspace_name")] = ModelBase::toJson(keyspaceName_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastModifyTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modify_time")] = ModelBase::toJson(lastModifyTime_);
    }

    return val;
}
bool ListTrustedKeySpaceResponseBody_keyspaces::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keyspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyspace_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_modify_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modify_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifyTime(refVal);
        }
    }
    return ok;
}


std::string ListTrustedKeySpaceResponseBody_keyspaces::getKeyspaceId() const
{
    return keyspaceId_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setKeyspaceId(const std::string& value)
{
    keyspaceId_ = value;
    keyspaceIdIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::keyspaceIdIsSet() const
{
    return keyspaceIdIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetkeyspaceId()
{
    keyspaceIdIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getKeyspaceName() const
{
    return keyspaceName_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setKeyspaceName(const std::string& value)
{
    keyspaceName_ = value;
    keyspaceNameIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::keyspaceNameIsSet() const
{
    return keyspaceNameIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetkeyspaceName()
{
    keyspaceNameIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListTrustedKeySpaceResponseBody_keyspaces::getType() const
{
    return type_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::typeIsSet() const
{
    return typeIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListTrustedKeySpaceResponseBody_keyspaces::getState() const
{
    return state_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::stateIsSet() const
{
    return stateIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getDescription() const
{
    return description_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getCreatedBy() const
{
    return createdBy_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::createdByIsSet() const
{
    return createdByIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getCreateTime() const
{
    return createTime_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListTrustedKeySpaceResponseBody_keyspaces::getLastModifyTime() const
{
    return lastModifyTime_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::setLastModifyTime(const std::string& value)
{
    lastModifyTime_ = value;
    lastModifyTimeIsSet_ = true;
}

bool ListTrustedKeySpaceResponseBody_keyspaces::lastModifyTimeIsSet() const
{
    return lastModifyTimeIsSet_;
}

void ListTrustedKeySpaceResponseBody_keyspaces::unsetlastModifyTime()
{
    lastModifyTimeIsSet_ = false;
}

}
}
}
}
}


