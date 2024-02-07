

#include "huaweicloud/geip/v3/model/ListGeipPoolsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipPoolsRequest::ListGeipPoolsRequest()
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
    accessSiteIsSet_ = false;
    ispIsSet_ = false;
    ipVersionIsSet_ = false;
    statusIsSet_ = false;
    typeIsSet_ = false;
}

ListGeipPoolsRequest::~ListGeipPoolsRequest() = default;

void ListGeipPoolsRequest::validate()
{
}

web::json::value ListGeipPoolsRequest::toJson() const
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
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListGeipPoolsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
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


int32_t ListGeipPoolsRequest::getLimit() const
{
    return limit_;
}

void ListGeipPoolsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGeipPoolsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGeipPoolsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListGeipPoolsRequest::getOffset() const
{
    return offset_;
}

void ListGeipPoolsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGeipPoolsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGeipPoolsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListGeipPoolsRequest::getMarker() const
{
    return marker_;
}

void ListGeipPoolsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGeipPoolsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGeipPoolsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListGeipPoolsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListGeipPoolsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListGeipPoolsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListGeipPoolsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getFields()
{
    return fields_;
}

void ListGeipPoolsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListGeipPoolsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListGeipPoolsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getSortKey()
{
    return sortKey_;
}

void ListGeipPoolsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListGeipPoolsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListGeipPoolsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getSortDir()
{
    return sortDir_;
}

void ListGeipPoolsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListGeipPoolsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListGeipPoolsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getId()
{
    return id_;
}

void ListGeipPoolsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGeipPoolsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListGeipPoolsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getCode()
{
    return code_;
}

void ListGeipPoolsRequest::setCode(const std::vector<std::string>& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ListGeipPoolsRequest::codeIsSet() const
{
    return codeIsSet_;
}

void ListGeipPoolsRequest::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getAccessSite()
{
    return accessSite_;
}

void ListGeipPoolsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListGeipPoolsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListGeipPoolsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getIsp()
{
    return isp_;
}

void ListGeipPoolsRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListGeipPoolsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListGeipPoolsRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getIpVersion()
{
    return ipVersion_;
}

void ListGeipPoolsRequest::setIpVersion(const std::vector<std::string>& value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListGeipPoolsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListGeipPoolsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getStatus()
{
    return status_;
}

void ListGeipPoolsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGeipPoolsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListGeipPoolsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListGeipPoolsRequest::getType()
{
    return type_;
}

void ListGeipPoolsRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListGeipPoolsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListGeipPoolsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


