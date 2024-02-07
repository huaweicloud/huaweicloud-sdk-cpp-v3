

#include "huaweicloud/geip/v3/model/ShowGeipSegmentTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowGeipSegmentTagsResponse::ShowGeipSegmentTagsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowGeipSegmentTagsResponse::~ShowGeipSegmentTagsResponse() = default;

void ShowGeipSegmentTagsResponse::validate()
{
}

web::json::value ShowGeipSegmentTagsResponse::toJson() const
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
bool ShowGeipSegmentTagsResponse::fromJson(const web::json::value& val)
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


std::string ShowGeipSegmentTagsResponse::getRequestId() const
{
    return requestId_;
}

void ShowGeipSegmentTagsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowGeipSegmentTagsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowGeipSegmentTagsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<CreateTag>& ShowGeipSegmentTagsResponse::getTags()
{
    return tags_;
}

void ShowGeipSegmentTagsResponse::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowGeipSegmentTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowGeipSegmentTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& ShowGeipSegmentTagsResponse::getSysTags()
{
    return sysTags_;
}

void ShowGeipSegmentTagsResponse::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowGeipSegmentTagsResponse::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowGeipSegmentTagsResponse::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ShowGeipSegmentTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowGeipSegmentTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowGeipSegmentTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowGeipSegmentTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


