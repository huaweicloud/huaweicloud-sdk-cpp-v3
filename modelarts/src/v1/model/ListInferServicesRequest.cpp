

#include "huaweicloud/modelarts/v1/model/ListInferServicesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServicesRequest::ListInferServicesRequest()
{
    id_ = "";
    idIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    poolName_ = "";
    poolNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListInferServicesRequest::~ListInferServicesRequest() = default;

void ListInferServicesRequest::validate()
{
}

web::json::value ListInferServicesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListInferServicesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListInferServicesRequest::getId() const
{
    return id_;
}

void ListInferServicesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInferServicesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInferServicesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListInferServicesRequest::getPoolId() const
{
    return poolId_;
}

void ListInferServicesRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ListInferServicesRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ListInferServicesRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ListInferServicesRequest::getPoolName() const
{
    return poolName_;
}

void ListInferServicesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool ListInferServicesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void ListInferServicesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

std::string ListInferServicesRequest::getSortKey() const
{
    return sortKey_;
}

void ListInferServicesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInferServicesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInferServicesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListInferServicesRequest::getStatus() const
{
    return status_;
}

void ListInferServicesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInferServicesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInferServicesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListInferServicesRequest::getName() const
{
    return name_;
}

void ListInferServicesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInferServicesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInferServicesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInferServicesRequest::getAuthType() const
{
    return authType_;
}

void ListInferServicesRequest::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ListInferServicesRequest::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ListInferServicesRequest::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string ListInferServicesRequest::getType() const
{
    return type_;
}

void ListInferServicesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInferServicesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInferServicesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListInferServicesRequest::getDescription() const
{
    return description_;
}

void ListInferServicesRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListInferServicesRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListInferServicesRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListInferServicesRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListInferServicesRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListInferServicesRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListInferServicesRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListInferServicesRequest::getUserName() const
{
    return userName_;
}

void ListInferServicesRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ListInferServicesRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void ListInferServicesRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ListInferServicesRequest::getTags() const
{
    return tags_;
}

void ListInferServicesRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInferServicesRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInferServicesRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListInferServicesRequest::getAssetId() const
{
    return assetId_;
}

void ListInferServicesRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ListInferServicesRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ListInferServicesRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ListInferServicesRequest::getSortDir() const
{
    return sortDir_;
}

void ListInferServicesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInferServicesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInferServicesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListInferServicesRequest::getLimit() const
{
    return limit_;
}

void ListInferServicesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferServicesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferServicesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferServicesRequest::getOffset() const
{
    return offset_;
}

void ListInferServicesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferServicesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferServicesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferServicesRequest::getContentType() const
{
    return contentType_;
}

void ListInferServicesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferServicesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferServicesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


