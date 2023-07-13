

#include "huaweicloud/ecs/v2/model/ListServerGroupsResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerGroupsResult::ListServerGroupsResult()
{
    id_ = "";
    idIsSet_ = false;
    membersIsSet_ = false;
    metadataIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    policiesIsSet_ = false;
}

ListServerGroupsResult::~ListServerGroupsResult() = default;

void ListServerGroupsResult::validate()
{
}

web::json::value ListServerGroupsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(membersIsSet_) {
        val[utility::conversions::to_string_t("members")] = ModelBase::toJson(members_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}

bool ListServerGroupsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("members"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}

std::string ListServerGroupsResult::getId() const
{
    return id_;
}

void ListServerGroupsResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListServerGroupsResult::idIsSet() const
{
    return idIsSet_;
}

void ListServerGroupsResult::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListServerGroupsResult::getMembers()
{
    return members_;
}

void ListServerGroupsResult::setMembers(const std::vector<std::string>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool ListServerGroupsResult::membersIsSet() const
{
    return membersIsSet_;
}

void ListServerGroupsResult::unsetmembers()
{
    membersIsSet_ = false;
}

std::map<std::string, std::string>& ListServerGroupsResult::getMetadata()
{
    return metadata_;
}

void ListServerGroupsResult::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListServerGroupsResult::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListServerGroupsResult::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string ListServerGroupsResult::getName() const
{
    return name_;
}

void ListServerGroupsResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListServerGroupsResult::nameIsSet() const
{
    return nameIsSet_;
}

void ListServerGroupsResult::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ListServerGroupsResult::getPolicies()
{
    return policies_;
}

void ListServerGroupsResult::setPolicies(const std::vector<std::string>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ListServerGroupsResult::policiesIsSet() const
{
    return policiesIsSet_;
}

void ListServerGroupsResult::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


