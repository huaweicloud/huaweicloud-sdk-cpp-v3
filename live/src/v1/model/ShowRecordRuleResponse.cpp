

#include "huaweicloud/live/v1/model/ShowRecordRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowRecordRuleResponse::ShowRecordRuleResponse()
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

ShowRecordRuleResponse::~ShowRecordRuleResponse() = default;

void ShowRecordRuleResponse::validate()
{
}

web::json::value ShowRecordRuleResponse::toJson() const
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

bool ShowRecordRuleResponse::fromJson(const web::json::value& val)
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

std::string ShowRecordRuleResponse::getId() const
{
    return id_;
}

void ShowRecordRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRecordRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowRecordRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowRecordRuleResponse::getPublishDomain() const
{
    return publishDomain_;
}

void ShowRecordRuleResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool ShowRecordRuleResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void ShowRecordRuleResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string ShowRecordRuleResponse::getApp() const
{
    return app_;
}

void ShowRecordRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ShowRecordRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void ShowRecordRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string ShowRecordRuleResponse::getStream() const
{
    return stream_;
}

void ShowRecordRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ShowRecordRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void ShowRecordRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

std::string ShowRecordRuleResponse::getRecordType() const
{
    return recordType_;
}

void ShowRecordRuleResponse::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool ShowRecordRuleResponse::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void ShowRecordRuleResponse::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

DefaultRecordConfig ShowRecordRuleResponse::getDefaultRecordConfig() const
{
    return defaultRecordConfig_;
}

void ShowRecordRuleResponse::setDefaultRecordConfig(const DefaultRecordConfig& value)
{
    defaultRecordConfig_ = value;
    defaultRecordConfigIsSet_ = true;
}

bool ShowRecordRuleResponse::defaultRecordConfigIsSet() const
{
    return defaultRecordConfigIsSet_;
}

void ShowRecordRuleResponse::unsetdefaultRecordConfig()
{
    defaultRecordConfigIsSet_ = false;
}

utility::datetime ShowRecordRuleResponse::getCreateTime() const
{
    return createTime_;
}

void ShowRecordRuleResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowRecordRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowRecordRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime ShowRecordRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowRecordRuleResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowRecordRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowRecordRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


