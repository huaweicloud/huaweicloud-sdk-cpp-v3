

#include "huaweicloud/cdn/v1/model/ShowTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowTagsResponse::ShowTagsResponse()
{
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowTagsResponse::~ShowTagsResponse() = default;

void ShowTagsResponse::validate()
{
}

web::json::value ShowTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Map> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::vector<Map>& ShowTagsResponse::getTags()
{
    return tags_;
}

void ShowTagsResponse::setTags(const std::vector<Map>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ShowTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


