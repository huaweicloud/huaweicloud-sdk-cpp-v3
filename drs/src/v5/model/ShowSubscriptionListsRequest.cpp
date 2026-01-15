

#include "huaweicloud/drs/v5/model/ShowSubscriptionListsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowSubscriptionListsRequest::ShowSubscriptionListsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ShowSubscriptionListsRequest::~ShowSubscriptionListsRequest() = default;

void ShowSubscriptionListsRequest::validate()
{
}

web::json::value ShowSubscriptionListsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowSubscriptionListsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            QuerySubscriptionsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowSubscriptionListsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSubscriptionListsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSubscriptionListsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSubscriptionListsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowSubscriptionListsRequest::getLimit() const
{
    return limit_;
}

void ShowSubscriptionListsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowSubscriptionListsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowSubscriptionListsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowSubscriptionListsRequest::getOffset() const
{
    return offset_;
}

void ShowSubscriptionListsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowSubscriptionListsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowSubscriptionListsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

QuerySubscriptionsReq ShowSubscriptionListsRequest::getBody() const
{
    return body_;
}

void ShowSubscriptionListsRequest::setBody(const QuerySubscriptionsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowSubscriptionListsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowSubscriptionListsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


