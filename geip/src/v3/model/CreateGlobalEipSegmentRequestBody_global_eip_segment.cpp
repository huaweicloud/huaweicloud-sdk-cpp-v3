

#include "huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody_global_eip_segment.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipSegmentRequestBody_global_eip_segment::CreateGlobalEipSegmentRequestBody_global_eip_segment()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    geipPoolName_ = "";
    geipPoolNameIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    mask_ = 0;
    maskIsSet_ = false;
    internetBandwidthIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateGlobalEipSegmentRequestBody_global_eip_segment::~CreateGlobalEipSegmentRequestBody_global_eip_segment() = default;

void CreateGlobalEipSegmentRequestBody_global_eip_segment::validate()
{
}

web::json::value CreateGlobalEipSegmentRequestBody_global_eip_segment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(geipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("geip_pool_name")] = ModelBase::toJson(geipPoolName_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(maskIsSet_) {
        val[utility::conversions::to_string_t("mask")] = ModelBase::toJson(mask_);
    }
    if(internetBandwidthIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth")] = ModelBase::toJson(internetBandwidth_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CreateGlobalEipSegmentRequestBody_global_eip_segment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("geip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth"));
        if(!fieldValue.is_null())
        {
            CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateGlobalEipRequestBody_global_eip_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string CreateGlobalEipSegmentRequestBody_global_eip_segment::getName() const
{
    return name_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment::getDescription() const
{
    return description_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment::getGeipPoolName() const
{
    return geipPoolName_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment::getAccessSite() const
{
    return accessSite_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t CreateGlobalEipSegmentRequestBody_global_eip_segment::getMask() const
{
    return mask_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setMask(int32_t value)
{
    mask_ = value;
    maskIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::maskIsSet() const
{
    return maskIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetmask()
{
    maskIsSet_ = false;
}

CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth CreateGlobalEipSegmentRequestBody_global_eip_segment::getInternetBandwidth() const
{
    return internetBandwidth_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setInternetBandwidth(const CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth& value)
{
    internetBandwidth_ = value;
    internetBandwidthIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::internetBandwidthIsSet() const
{
    return internetBandwidthIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetinternetBandwidth()
{
    internetBandwidthIsSet_ = false;
}

std::vector<CreateGlobalEipRequestBody_global_eip_tags>& CreateGlobalEipSegmentRequestBody_global_eip_segment::getTags()
{
    return tags_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateGlobalEipSegmentRequestBody_global_eip_segment::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateGlobalEipSegmentRequestBody_global_eip_segment::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateGlobalEipSegmentRequestBody_global_eip_segment::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


