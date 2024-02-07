

#include "huaweicloud/geip/v3/model/ListGlobalEipSegmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGlobalEipSegmentsRequest::ListGlobalEipSegmentsRequest()
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
    cidrIsSet_ = false;
    cidrV6IsSet_ = false;
    freezenIsSet_ = false;
    internetBandwidthIsNullIsSet_ = false;
    statusIsSet_ = false;
    associateInstanceRegionIsSet_ = false;
    associateInstanceInstanceTypeIsSet_ = false;
    associateInstancePublicBorderGroupIsSet_ = false;
    associateInstanceInstanceSiteIsSet_ = false;
    associateInstanceInstanceIdIsSet_ = false;
    associateInstanceProjectIdIsSet_ = false;
    associateInstanceServiceIdIsSet_ = false;
    associateInstanceServiceTypeIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

ListGlobalEipSegmentsRequest::~ListGlobalEipSegmentsRequest() = default;

void ListGlobalEipSegmentsRequest::validate()
{
}

web::json::value ListGlobalEipSegmentsRequest::toJson() const
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
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(cidrV6IsSet_) {
        val[utility::conversions::to_string_t("cidr_v6")] = ModelBase::toJson(cidrV6_);
    }
    if(freezenIsSet_) {
        val[utility::conversions::to_string_t("freezen")] = ModelBase::toJson(freezen_);
    }
    if(internetBandwidthIsNullIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_is_null")] = ModelBase::toJson(internetBandwidthIsNull_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(associateInstanceRegionIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.region")] = ModelBase::toJson(associateInstanceRegion_);
    }
    if(associateInstanceInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_type")] = ModelBase::toJson(associateInstanceInstanceType_);
    }
    if(associateInstancePublicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.public_border_group")] = ModelBase::toJson(associateInstancePublicBorderGroup_);
    }
    if(associateInstanceInstanceSiteIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_site")] = ModelBase::toJson(associateInstanceInstanceSite_);
    }
    if(associateInstanceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_id")] = ModelBase::toJson(associateInstanceInstanceId_);
    }
    if(associateInstanceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.project_id")] = ModelBase::toJson(associateInstanceProjectId_);
    }
    if(associateInstanceServiceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.service_id")] = ModelBase::toJson(associateInstanceServiceId_);
    }
    if(associateInstanceServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.service_type")] = ModelBase::toJson(associateInstanceServiceType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListGlobalEipSegmentsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_v6"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrV6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_is_null"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_is_null"));
        if(!fieldValue.is_null())
        {
            std::vector<bool> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthIsNull(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("associate_instance.region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.public_border_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstancePublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.instance_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.instance_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInstanceSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.service_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance.service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.service_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceServiceType(refVal);
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


int32_t ListGlobalEipSegmentsRequest::getLimit() const
{
    return limit_;
}

void ListGlobalEipSegmentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListGlobalEipSegmentsRequest::getOffset() const
{
    return offset_;
}

void ListGlobalEipSegmentsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListGlobalEipSegmentsRequest::getMarker() const
{
    return marker_;
}

void ListGlobalEipSegmentsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListGlobalEipSegmentsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListGlobalEipSegmentsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getFields()
{
    return fields_;
}

void ListGlobalEipSegmentsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getSortKey()
{
    return sortKey_;
}

void ListGlobalEipSegmentsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getSortDir()
{
    return sortDir_;
}

void ListGlobalEipSegmentsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getId()
{
    return id_;
}

void ListGlobalEipSegmentsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getInternetBandwidthId()
{
    return internetBandwidthId_;
}

void ListGlobalEipSegmentsRequest::setInternetBandwidthId(const std::vector<std::string>& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getName()
{
    return name_;
}

void ListGlobalEipSegmentsRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGlobalEipSegmentsRequest::getNameLike() const
{
    return nameLike_;
}

void ListGlobalEipSegmentsRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAccessSite()
{
    return accessSite_;
}

void ListGlobalEipSegmentsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getGeipPoolName()
{
    return geipPoolName_;
}

void ListGlobalEipSegmentsRequest::setGeipPoolName(const std::vector<std::string>& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getIsp()
{
    return isp_;
}

void ListGlobalEipSegmentsRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::ispIsSet() const
{
    return ispIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<int32_t>& ListGlobalEipSegmentsRequest::getIpVersion()
{
    return ipVersion_;
}

void ListGlobalEipSegmentsRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getCidr()
{
    return cidr_;
}

void ListGlobalEipSegmentsRequest::setCidr(const std::vector<std::string>& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::cidrIsSet() const
{
    return cidrIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetcidr()
{
    cidrIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getCidrV6()
{
    return cidrV6_;
}

void ListGlobalEipSegmentsRequest::setCidrV6(const std::vector<std::string>& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void ListGlobalEipSegmentsRequest::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

std::vector<bool>& ListGlobalEipSegmentsRequest::getFreezen()
{
    return freezen_;
}

void ListGlobalEipSegmentsRequest::setFreezen(std::vector<bool> value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::freezenIsSet() const
{
    return freezenIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::vector<bool>& ListGlobalEipSegmentsRequest::getInternetBandwidthIsNull()
{
    return internetBandwidthIsNull_;
}

void ListGlobalEipSegmentsRequest::setInternetBandwidthIsNull(std::vector<bool> value)
{
    internetBandwidthIsNull_ = value;
    internetBandwidthIsNullIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::internetBandwidthIsNullIsSet() const
{
    return internetBandwidthIsNullIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetinternetBandwidthIsNull()
{
    internetBandwidthIsNullIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getStatus()
{
    return status_;
}

void ListGlobalEipSegmentsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceRegion()
{
    return associateInstanceRegion_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceRegion(const std::vector<std::string>& value)
{
    associateInstanceRegion_ = value;
    associateInstanceRegionIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceRegionIsSet() const
{
    return associateInstanceRegionIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceRegion()
{
    associateInstanceRegionIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceInstanceType()
{
    return associateInstanceInstanceType_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceInstanceType(const std::vector<std::string>& value)
{
    associateInstanceInstanceType_ = value;
    associateInstanceInstanceTypeIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceInstanceTypeIsSet() const
{
    return associateInstanceInstanceTypeIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceInstanceType()
{
    associateInstanceInstanceTypeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstancePublicBorderGroup()
{
    return associateInstancePublicBorderGroup_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstancePublicBorderGroup(const std::vector<std::string>& value)
{
    associateInstancePublicBorderGroup_ = value;
    associateInstancePublicBorderGroupIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstancePublicBorderGroupIsSet() const
{
    return associateInstancePublicBorderGroupIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstancePublicBorderGroup()
{
    associateInstancePublicBorderGroupIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceInstanceSite()
{
    return associateInstanceInstanceSite_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceInstanceSite(const std::vector<std::string>& value)
{
    associateInstanceInstanceSite_ = value;
    associateInstanceInstanceSiteIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceInstanceSiteIsSet() const
{
    return associateInstanceInstanceSiteIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceInstanceSite()
{
    associateInstanceInstanceSiteIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceInstanceId()
{
    return associateInstanceInstanceId_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceInstanceId(const std::vector<std::string>& value)
{
    associateInstanceInstanceId_ = value;
    associateInstanceInstanceIdIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceInstanceIdIsSet() const
{
    return associateInstanceInstanceIdIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceInstanceId()
{
    associateInstanceInstanceIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceProjectId()
{
    return associateInstanceProjectId_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceProjectId(const std::vector<std::string>& value)
{
    associateInstanceProjectId_ = value;
    associateInstanceProjectIdIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceProjectIdIsSet() const
{
    return associateInstanceProjectIdIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceProjectId()
{
    associateInstanceProjectIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceServiceId()
{
    return associateInstanceServiceId_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceServiceId(const std::vector<std::string>& value)
{
    associateInstanceServiceId_ = value;
    associateInstanceServiceIdIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceServiceIdIsSet() const
{
    return associateInstanceServiceIdIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceServiceId()
{
    associateInstanceServiceIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getAssociateInstanceServiceType()
{
    return associateInstanceServiceType_;
}

void ListGlobalEipSegmentsRequest::setAssociateInstanceServiceType(const std::vector<std::string>& value)
{
    associateInstanceServiceType_ = value;
    associateInstanceServiceTypeIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::associateInstanceServiceTypeIsSet() const
{
    return associateInstanceServiceTypeIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetassociateInstanceServiceType()
{
    associateInstanceServiceTypeIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void ListGlobalEipSegmentsRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListGlobalEipSegmentsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListGlobalEipSegmentsRequest::getTags()
{
    return tags_;
}

void ListGlobalEipSegmentsRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListGlobalEipSegmentsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListGlobalEipSegmentsRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


