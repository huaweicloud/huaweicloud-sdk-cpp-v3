

#include "huaweicloud/geip/v3/model/ListGlobalEipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipsRequest::ListGlobalEipsRequest()
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
    internetBandwidthIdIsSet_ = false;
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
    accessSiteIsSet_ = false;
    geipPoolNameIsSet_ = false;
    ispIsSet_ = false;
    ipVersionIsSet_ = false;
    ipAddressIsSet_ = false;
    ipv6AddressIsSet_ = false;
    freezenIsSet_ = false;
    pollutedIsSet_ = false;
    internetBandwidthIsNullIsSet_ = false;
    gcbBandwidthIsNullIsSet_ = false;
    statusIsSet_ = false;
    associateInstanceInfoRegionIsSet_ = false;
    associateInstanceInfoInstanceTypeIsSet_ = false;
    associateInstanceInfoPublicBorderGroupIsSet_ = false;
    associateInstanceInfoInstanceSiteIsSet_ = false;
    associateInstanceInfoInstanceIdIsSet_ = false;
    associateInstanceInfoProjectIdIsSet_ = false;
    associateInstanceInfoServiceIdIsSet_ = false;
    associateInstanceInfoServiceTypeIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

ListGlobalEipsRequest::~ListGlobalEipsRequest() = default;

void ListGlobalEipsRequest::validate()
{
}

web::json::value ListGlobalEipsRequest::toJson() const
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
    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
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
    if(geipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("geip_pool_name")] = ModelBase::toJson(geipPoolName_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(ipv6AddressIsSet_) {
        val[utility::conversions::to_string_t("ipv6_address")] = ModelBase::toJson(ipv6Address_);
    }
    if(freezenIsSet_) {
        val[utility::conversions::to_string_t("freezen")] = ModelBase::toJson(freezen_);
    }
    if(pollutedIsSet_) {
        val[utility::conversions::to_string_t("polluted")] = ModelBase::toJson(polluted_);
    }
    if(internetBandwidthIsNullIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_is_null")] = ModelBase::toJson(internetBandwidthIsNull_);
    }
    if(gcbBandwidthIsNullIsSet_) {
        val[utility::conversions::to_string_t("gcb_bandwidth_is_null")] = ModelBase::toJson(gcbBandwidthIsNull_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(associateInstanceInfoRegionIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.region")] = ModelBase::toJson(associateInstanceInfoRegion_);
    }
    if(associateInstanceInfoInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_type")] = ModelBase::toJson(associateInstanceInfoInstanceType_);
    }
    if(associateInstanceInfoPublicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.public_border_group")] = ModelBase::toJson(associateInstanceInfoPublicBorderGroup_);
    }
    if(associateInstanceInfoInstanceSiteIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_site")] = ModelBase::toJson(associateInstanceInfoInstanceSite_);
    }
    if(associateInstanceInfoInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.instance_id")] = ModelBase::toJson(associateInstanceInfoInstanceId_);
    }
    if(associateInstanceInfoProjectIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.project_id")] = ModelBase::toJson(associateInstanceInfoProjectId_);
    }
    if(associateInstanceInfoServiceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.service_id")] = ModelBase::toJson(associateInstanceInfoServiceId_);
    }
    if(associateInstanceInfoServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_info.service_type")] = ModelBase::toJson(associateInstanceInfoServiceType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListGlobalEipsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("geip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPoolName(refVal);
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
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("polluted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("polluted"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolluted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_is_null"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthIsNull(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcb_bandwidth_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcb_bandwidth_is_null"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbBandwidthIsNull(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.public_border_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.service_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_info.service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_info.service_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInfoServiceType(refVal);
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
    return ok;
}


int32_t ListGlobalEipsRequest::getLimit() const
{
    return limit_;
}

void ListGlobalEipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGlobalEipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGlobalEipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListGlobalEipsRequest::getOffset() const
{
    return offset_;
}

void ListGlobalEipsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGlobalEipsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGlobalEipsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListGlobalEipsRequest::getMarker() const
{
    return marker_;
}

void ListGlobalEipsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGlobalEipsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGlobalEipsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListGlobalEipsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListGlobalEipsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListGlobalEipsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListGlobalEipsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getFields()
{
    return fields_;
}

void ListGlobalEipsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListGlobalEipsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListGlobalEipsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getSortKey()
{
    return sortKey_;
}

void ListGlobalEipsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListGlobalEipsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListGlobalEipsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getSortDir()
{
    return sortDir_;
}

void ListGlobalEipsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListGlobalEipsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListGlobalEipsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getId()
{
    return id_;
}

void ListGlobalEipsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGlobalEipsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListGlobalEipsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getInternetBandwidthId()
{
    return internetBandwidthId_;
}

void ListGlobalEipsRequest::setInternetBandwidthId(const std::vector<std::string>& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool ListGlobalEipsRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void ListGlobalEipsRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getName()
{
    return name_;
}

void ListGlobalEipsRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGlobalEipsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListGlobalEipsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGlobalEipsRequest::getNameLike() const
{
    return nameLike_;
}

void ListGlobalEipsRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool ListGlobalEipsRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void ListGlobalEipsRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAccessSite()
{
    return accessSite_;
}

void ListGlobalEipsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListGlobalEipsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListGlobalEipsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getGeipPoolName()
{
    return geipPoolName_;
}

void ListGlobalEipsRequest::setGeipPoolName(const std::vector<std::string>& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool ListGlobalEipsRequest::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void ListGlobalEipsRequest::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getIsp()
{
    return isp_;
}

void ListGlobalEipsRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListGlobalEipsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListGlobalEipsRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<int32_t>& ListGlobalEipsRequest::getIpVersion()
{
    return ipVersion_;
}

void ListGlobalEipsRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListGlobalEipsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListGlobalEipsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getIpAddress()
{
    return ipAddress_;
}

void ListGlobalEipsRequest::setIpAddress(const std::vector<std::string>& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ListGlobalEipsRequest::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ListGlobalEipsRequest::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getIpv6Address()
{
    return ipv6Address_;
}

void ListGlobalEipsRequest::setIpv6Address(const std::vector<std::string>& value)
{
    ipv6Address_ = value;
    ipv6AddressIsSet_ = true;
}

bool ListGlobalEipsRequest::ipv6AddressIsSet() const
{
    return ipv6AddressIsSet_;
}

void ListGlobalEipsRequest::unsetipv6Address()
{
    ipv6AddressIsSet_ = false;
}

std::vector<bool>& ListGlobalEipsRequest::getFreezen()
{
    return freezen_;
}

void ListGlobalEipsRequest::setFreezen(std::vector<bool> value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool ListGlobalEipsRequest::freezenIsSet() const
{
    return freezenIsSet_;
}

void ListGlobalEipsRequest::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::vector<bool>& ListGlobalEipsRequest::getPolluted()
{
    return polluted_;
}

void ListGlobalEipsRequest::setPolluted(std::vector<bool> value)
{
    polluted_ = value;
    pollutedIsSet_ = true;
}

bool ListGlobalEipsRequest::pollutedIsSet() const
{
    return pollutedIsSet_;
}

void ListGlobalEipsRequest::unsetpolluted()
{
    pollutedIsSet_ = false;
}

std::vector<bool>& ListGlobalEipsRequest::getInternetBandwidthIsNull()
{
    return internetBandwidthIsNull_;
}

void ListGlobalEipsRequest::setInternetBandwidthIsNull(std::vector<bool> value)
{
    internetBandwidthIsNull_ = value;
    internetBandwidthIsNullIsSet_ = true;
}

bool ListGlobalEipsRequest::internetBandwidthIsNullIsSet() const
{
    return internetBandwidthIsNullIsSet_;
}

void ListGlobalEipsRequest::unsetinternetBandwidthIsNull()
{
    internetBandwidthIsNullIsSet_ = false;
}

std::vector<bool>& ListGlobalEipsRequest::getGcbBandwidthIsNull()
{
    return gcbBandwidthIsNull_;
}

void ListGlobalEipsRequest::setGcbBandwidthIsNull(std::vector<bool> value)
{
    gcbBandwidthIsNull_ = value;
    gcbBandwidthIsNullIsSet_ = true;
}

bool ListGlobalEipsRequest::gcbBandwidthIsNullIsSet() const
{
    return gcbBandwidthIsNullIsSet_;
}

void ListGlobalEipsRequest::unsetgcbBandwidthIsNull()
{
    gcbBandwidthIsNullIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getStatus()
{
    return status_;
}

void ListGlobalEipsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGlobalEipsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListGlobalEipsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoRegion()
{
    return associateInstanceInfoRegion_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoRegion(const std::vector<std::string>& value)
{
    associateInstanceInfoRegion_ = value;
    associateInstanceInfoRegionIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoRegionIsSet() const
{
    return associateInstanceInfoRegionIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoRegion()
{
    associateInstanceInfoRegionIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoInstanceType()
{
    return associateInstanceInfoInstanceType_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoInstanceType(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceType_ = value;
    associateInstanceInfoInstanceTypeIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoInstanceTypeIsSet() const
{
    return associateInstanceInfoInstanceTypeIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoInstanceType()
{
    associateInstanceInfoInstanceTypeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoPublicBorderGroup()
{
    return associateInstanceInfoPublicBorderGroup_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoPublicBorderGroup(const std::vector<std::string>& value)
{
    associateInstanceInfoPublicBorderGroup_ = value;
    associateInstanceInfoPublicBorderGroupIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoPublicBorderGroupIsSet() const
{
    return associateInstanceInfoPublicBorderGroupIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoPublicBorderGroup()
{
    associateInstanceInfoPublicBorderGroupIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoInstanceSite()
{
    return associateInstanceInfoInstanceSite_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoInstanceSite(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceSite_ = value;
    associateInstanceInfoInstanceSiteIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoInstanceSiteIsSet() const
{
    return associateInstanceInfoInstanceSiteIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoInstanceSite()
{
    associateInstanceInfoInstanceSiteIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoInstanceId()
{
    return associateInstanceInfoInstanceId_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoInstanceId(const std::vector<std::string>& value)
{
    associateInstanceInfoInstanceId_ = value;
    associateInstanceInfoInstanceIdIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoInstanceIdIsSet() const
{
    return associateInstanceInfoInstanceIdIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoInstanceId()
{
    associateInstanceInfoInstanceIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoProjectId()
{
    return associateInstanceInfoProjectId_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoProjectId(const std::vector<std::string>& value)
{
    associateInstanceInfoProjectId_ = value;
    associateInstanceInfoProjectIdIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoProjectIdIsSet() const
{
    return associateInstanceInfoProjectIdIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoProjectId()
{
    associateInstanceInfoProjectIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoServiceId()
{
    return associateInstanceInfoServiceId_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoServiceId(const std::vector<std::string>& value)
{
    associateInstanceInfoServiceId_ = value;
    associateInstanceInfoServiceIdIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoServiceIdIsSet() const
{
    return associateInstanceInfoServiceIdIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoServiceId()
{
    associateInstanceInfoServiceIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getAssociateInstanceInfoServiceType()
{
    return associateInstanceInfoServiceType_;
}

void ListGlobalEipsRequest::setAssociateInstanceInfoServiceType(const std::vector<std::string>& value)
{
    associateInstanceInfoServiceType_ = value;
    associateInstanceInfoServiceTypeIsSet_ = true;
}

bool ListGlobalEipsRequest::associateInstanceInfoServiceTypeIsSet() const
{
    return associateInstanceInfoServiceTypeIsSet_;
}

void ListGlobalEipsRequest::unsetassociateInstanceInfoServiceType()
{
    associateInstanceInfoServiceTypeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void ListGlobalEipsRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListGlobalEipsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListGlobalEipsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipsRequest::getTags()
{
    return tags_;
}

void ListGlobalEipsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGlobalEipsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGlobalEipsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


