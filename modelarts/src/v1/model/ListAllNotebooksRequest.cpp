

#include "huaweicloud/modelarts/v1/model/ListAllNotebooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAllNotebooksRequest::ListAllNotebooksRequest()
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

ListAllNotebooksRequest::~ListAllNotebooksRequest() = default;

void ListAllNotebooksRequest::validate()
{
}

web::json::value ListAllNotebooksRequest::toJson() const
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
bool ListAllNotebooksRequest::fromJson(const web::json::value& val)
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


std::string ListAllNotebooksRequest::getFeature() const
{
    return feature_;
}

void ListAllNotebooksRequest::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool ListAllNotebooksRequest::featureIsSet() const
{
    return featureIsSet_;
}

void ListAllNotebooksRequest::unsetfeature()
{
    featureIsSet_ = false;
}

int32_t ListAllNotebooksRequest::getLimit() const
{
    return limit_;
}

void ListAllNotebooksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAllNotebooksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAllNotebooksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAllNotebooksRequest::getName() const
{
    return name_;
}

void ListAllNotebooksRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAllNotebooksRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAllNotebooksRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAllNotebooksRequest::getPoolId() const
{
    return poolId_;
}

void ListAllNotebooksRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ListAllNotebooksRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ListAllNotebooksRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t ListAllNotebooksRequest::getOffset() const
{
    return offset_;
}

void ListAllNotebooksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAllNotebooksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAllNotebooksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAllNotebooksRequest::getOwner() const
{
    return owner_;
}

void ListAllNotebooksRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListAllNotebooksRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListAllNotebooksRequest::unsetowner()
{
    ownerIsSet_ = false;
}

std::string ListAllNotebooksRequest::getSortDir() const
{
    return sortDir_;
}

void ListAllNotebooksRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAllNotebooksRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAllNotebooksRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListAllNotebooksRequest::getSortKey() const
{
    return sortKey_;
}

void ListAllNotebooksRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAllNotebooksRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAllNotebooksRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListAllNotebooksRequest::getStatus() const
{
    return status_;
}

void ListAllNotebooksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAllNotebooksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAllNotebooksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAllNotebooksRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAllNotebooksRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAllNotebooksRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAllNotebooksRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListAllNotebooksRequest::getFlavor() const
{
    return flavor_;
}

void ListAllNotebooksRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ListAllNotebooksRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void ListAllNotebooksRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ListAllNotebooksRequest::getImageId() const
{
    return imageId_;
}

void ListAllNotebooksRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ListAllNotebooksRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ListAllNotebooksRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ListAllNotebooksRequest::getId() const
{
    return id_;
}

void ListAllNotebooksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAllNotebooksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAllNotebooksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListAllNotebooksRequest::getBilling() const
{
    return billing_;
}

void ListAllNotebooksRequest::setBilling(const std::string& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool ListAllNotebooksRequest::billingIsSet() const
{
    return billingIsSet_;
}

void ListAllNotebooksRequest::unsetbilling()
{
    billingIsSet_ = false;
}

std::string ListAllNotebooksRequest::getTags() const
{
    return tags_;
}

void ListAllNotebooksRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListAllNotebooksRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListAllNotebooksRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


