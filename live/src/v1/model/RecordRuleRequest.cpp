

#include "huaweicloud/live/v1/model/RecordRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordRuleRequest::RecordRuleRequest()
{
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    defaultRecordConfigIsSet_ = false;
}

RecordRuleRequest::~RecordRuleRequest() = default;

void RecordRuleRequest::validate()
{
}

web::json::value RecordRuleRequest::toJson() const
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
    if(defaultRecordConfigIsSet_) {
        val[utility::conversions::to_string_t("default_record_config")] = ModelBase::toJson(defaultRecordConfig_);
    }

    return val;
}
bool RecordRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default_record_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_record_config"));
        if(!fieldValue.is_null())
        {
            DefaultRecordConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultRecordConfig(refVal);
        }
    }
    return ok;
}


std::string RecordRuleRequest::getPublishDomain() const
{
    return publishDomain_;
}

void RecordRuleRequest::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordRuleRequest::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordRuleRequest::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordRuleRequest::getApp() const
{
    return app_;
}

void RecordRuleRequest::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordRuleRequest::appIsSet() const
{
    return appIsSet_;
}

void RecordRuleRequest::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordRuleRequest::getStream() const
{
    return stream_;
}

void RecordRuleRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool RecordRuleRequest::streamIsSet() const
{
    return streamIsSet_;
}

void RecordRuleRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string RecordRuleRequest::getRecordType() const
{
    return recordType_;
}

void RecordRuleRequest::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool RecordRuleRequest::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void RecordRuleRequest::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

DefaultRecordConfig RecordRuleRequest::getDefaultRecordConfig() const
{
    return defaultRecordConfig_;
}

void RecordRuleRequest::setDefaultRecordConfig(const DefaultRecordConfig& value)
{
    defaultRecordConfig_ = value;
    defaultRecordConfigIsSet_ = true;
}

bool RecordRuleRequest::defaultRecordConfigIsSet() const
{
    return defaultRecordConfigIsSet_;
}

void RecordRuleRequest::unsetdefaultRecordConfig()
{
    defaultRecordConfigIsSet_ = false;
}

}
}
}
}
}


