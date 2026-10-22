

#include "huaweicloud/evs/v2/model/ListAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListAutoSnapshotPolicyRequest::ListAutoSnapshotPolicyRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListAutoSnapshotPolicyRequest::~ListAutoSnapshotPolicyRequest() = default;

void ListAutoSnapshotPolicyRequest::validate()
{
}

web::json::value ListAutoSnapshotPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string ListAutoSnapshotPolicyRequest::getId() const
{
    return id_;
}

void ListAutoSnapshotPolicyRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getName() const
{
    return name_;
}

void ListAutoSnapshotPolicyRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getTags() const
{
    return tags_;
}

void ListAutoSnapshotPolicyRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getTagKey() const
{
    return tagKey_;
}

void ListAutoSnapshotPolicyRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAutoSnapshotPolicyRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListAutoSnapshotPolicyRequest::getLimit() const
{
    return limit_;
}

void ListAutoSnapshotPolicyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAutoSnapshotPolicyRequest::getOffset() const
{
    return offset_;
}

void ListAutoSnapshotPolicyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getSortKey() const
{
    return sortKey_;
}

void ListAutoSnapshotPolicyRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAutoSnapshotPolicyRequest::getSortDir() const
{
    return sortDir_;
}

void ListAutoSnapshotPolicyRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAutoSnapshotPolicyRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAutoSnapshotPolicyRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


