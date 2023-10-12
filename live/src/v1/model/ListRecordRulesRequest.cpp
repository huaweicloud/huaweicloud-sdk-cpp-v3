

#include "huaweicloud/live/v1/model/ListRecordRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListRecordRulesRequest::ListRecordRulesRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRecordRulesRequest::~ListRecordRulesRequest() = default;

void ListRecordRulesRequest::validate()
{
}

web::json::value ListRecordRulesRequest::toJson() const
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
    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("record_type")] = ModelBase::toJson(recordType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRecordRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
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


std::string ListRecordRulesRequest::getPublishDomain() const
{
    return publishDomain_;
}

void ListRecordRulesRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ListRecordRulesRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ListRecordRulesRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ListRecordRulesRequest::getApp() const
{
    return app_;
}

void ListRecordRulesRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ListRecordRulesRequest::appIsSet() const
{
    return appIsSet_;
}

void ListRecordRulesRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string ListRecordRulesRequest::getStream() const
{
    return stream_;
}

void ListRecordRulesRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ListRecordRulesRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ListRecordRulesRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ListRecordRulesRequest::getRecordType() const
{
    return recordType_;
}

void ListRecordRulesRequest::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool ListRecordRulesRequest::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void ListRecordRulesRequest::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

int32_t ListRecordRulesRequest::getOffset() const
{
    return offset_;
}

void ListRecordRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRecordRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRecordRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRecordRulesRequest::getLimit() const
{
    return limit_;
}

void ListRecordRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecordRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecordRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


