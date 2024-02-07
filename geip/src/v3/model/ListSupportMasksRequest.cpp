

#include "huaweicloud/geip/v3/model/ListSupportMasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportMasksRequest::ListSupportMasksRequest()
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
    sortKeyIsSet_ = false;
    sortDirIsSet_ = false;
    idIsSet_ = false;
    ipVersionIsSet_ = false;
    maskIsSet_ = false;
}

ListSupportMasksRequest::~ListSupportMasksRequest() = default;

void ListSupportMasksRequest::validate()
{
}

web::json::value ListSupportMasksRequest::toJson() const
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
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }

    return val;
}
bool ListSupportMasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMask(refVal);
        }
    }
    return ok;
}


int32_t ListSupportMasksRequest::getLimit() const
{
    return limit_;
}

void ListSupportMasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSupportMasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSupportMasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSupportMasksRequest::getOffset() const
{
    return offset_;
}

void ListSupportMasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSupportMasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSupportMasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListSupportMasksRequest::getMarker() const
{
    return marker_;
}

void ListSupportMasksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSupportMasksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSupportMasksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListSupportMasksRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListSupportMasksRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListSupportMasksRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListSupportMasksRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListSupportMasksRequest::getFields()
{
    return fields_;
}

void ListSupportMasksRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListSupportMasksRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListSupportMasksRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListSupportMasksRequest::getSortKey()
{
    return sortKey_;
}

void ListSupportMasksRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSupportMasksRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSupportMasksRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListSupportMasksRequest::getSortDir()
{
    return sortDir_;
}

void ListSupportMasksRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSupportMasksRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSupportMasksRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListSupportMasksRequest::getId()
{
    return id_;
}

void ListSupportMasksRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupportMasksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSupportMasksRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<int32_t>& ListSupportMasksRequest::getIpVersion()
{
    return ipVersion_;
}

void ListSupportMasksRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListSupportMasksRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListSupportMasksRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<int32_t>& ListSupportMasksRequest::getMask()
{
    return mask_;
}

void ListSupportMasksRequest::setMask(std::vector<int32_t> value)
{
    mask_ = value;
    maskIsSet_ = true;
}

bool ListSupportMasksRequest::maskIsSet() const
{
    return maskIsSet_;
}

void ListSupportMasksRequest::unsetmask()
{
    maskIsSet_ = false;
}

}
}
}
}
}


