

#include "huaweicloud/evs/v2/model/CountAutoSnapshotPoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountAutoSnapshotPoliciesRequest::CountAutoSnapshotPoliciesRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CountAutoSnapshotPoliciesRequest::~CountAutoSnapshotPoliciesRequest() = default;

void CountAutoSnapshotPoliciesRequest::validate()
{
}

web::json::value CountAutoSnapshotPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CountAutoSnapshotPoliciesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::string CountAutoSnapshotPoliciesRequest::getId() const
{
    return id_;
}

void CountAutoSnapshotPoliciesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountAutoSnapshotPoliciesRequest::idIsSet() const
{
    return idIsSet_;
}

void CountAutoSnapshotPoliciesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string CountAutoSnapshotPoliciesRequest::getName() const
{
    return name_;
}

void CountAutoSnapshotPoliciesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountAutoSnapshotPoliciesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountAutoSnapshotPoliciesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountAutoSnapshotPoliciesRequest::getTagKey() const
{
    return tagKey_;
}

void CountAutoSnapshotPoliciesRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool CountAutoSnapshotPoliciesRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void CountAutoSnapshotPoliciesRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string CountAutoSnapshotPoliciesRequest::getTags() const
{
    return tags_;
}

void CountAutoSnapshotPoliciesRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountAutoSnapshotPoliciesRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountAutoSnapshotPoliciesRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string CountAutoSnapshotPoliciesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CountAutoSnapshotPoliciesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountAutoSnapshotPoliciesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountAutoSnapshotPoliciesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


