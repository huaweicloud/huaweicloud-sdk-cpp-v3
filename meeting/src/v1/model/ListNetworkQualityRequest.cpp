

#include "huaweicloud/meeting/v1/model/ListNetworkQualityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListNetworkQualityRequest::ListNetworkQualityRequest()
{
    conferenceid_ = "";
    conferenceidIsSet_ = false;
    confToken_ = "";
    confTokenIsSet_ = false;
    appid_ = "";
    appidIsSet_ = false;
    confuuid_ = "";
    confuuidIsSet_ = false;
    bodyIsSet_ = false;
}

ListNetworkQualityRequest::~ListNetworkQualityRequest() = default;

void ListNetworkQualityRequest::validate()
{
}

web::json::value ListNetworkQualityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceidIsSet_) {
        val[utility::conversions::to_string_t("conferenceid")] = ModelBase::toJson(conferenceid_);
    }
    if(confTokenIsSet_) {
        val[utility::conversions::to_string_t("confToken")] = ModelBase::toJson(confToken_);
    }
    if(appidIsSet_) {
        val[utility::conversions::to_string_t("appid")] = ModelBase::toJson(appid_);
    }
    if(confuuidIsSet_) {
        val[utility::conversions::to_string_t("confuuid")] = ModelBase::toJson(confuuid_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListNetworkQualityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confToken"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("appid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("appid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confuuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confuuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfuuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestQosRequestDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListNetworkQualityRequest::getConferenceid() const
{
    return conferenceid_;
}

void ListNetworkQualityRequest::setConferenceid(const std::string& value)
{
    conferenceid_ = value;
    conferenceidIsSet_ = true;
}

bool ListNetworkQualityRequest::conferenceidIsSet() const
{
    return conferenceidIsSet_;
}

void ListNetworkQualityRequest::unsetconferenceid()
{
    conferenceidIsSet_ = false;
}

std::string ListNetworkQualityRequest::getConfToken() const
{
    return confToken_;
}

void ListNetworkQualityRequest::setConfToken(const std::string& value)
{
    confToken_ = value;
    confTokenIsSet_ = true;
}

bool ListNetworkQualityRequest::confTokenIsSet() const
{
    return confTokenIsSet_;
}

void ListNetworkQualityRequest::unsetconfToken()
{
    confTokenIsSet_ = false;
}

std::string ListNetworkQualityRequest::getAppid() const
{
    return appid_;
}

void ListNetworkQualityRequest::setAppid(const std::string& value)
{
    appid_ = value;
    appidIsSet_ = true;
}

bool ListNetworkQualityRequest::appidIsSet() const
{
    return appidIsSet_;
}

void ListNetworkQualityRequest::unsetappid()
{
    appidIsSet_ = false;
}

std::string ListNetworkQualityRequest::getConfuuid() const
{
    return confuuid_;
}

void ListNetworkQualityRequest::setConfuuid(const std::string& value)
{
    confuuid_ = value;
    confuuidIsSet_ = true;
}

bool ListNetworkQualityRequest::confuuidIsSet() const
{
    return confuuidIsSet_;
}

void ListNetworkQualityRequest::unsetconfuuid()
{
    confuuidIsSet_ = false;
}

RestQosRequestDTO ListNetworkQualityRequest::getBody() const
{
    return body_;
}

void ListNetworkQualityRequest::setBody(const RestQosRequestDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListNetworkQualityRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListNetworkQualityRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


