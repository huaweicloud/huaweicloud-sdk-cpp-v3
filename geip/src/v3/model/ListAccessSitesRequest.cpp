

#include "huaweicloud/geip/v3/model/ListAccessSitesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListAccessSitesRequest::ListAccessSitesRequest()
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
    codeIsSet_ = false;
    proxyRegionIsSet_ = false;
    iecAzCodeIsSet_ = false;
}

ListAccessSitesRequest::~ListAccessSitesRequest() = default;

void ListAccessSitesRequest::validate()
{
}

web::json::value ListAccessSitesRequest::toJson() const
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
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(proxyRegionIsSet_) {
        val[utility::conversions::to_string_t("proxy_region")] = ModelBase::toJson(proxyRegion_);
    }
    if(iecAzCodeIsSet_) {
        val[utility::conversions::to_string_t("iec_az_code")] = ModelBase::toJson(iecAzCode_);
    }

    return val;
}
bool ListAccessSitesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iec_az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iec_az_code"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIecAzCode(refVal);
        }
    }
    return ok;
}


int32_t ListAccessSitesRequest::getLimit() const
{
    return limit_;
}

void ListAccessSitesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAccessSitesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAccessSitesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAccessSitesRequest::getOffset() const
{
    return offset_;
}

void ListAccessSitesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAccessSitesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAccessSitesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAccessSitesRequest::getMarker() const
{
    return marker_;
}

void ListAccessSitesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAccessSitesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAccessSitesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListAccessSitesRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListAccessSitesRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListAccessSitesRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListAccessSitesRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getFields()
{
    return fields_;
}

void ListAccessSitesRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListAccessSitesRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListAccessSitesRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getSortKey()
{
    return sortKey_;
}

void ListAccessSitesRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListAccessSitesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListAccessSitesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getSortDir()
{
    return sortDir_;
}

void ListAccessSitesRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListAccessSitesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListAccessSitesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getId()
{
    return id_;
}

void ListAccessSitesRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAccessSitesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAccessSitesRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getCode()
{
    return code_;
}

void ListAccessSitesRequest::setCode(const std::vector<std::string>& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListAccessSitesRequest::codeIsSet() const
{
    return codeIsSet_;
}

void ListAccessSitesRequest::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getProxyRegion()
{
    return proxyRegion_;
}

void ListAccessSitesRequest::setProxyRegion(const std::vector<std::string>& value)
{
    proxyRegion_ = value;
    proxyRegionIsSet_ = true;
}

bool ListAccessSitesRequest::proxyRegionIsSet() const
{
    return proxyRegionIsSet_;
}

void ListAccessSitesRequest::unsetproxyRegion()
{
    proxyRegionIsSet_ = false;
}

std::vector<std::string>& ListAccessSitesRequest::getIecAzCode()
{
    return iecAzCode_;
}

void ListAccessSitesRequest::setIecAzCode(const std::vector<std::string>& value)
{
    iecAzCode_ = value;
    iecAzCodeIsSet_ = true;
}

bool ListAccessSitesRequest::iecAzCodeIsSet() const
{
    return iecAzCodeIsSet_;
}

void ListAccessSitesRequest::unsetiecAzCode()
{
    iecAzCodeIsSet_ = false;
}

}
}
}
}
}


