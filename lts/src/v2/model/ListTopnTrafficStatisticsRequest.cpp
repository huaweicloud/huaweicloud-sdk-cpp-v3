

#include "huaweicloud/lts/v2/model/ListTopnTrafficStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListTopnTrafficStatisticsRequest::ListTopnTrafficStatisticsRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListTopnTrafficStatisticsRequest::~ListTopnTrafficStatisticsRequest() = default;

void ListTopnTrafficStatisticsRequest::validate()
{
}

web::json::value ListTopnTrafficStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTopnTrafficStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TopnRequstBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTopnTrafficStatisticsRequest::getContentType() const
{
    return contentType_;
}

void ListTopnTrafficStatisticsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListTopnTrafficStatisticsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListTopnTrafficStatisticsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

TopnRequstBody ListTopnTrafficStatisticsRequest::getBody() const
{
    return body_;
}

void ListTopnTrafficStatisticsRequest::setBody(const TopnRequstBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTopnTrafficStatisticsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTopnTrafficStatisticsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


