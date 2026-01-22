

#include "huaweicloud/geip/v3/model/CountGlobalEipSegmentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountGlobalEipSegmentRequest::CountGlobalEipSegmentRequest()
{
    fieldsIsSet_ = false;
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
    associateInstancePublicBorderGroupIsSet_ = false;
    associateInstanceInstanceSiteIsSet_ = false;
    associateInstanceInstanceTypeIsSet_ = false;
    associateInstanceInstanceIdIsSet_ = false;
    associateInstanceProjectIdIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

CountGlobalEipSegmentRequest::~CountGlobalEipSegmentRequest() = default;

void CountGlobalEipSegmentRequest::validate()
{
}

web::json::value CountGlobalEipSegmentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
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
    if(associateInstancePublicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.public_border_group")] = ModelBase::toJson(associateInstancePublicBorderGroup_);
    }
    if(associateInstanceInstanceSiteIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_site")] = ModelBase::toJson(associateInstanceInstanceSite_);
    }
    if(associateInstanceInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_type")] = ModelBase::toJson(associateInstanceInstanceType_);
    }
    if(associateInstanceInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.instance_id")] = ModelBase::toJson(associateInstanceInstanceId_);
    }
    if(associateInstanceProjectIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance.project_id")] = ModelBase::toJson(associateInstanceProjectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CountGlobalEipSegmentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("associate_instance.instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance.instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceInstanceType(refVal);
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


std::vector<std::string>& CountGlobalEipSegmentRequest::getFields()
{
    return fields_;
}

void CountGlobalEipSegmentRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void CountGlobalEipSegmentRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getId()
{
    return id_;
}

void CountGlobalEipSegmentRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::idIsSet() const
{
    return idIsSet_;
}

void CountGlobalEipSegmentRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getInternetBandwidthId()
{
    return internetBandwidthId_;
}

void CountGlobalEipSegmentRequest::setInternetBandwidthId(const std::vector<std::string>& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void CountGlobalEipSegmentRequest::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getName()
{
    return name_;
}

void CountGlobalEipSegmentRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountGlobalEipSegmentRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountGlobalEipSegmentRequest::getNameLike() const
{
    return nameLike_;
}

void CountGlobalEipSegmentRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void CountGlobalEipSegmentRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAccessSite()
{
    return accessSite_;
}

void CountGlobalEipSegmentRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CountGlobalEipSegmentRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getGeipPoolName()
{
    return geipPoolName_;
}

void CountGlobalEipSegmentRequest::setGeipPoolName(const std::vector<std::string>& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void CountGlobalEipSegmentRequest::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getIsp()
{
    return isp_;
}

void CountGlobalEipSegmentRequest::setIsp(const std::vector<std::string>& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::ispIsSet() const
{
    return ispIsSet_;
}

void CountGlobalEipSegmentRequest::unsetisp()
{
    ispIsSet_ = false;
}

std::vector<int32_t>& CountGlobalEipSegmentRequest::getIpVersion()
{
    return ipVersion_;
}

void CountGlobalEipSegmentRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void CountGlobalEipSegmentRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getCidr()
{
    return cidr_;
}

void CountGlobalEipSegmentRequest::setCidr(const std::vector<std::string>& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::cidrIsSet() const
{
    return cidrIsSet_;
}

void CountGlobalEipSegmentRequest::unsetcidr()
{
    cidrIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getCidrV6()
{
    return cidrV6_;
}

void CountGlobalEipSegmentRequest::setCidrV6(const std::vector<std::string>& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool CountGlobalEipSegmentRequest::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void CountGlobalEipSegmentRequest::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

std::vector<bool>& CountGlobalEipSegmentRequest::getFreezen()
{
    return freezen_;
}

void CountGlobalEipSegmentRequest::setFreezen(std::vector<bool> value)
{
    freezen_ = value;
    freezenIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::freezenIsSet() const
{
    return freezenIsSet_;
}

void CountGlobalEipSegmentRequest::unsetfreezen()
{
    freezenIsSet_ = false;
}

std::vector<bool>& CountGlobalEipSegmentRequest::getInternetBandwidthIsNull()
{
    return internetBandwidthIsNull_;
}

void CountGlobalEipSegmentRequest::setInternetBandwidthIsNull(std::vector<bool> value)
{
    internetBandwidthIsNull_ = value;
    internetBandwidthIsNullIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::internetBandwidthIsNullIsSet() const
{
    return internetBandwidthIsNullIsSet_;
}

void CountGlobalEipSegmentRequest::unsetinternetBandwidthIsNull()
{
    internetBandwidthIsNullIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getStatus()
{
    return status_;
}

void CountGlobalEipSegmentRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountGlobalEipSegmentRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstanceRegion()
{
    return associateInstanceRegion_;
}

void CountGlobalEipSegmentRequest::setAssociateInstanceRegion(const std::vector<std::string>& value)
{
    associateInstanceRegion_ = value;
    associateInstanceRegionIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstanceRegionIsSet() const
{
    return associateInstanceRegionIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstanceRegion()
{
    associateInstanceRegionIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstancePublicBorderGroup()
{
    return associateInstancePublicBorderGroup_;
}

void CountGlobalEipSegmentRequest::setAssociateInstancePublicBorderGroup(const std::vector<std::string>& value)
{
    associateInstancePublicBorderGroup_ = value;
    associateInstancePublicBorderGroupIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstancePublicBorderGroupIsSet() const
{
    return associateInstancePublicBorderGroupIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstancePublicBorderGroup()
{
    associateInstancePublicBorderGroupIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstanceInstanceSite()
{
    return associateInstanceInstanceSite_;
}

void CountGlobalEipSegmentRequest::setAssociateInstanceInstanceSite(const std::vector<std::string>& value)
{
    associateInstanceInstanceSite_ = value;
    associateInstanceInstanceSiteIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstanceInstanceSiteIsSet() const
{
    return associateInstanceInstanceSiteIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstanceInstanceSite()
{
    associateInstanceInstanceSiteIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstanceInstanceType()
{
    return associateInstanceInstanceType_;
}

void CountGlobalEipSegmentRequest::setAssociateInstanceInstanceType(const std::vector<std::string>& value)
{
    associateInstanceInstanceType_ = value;
    associateInstanceInstanceTypeIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstanceInstanceTypeIsSet() const
{
    return associateInstanceInstanceTypeIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstanceInstanceType()
{
    associateInstanceInstanceTypeIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstanceInstanceId()
{
    return associateInstanceInstanceId_;
}

void CountGlobalEipSegmentRequest::setAssociateInstanceInstanceId(const std::vector<std::string>& value)
{
    associateInstanceInstanceId_ = value;
    associateInstanceInstanceIdIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstanceInstanceIdIsSet() const
{
    return associateInstanceInstanceIdIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstanceInstanceId()
{
    associateInstanceInstanceIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getAssociateInstanceProjectId()
{
    return associateInstanceProjectId_;
}

void CountGlobalEipSegmentRequest::setAssociateInstanceProjectId(const std::vector<std::string>& value)
{
    associateInstanceProjectId_ = value;
    associateInstanceProjectIdIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::associateInstanceProjectIdIsSet() const
{
    return associateInstanceProjectIdIsSet_;
}

void CountGlobalEipSegmentRequest::unsetassociateInstanceProjectId()
{
    associateInstanceProjectIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void CountGlobalEipSegmentRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountGlobalEipSegmentRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& CountGlobalEipSegmentRequest::getTags()
{
    return tags_;
}

void CountGlobalEipSegmentRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountGlobalEipSegmentRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountGlobalEipSegmentRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


