

#include "huaweicloud/evs/v2/model/ListSnapshotGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotGroupRequest::ListSnapshotGroupRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
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
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListSnapshotGroupRequest::~ListSnapshotGroupRequest() = default;

void ListSnapshotGroupRequest::validate()
{
}

web::json::value ListSnapshotGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ListSnapshotGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ListSnapshotGroupRequest::getId() const
{
    return id_;
}

void ListSnapshotGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSnapshotGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSnapshotGroupRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getName() const
{
    return name_;
}

void ListSnapshotGroupRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSnapshotGroupRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSnapshotGroupRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getStatus() const
{
    return status_;
}

void ListSnapshotGroupRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSnapshotGroupRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSnapshotGroupRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getTagKey() const
{
    return tagKey_;
}

void ListSnapshotGroupRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool ListSnapshotGroupRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void ListSnapshotGroupRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getTags() const
{
    return tags_;
}

void ListSnapshotGroupRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSnapshotGroupRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSnapshotGroupRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListSnapshotGroupRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListSnapshotGroupRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListSnapshotGroupRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t ListSnapshotGroupRequest::getLimit() const
{
    return limit_;
}

void ListSnapshotGroupRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotGroupRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotGroupRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSnapshotGroupRequest::getOffset() const
{
    return offset_;
}

void ListSnapshotGroupRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSnapshotGroupRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSnapshotGroupRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getSortKey() const
{
    return sortKey_;
}

void ListSnapshotGroupRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSnapshotGroupRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSnapshotGroupRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getSortDir() const
{
    return sortDir_;
}

void ListSnapshotGroupRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSnapshotGroupRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSnapshotGroupRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListSnapshotGroupRequest::getServerId() const
{
    return serverId_;
}

void ListSnapshotGroupRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListSnapshotGroupRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListSnapshotGroupRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


