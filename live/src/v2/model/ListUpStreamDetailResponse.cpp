

#include "huaweicloud/live/v2/model/ListUpStreamDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ListUpStreamDetailResponse::ListUpStreamDetailResponse()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    dataIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListUpStreamDetailResponse::~ListUpStreamDetailResponse() = default;

void ListUpStreamDetailResponse::validate()
{
}

web::json::value ListUpStreamDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}

bool ListUpStreamDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<UpStreamDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::string ListUpStreamDetailResponse::getPublishDomain() const
{
    return publishDomain_;
}

void ListUpStreamDetailResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListUpStreamDetailResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListUpStreamDetailResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListUpStreamDetailResponse::getApp() const
{
    return app_;
}

void ListUpStreamDetailResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListUpStreamDetailResponse::appIsSet() const
{
    return appIsSet_;
}

void ListUpStreamDetailResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string ListUpStreamDetailResponse::getStream() const
{
    return stream_;
}

void ListUpStreamDetailResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListUpStreamDetailResponse::streamIsSet() const
{
    return streamIsSet_;
}

void ListUpStreamDetailResponse::unsetstream()
{
    streamIsSet_ = false;
}

std::vector<UpStreamDetail>& ListUpStreamDetailResponse::getData()
{
    return data_;
}

void ListUpStreamDetailResponse::setData(const std::vector<UpStreamDetail>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListUpStreamDetailResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListUpStreamDetailResponse::unsetdata()
{
    dataIsSet_ = false;
}

std::string ListUpStreamDetailResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListUpStreamDetailResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListUpStreamDetailResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListUpStreamDetailResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


