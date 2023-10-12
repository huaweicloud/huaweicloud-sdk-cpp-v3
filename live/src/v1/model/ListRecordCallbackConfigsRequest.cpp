

#include "huaweicloud/live/v1/model/ListRecordCallbackConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordCallbackConfigsRequest::ListRecordCallbackConfigsRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRecordCallbackConfigsRequest::~ListRecordCallbackConfigsRequest() = default;

void ListRecordCallbackConfigsRequest::validate()
{
}

web::json::value ListRecordCallbackConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRecordCallbackConfigsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


std::string ListRecordCallbackConfigsRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListRecordCallbackConfigsRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListRecordCallbackConfigsRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListRecordCallbackConfigsRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListRecordCallbackConfigsRequest::getApp() const
{
    return app_;
}

void ListRecordCallbackConfigsRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListRecordCallbackConfigsRequest::appIsSet() const
{
    return appIsSet_;
}

void ListRecordCallbackConfigsRequest::unsetapp()
{
    appIsSet_ = false;
}

int32_t ListRecordCallbackConfigsRequest::getOffset() const
{
    return offset_;
}

void ListRecordCallbackConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecordCallbackConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecordCallbackConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRecordCallbackConfigsRequest::getLimit() const
{
    return limit_;
}

void ListRecordCallbackConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecordCallbackConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecordCallbackConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


