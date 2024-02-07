

#include "huaweicloud/geip/v3/model/ShowInternetBandwidthTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowInternetBandwidthTagsResponse::ShowInternetBandwidthTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowInternetBandwidthTagsResponse::~ShowInternetBandwidthTagsResponse() = default;

void ShowInternetBandwidthTagsResponse::validate()
{
}

web::json::value ShowInternetBandwidthTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowInternetBandwidthTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SysTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowInternetBandwidthTagsResponse::getRequestId() const
{
    return requestId_;
}

void ShowInternetBandwidthTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowInternetBandwidthTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowInternetBandwidthTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<CreateTag>& ShowInternetBandwidthTagsResponse::getTags()
{
    return tags_;
}

void ShowInternetBandwidthTagsResponse::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowInternetBandwidthTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowInternetBandwidthTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& ShowInternetBandwidthTagsResponse::getSysTags()
{
    return sysTags_;
}

void ShowInternetBandwidthTagsResponse::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowInternetBandwidthTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowInternetBandwidthTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ShowInternetBandwidthTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowInternetBandwidthTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowInternetBandwidthTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowInternetBandwidthTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


