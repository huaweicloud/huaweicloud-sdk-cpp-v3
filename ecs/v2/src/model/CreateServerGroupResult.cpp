

#include "huaweicloud/ecs/model/CreateServerGroupResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerGroupResult::CreateServerGroupResult()
{
    id_ = "";
    idIsSet_ = false;
    membersIsSet_ = false;
    metadataIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    policiesIsSet_ = false;
}

CreateServerGroupResult::~CreateServerGroupResult() = default;

void CreateServerGroupResult::validate()
{
}

web::json::value CreateServerGroupResult::toJson() const
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

bool CreateServerGroupResult::fromJson(const web::json::value& val)
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


std::string CreateServerGroupResult::getId() const
{
    return id_;
}

void CreateServerGroupResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateServerGroupResult::idIsSet() const
{
    return idIsSet_;
}

void CreateServerGroupResult::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& CreateServerGroupResult::getMembers()
{
    return members_;
}

void CreateServerGroupResult::setMembers(const std::vector<std::string>& value)
{
    members_ = value;
    membersIsSet_ = true;
}

bool CreateServerGroupResult::membersIsSet() const
{
    return membersIsSet_;
}

void CreateServerGroupResult::unsetmembers()
{
    membersIsSet_ = false;
}

std::map<std::string, std::string>& CreateServerGroupResult::getMetadata()
{
    return metadata_;
}

void CreateServerGroupResult::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateServerGroupResult::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateServerGroupResult::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::string CreateServerGroupResult::getName() const
{
    return name_;
}

void CreateServerGroupResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateServerGroupResult::nameIsSet() const
{
    return nameIsSet_;
}

void CreateServerGroupResult::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateServerGroupResult::getPolicies()
{
    return policies_;
}

void CreateServerGroupResult::setPolicies(const std::vector<std::string>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool CreateServerGroupResult::policiesIsSet() const
{
    return policiesIsSet_;
}

void CreateServerGroupResult::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


