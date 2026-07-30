

#include "huaweicloud/modelarts/v1/model/ListNotebooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListNotebooksRequest::ListNotebooksRequest()
{
    feature_ = "";
    featureIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    billing_ = "";
    billingIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

ListNotebooksRequest::~ListNotebooksRequest() = default;

void ListNotebooksRequest::validate()
{
}

web::json::value ListNotebooksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListNotebooksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
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
    return ok;
}


std::string ListNotebooksRequest::getFeature() const
{
    return feature_;
}

void ListNotebooksRequest::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool ListNotebooksRequest::featureIsSet() const
{
    return featureIsSet_;
}

void ListNotebooksRequest::unsetfeature()
{
    featureIsSet_ = false;
}

int32_t ListNotebooksRequest::getLimit() const
{
    return limit_;
}

void ListNotebooksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListNotebooksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListNotebooksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListNotebooksRequest::getName() const
{
    return name_;
}

void ListNotebooksRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListNotebooksRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListNotebooksRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListNotebooksRequest::getPoolId() const
{
    return poolId_;
}

void ListNotebooksRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ListNotebooksRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ListNotebooksRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t ListNotebooksRequest::getOffset() const
{
    return offset_;
}

void ListNotebooksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListNotebooksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListNotebooksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListNotebooksRequest::getOwner() const
{
    return owner_;
}

void ListNotebooksRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListNotebooksRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListNotebooksRequest::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListNotebooksRequest::getSortDir() const
{
    return sortDir_;
}

void ListNotebooksRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListNotebooksRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListNotebooksRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListNotebooksRequest::getSortKey() const
{
    return sortKey_;
}

void ListNotebooksRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListNotebooksRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListNotebooksRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListNotebooksRequest::getStatus() const
{
    return status_;
}

void ListNotebooksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListNotebooksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListNotebooksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListNotebooksRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListNotebooksRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListNotebooksRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListNotebooksRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListNotebooksRequest::getFlavor() const
{
    return flavor_;
}

void ListNotebooksRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ListNotebooksRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ListNotebooksRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ListNotebooksRequest::getImageId() const
{
    return imageId_;
}

void ListNotebooksRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListNotebooksRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListNotebooksRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ListNotebooksRequest::getId() const
{
    return id_;
}

void ListNotebooksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListNotebooksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListNotebooksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListNotebooksRequest::getBilling() const
{
    return billing_;
}

void ListNotebooksRequest::setBilling(const std::string& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool ListNotebooksRequest::billingIsSet() const
{
    return billingIsSet_;
}

void ListNotebooksRequest::unsetbilling()
{
    billingIsSet_ = false;
}

std::string ListNotebooksRequest::getTags() const
{
    return tags_;
}

void ListNotebooksRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListNotebooksRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListNotebooksRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


