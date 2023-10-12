

#include "huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListActiveOrHistoryAlarmsRequest::ListActiveOrHistoryAlarmsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    bodyIsSet_ = false;
}

ListActiveOrHistoryAlarmsRequest::~ListActiveOrHistoryAlarmsRequest() = default;

void ListActiveOrHistoryAlarmsRequest::validate()
{
}

web::json::value ListActiveOrHistoryAlarmsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListActiveOrHistoryAlarmsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
            ListActiveOrHistoryAlarmsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListActiveOrHistoryAlarmsRequest::getDomainId() const
{
    return domainId_;
}

void ListActiveOrHistoryAlarmsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListActiveOrHistoryAlarmsRequest::getType() const
{
    return type_;
}

void ListActiveOrHistoryAlarmsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListActiveOrHistoryAlarmsRequest::getMarker() const
{
    return marker_;
}

void ListActiveOrHistoryAlarmsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListActiveOrHistoryAlarmsRequest::getLimit() const
{
    return limit_;
}

void ListActiveOrHistoryAlarmsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListActiveOrHistoryAlarmsRequest::getContentType() const
{
    return contentType_;
}

void ListActiveOrHistoryAlarmsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

ListActiveOrHistoryAlarmsRequestBody ListActiveOrHistoryAlarmsRequest::getBody() const
{
    return body_;
}

void ListActiveOrHistoryAlarmsRequest::setBody(const ListActiveOrHistoryAlarmsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListActiveOrHistoryAlarmsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


