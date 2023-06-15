

#include "huaweicloud/live/v1/model/RecordRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




RecordRule::RecordRule()
{
    id_ = "";
    idIsSet_ = false;
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    recordType_ = "";
    recordTypeIsSet_ = false;
    defaultRecordConfigIsSet_ = false;
    createTimeIsSet_ = false;
    updateTimeIsSet_ = false;
}

RecordRule::~RecordRule() = default;

void RecordRule::validate()
{
}

web::json::value RecordRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool RecordRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string RecordRule::getId() const
{
    return id_;
}

void RecordRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RecordRule::idIsSet() const
{
    return idIsSet_;
}

void RecordRule::unsetid()
{
    idIsSet_ = false;
}

std::string RecordRule::getPublishDomain() const
{
    return publishDomain_;
}

void RecordRule::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool RecordRule::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void RecordRule::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string RecordRule::getApp() const
{
    return app_;
}

void RecordRule::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool RecordRule::appIsSet() const
{
    return appIsSet_;
}

void RecordRule::unsetapp()
{
    appIsSet_ = false;
}

std::string RecordRule::getStream() const
{
    return stream_;
}

void RecordRule::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool RecordRule::streamIsSet() const
{
    return streamIsSet_;
}

void RecordRule::unsetstream()
{
    streamIsSet_ = false;
}

std::string RecordRule::getRecordType() const
{
    return recordType_;
}

void RecordRule::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool RecordRule::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void RecordRule::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

DefaultRecordConfig RecordRule::getDefaultRecordConfig() const
{
    return defaultRecordConfig_;
}

void RecordRule::setDefaultRecordConfig(const DefaultRecordConfig& value)
{
    defaultRecordConfig_ = value;
    defaultRecordConfigIsSet_ = true;
}

bool RecordRule::defaultRecordConfigIsSet() const
{
    return defaultRecordConfigIsSet_;
}

void RecordRule::unsetdefaultRecordConfig()
{
    defaultRecordConfigIsSet_ = false;
}

utility::datetime RecordRule::getCreateTime() const
{
    return createTime_;
}

void RecordRule::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RecordRule::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RecordRule::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime RecordRule::getUpdateTime() const
{
    return updateTime_;
}

void RecordRule::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool RecordRule::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void RecordRule::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


