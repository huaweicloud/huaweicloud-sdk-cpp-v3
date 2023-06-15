

#include "huaweicloud/live/v1/model/UpdateRecordRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateRecordRuleResponse::UpdateRecordRuleResponse()
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

UpdateRecordRuleResponse::~UpdateRecordRuleResponse() = default;

void UpdateRecordRuleResponse::validate()
{
}

web::json::value UpdateRecordRuleResponse::toJson() const
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

bool UpdateRecordRuleResponse::fromJson(const web::json::value& val)
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


std::string UpdateRecordRuleResponse::getId() const
{
    return id_;
}

void UpdateRecordRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRecordRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateRecordRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateRecordRuleResponse::getPublishDomain() const
{
    return publishDomain_;
}

void UpdateRecordRuleResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool UpdateRecordRuleResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void UpdateRecordRuleResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string UpdateRecordRuleResponse::getApp() const
{
    return app_;
}

void UpdateRecordRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool UpdateRecordRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void UpdateRecordRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string UpdateRecordRuleResponse::getStream() const
{
    return stream_;
}

void UpdateRecordRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool UpdateRecordRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void UpdateRecordRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

std::string UpdateRecordRuleResponse::getRecordType() const
{
    return recordType_;
}

void UpdateRecordRuleResponse::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool UpdateRecordRuleResponse::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void UpdateRecordRuleResponse::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

DefaultRecordConfig UpdateRecordRuleResponse::getDefaultRecordConfig() const
{
    return defaultRecordConfig_;
}

void UpdateRecordRuleResponse::setDefaultRecordConfig(const DefaultRecordConfig& value)
{
    defaultRecordConfig_ = value;
    defaultRecordConfigIsSet_ = true;
}

bool UpdateRecordRuleResponse::defaultRecordConfigIsSet() const
{
    return defaultRecordConfigIsSet_;
}

void UpdateRecordRuleResponse::unsetdefaultRecordConfig()
{
    defaultRecordConfigIsSet_ = false;
}

utility::datetime UpdateRecordRuleResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateRecordRuleResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateRecordRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateRecordRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime UpdateRecordRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateRecordRuleResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateRecordRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateRecordRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


