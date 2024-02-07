

#include "huaweicloud/geip/v3/model/CountInternetBandwidthRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CountInternetBandwidthRequest::CountInternetBandwidthRequest()
{
    idIsSet_ = false;
    sizeIsSet_ = false;
    nameIsSet_ = false;
    nameLike_ = "";
    nameLikeIsSet_ = false;
    accessSiteIsSet_ = false;
    statusIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

CountInternetBandwidthRequest::~CountInternetBandwidthRequest() = default;

void CountInternetBandwidthRequest::validate()
{
}

web::json::value CountInternetBandwidthRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool CountInternetBandwidthRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::vector<std::string>& CountInternetBandwidthRequest::getId()
{
    return id_;
}

void CountInternetBandwidthRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountInternetBandwidthRequest::idIsSet() const
{
    return idIsSet_;
}

void CountInternetBandwidthRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<int32_t>& CountInternetBandwidthRequest::getSize()
{
    return size_;
}

void CountInternetBandwidthRequest::setSize(std::vector<int32_t> value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CountInternetBandwidthRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void CountInternetBandwidthRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::vector<std::string>& CountInternetBandwidthRequest::getName()
{
    return name_;
}

void CountInternetBandwidthRequest::setName(const std::vector<std::string>& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountInternetBandwidthRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountInternetBandwidthRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountInternetBandwidthRequest::getNameLike() const
{
    return nameLike_;
}

void CountInternetBandwidthRequest::setNameLike(const std::string& value)
{
    nameLike_ = value;
    nameLikeIsSet_ = true;
}

bool CountInternetBandwidthRequest::nameLikeIsSet() const
{
    return nameLikeIsSet_;
}

void CountInternetBandwidthRequest::unsetnameLike()
{
    nameLikeIsSet_ = false;
}

std::vector<std::string>& CountInternetBandwidthRequest::getAccessSite()
{
    return accessSite_;
}

void CountInternetBandwidthRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CountInternetBandwidthRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CountInternetBandwidthRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& CountInternetBandwidthRequest::getStatus()
{
    return status_;
}

void CountInternetBandwidthRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountInternetBandwidthRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountInternetBandwidthRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& CountInternetBandwidthRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void CountInternetBandwidthRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountInternetBandwidthRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountInternetBandwidthRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& CountInternetBandwidthRequest::getTags()
{
    return tags_;
}

void CountInternetBandwidthRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountInternetBandwidthRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountInternetBandwidthRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


