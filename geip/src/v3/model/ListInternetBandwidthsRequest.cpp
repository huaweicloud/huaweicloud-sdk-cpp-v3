

#include "huaweicloud/geip/v3/model/ListInternetBandwidthsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthsRequest::ListInternetBandwidthsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    fieldsIsSet_ = false;
    extFieldsIsSet_ = false;
    sortKeyIsSet_ = false;
    sortDirIsSet_ = false;
    idIsSet_ = false;
    sizeIsSet_ = false;
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
    accessSiteIsSet_ = false;
    statusIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    typeIsSet_ = false;
}

ListInternetBandwidthsRequest::~ListInternetBandwidthsRequest() = default;

void ListInternetBandwidthsRequest::validate()
{
}

web::json::value ListInternetBandwidthsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(extFieldsIsSet_) {
        val[utility::conversions::to_string_t("ext-fields")] = ModelBase::toJson(extFields_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameLikeIsSet_) {
        val[utility::conversions::to_string_t("name_like")] = ModelBase::toJson(nameLike_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListInternetBandwidthsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext-fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext-fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ListInternetBandwidthsRequest::getLimit() const
{
    return limit_;
}

void ListInternetBandwidthsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInternetBandwidthsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInternetBandwidthsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInternetBandwidthsRequest::getOffset() const
{
    return offset_;
}

void ListInternetBandwidthsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInternetBandwidthsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInternetBandwidthsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInternetBandwidthsRequest::getMarker() const
{
    return marker_;
}

void ListInternetBandwidthsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListInternetBandwidthsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListInternetBandwidthsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListInternetBandwidthsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListInternetBandwidthsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListInternetBandwidthsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListInternetBandwidthsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getFields()
{
    return fields_;
}

void ListInternetBandwidthsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListInternetBandwidthsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListInternetBandwidthsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getExtFields()
{
    return extFields_;
}

void ListInternetBandwidthsRequest::setExtFields(const std::vector<std::string>& value)
{
    extFields_ = value;
    extFieldsIsSet_ = true;
}

bool ListInternetBandwidthsRequest::extFieldsIsSet() const
{
    return extFieldsIsSet_;
}

void ListInternetBandwidthsRequest::unsetextFields()
{
    extFieldsIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getSortKey()
{
    return sortKey_;
}

void ListInternetBandwidthsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListInternetBandwidthsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListInternetBandwidthsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getSortDir()
{
    return sortDir_;
}

void ListInternetBandwidthsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListInternetBandwidthsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListInternetBandwidthsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getId()
{
    return id_;
}

void ListInternetBandwidthsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListInternetBandwidthsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListInternetBandwidthsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<int32_t>& ListInternetBandwidthsRequest::getSize()
{
    return size_;
}

void ListInternetBandwidthsRequest::setSize(std::vector<int32_t> value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInternetBandwidthsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInternetBandwidthsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getName()
{
    return name_;
}

void ListInternetBandwidthsRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInternetBandwidthsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInternetBandwidthsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInternetBandwidthsRequest::getNameLike() const
{
    return nameLike_;
}

void ListInternetBandwidthsRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool ListInternetBandwidthsRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void ListInternetBandwidthsRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getAccessSite()
{
    return accessSite_;
}

void ListInternetBandwidthsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListInternetBandwidthsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListInternetBandwidthsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getStatus()
{
    return status_;
}

void ListInternetBandwidthsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListInternetBandwidthsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListInternetBandwidthsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void ListInternetBandwidthsRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListInternetBandwidthsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListInternetBandwidthsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getTags()
{
    return tags_;
}

void ListInternetBandwidthsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInternetBandwidthsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInternetBandwidthsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<std::string>& ListInternetBandwidthsRequest::getType()
{
    return type_;
}

void ListInternetBandwidthsRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListInternetBandwidthsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListInternetBandwidthsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


