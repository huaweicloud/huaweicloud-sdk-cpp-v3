

#include "huaweicloud/geip/v3/model/ShowGlobalEipTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGlobalEipTagsResponse::ShowGlobalEipTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowGlobalEipTagsResponse::~ShowGlobalEipTagsResponse() = default;

void ShowGlobalEipTagsResponse::validate()
{
}

web::json::value ShowGlobalEipTagsResponse::toJson() const
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
bool ShowGlobalEipTagsResponse::fromJson(const web::json::value& val)
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


std::string ShowGlobalEipTagsResponse::getRequestId() const
{
    return requestId_;
}

void ShowGlobalEipTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowGlobalEipTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowGlobalEipTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<CreateTag>& ShowGlobalEipTagsResponse::getTags()
{
    return tags_;
}

void ShowGlobalEipTagsResponse::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowGlobalEipTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowGlobalEipTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& ShowGlobalEipTagsResponse::getSysTags()
{
    return sysTags_;
}

void ShowGlobalEipTagsResponse::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowGlobalEipTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowGlobalEipTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ShowGlobalEipTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowGlobalEipTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowGlobalEipTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowGlobalEipTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


