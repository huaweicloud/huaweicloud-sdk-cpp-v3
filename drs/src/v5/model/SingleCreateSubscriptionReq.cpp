

#include "huaweicloud/drs/v5/model/SingleCreateSubscriptionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SingleCreateSubscriptionReq::SingleCreateSubscriptionReq()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    sourceEndpointInfoIsSet_ = false;
    isGrantNewAgency_ = false;
    isGrantNewAgencyIsSet_ = false;
}

SingleCreateSubscriptionReq::~SingleCreateSubscriptionReq() = default;

void SingleCreateSubscriptionReq::validate()
{
}

web::json::value SingleCreateSubscriptionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sourceEndpointInfoIsSet_) {
        val[utility::conversions::to_string_t("source_endpoint_info")] = ModelBase::toJson(sourceEndpointInfo_);
    }
    if(isGrantNewAgencyIsSet_) {
        val[utility::conversions::to_string_t("is_grant_new_agency")] = ModelBase::toJson(isGrantNewAgency_);
    }

    return val;
}
bool SingleCreateSubscriptionReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_endpoint_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_endpoint_info"));
        if(!fieldValue.is_null())
        {
            SubscriptionSourceEndpointInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceEndpointInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_grant_new_agency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_grant_new_agency"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsGrantNewAgency(refVal);
        }
    }
    return ok;
}


std::string SingleCreateSubscriptionReq::getName() const
{
    return name_;
}

void SingleCreateSubscriptionReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SingleCreateSubscriptionReq::nameIsSet() const
{
    return nameIsSet_;
}

void SingleCreateSubscriptionReq::unsetname()
{
    nameIsSet_ = false;
}

std::string SingleCreateSubscriptionReq::getDescription() const
{
    return description_;
}

void SingleCreateSubscriptionReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SingleCreateSubscriptionReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SingleCreateSubscriptionReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SingleCreateSubscriptionReq::getInstanceType() const
{
    return instanceType_;
}

void SingleCreateSubscriptionReq::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool SingleCreateSubscriptionReq::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void SingleCreateSubscriptionReq::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string SingleCreateSubscriptionReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SingleCreateSubscriptionReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SingleCreateSubscriptionReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SingleCreateSubscriptionReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<ResourceTag>& SingleCreateSubscriptionReq::getTags()
{
    return tags_;
}

void SingleCreateSubscriptionReq::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SingleCreateSubscriptionReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void SingleCreateSubscriptionReq::unsettags()
{
    tagsIsSet_ = false;
}

SubscriptionSourceEndpointInfo SingleCreateSubscriptionReq::getSourceEndpointInfo() const
{
    return sourceEndpointInfo_;
}

void SingleCreateSubscriptionReq::setSourceEndpointInfo(const SubscriptionSourceEndpointInfo& value)
{
    sourceEndpointInfo_ = value;
    sourceEndpointInfoIsSet_ = true;
}

bool SingleCreateSubscriptionReq::sourceEndpointInfoIsSet() const
{
    return sourceEndpointInfoIsSet_;
}

void SingleCreateSubscriptionReq::unsetsourceEndpointInfo()
{
    sourceEndpointInfoIsSet_ = false;
}

bool SingleCreateSubscriptionReq::isIsGrantNewAgency() const
{
    return isGrantNewAgency_;
}

void SingleCreateSubscriptionReq::setIsGrantNewAgency(bool value)
{
    isGrantNewAgency_ = value;
    isGrantNewAgencyIsSet_ = true;
}

bool SingleCreateSubscriptionReq::isGrantNewAgencyIsSet() const
{
    return isGrantNewAgencyIsSet_;
}

void SingleCreateSubscriptionReq::unsetisGrantNewAgency()
{
    isGrantNewAgencyIsSet_ = false;
}

}
}
}
}
}


