

#include "huaweicloud/geip/v3/model/ListInternetBandwidthDomainTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListInternetBandwidthDomainTagsResponse::ListInternetBandwidthDomainTagsResponse()
{
    tagsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListInternetBandwidthDomainTagsResponse::~ListInternetBandwidthDomainTagsResponse() = default;

void ListInternetBandwidthDomainTagsResponse::validate()
{
}

web::json::value ListInternetBandwidthDomainTagsResponse::toJson() const
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
bool ListInternetBandwidthDomainTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTag> refVal;
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


std::vector<CreateTag>& ListInternetBandwidthDomainTagsResponse::getTags()
{
    return tags_;
}

void ListInternetBandwidthDomainTagsResponse::setTags(const std::vector<CreateTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInternetBandwidthDomainTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInternetBandwidthDomainTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListInternetBandwidthDomainTagsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListInternetBandwidthDomainTagsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListInternetBandwidthDomainTagsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListInternetBandwidthDomainTagsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


