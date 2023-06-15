

#include "huaweicloud/live/v1/model/CreateRecordRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordRuleResponse::CreateRecordRuleResponse()
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

CreateRecordRuleResponse::~CreateRecordRuleResponse() = default;

void CreateRecordRuleResponse::validate()
{
}

web::json::value CreateRecordRuleResponse::toJson() const
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

bool CreateRecordRuleResponse::fromJson(const web::json::value& val)
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


std::string CreateRecordRuleResponse::getId() const
{
    return id_;
}

void CreateRecordRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateRecordRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateRecordRuleResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateRecordRuleResponse::getPublishDomain() const
{
    return publishDomain_;
}

void CreateRecordRuleResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool CreateRecordRuleResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void CreateRecordRuleResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string CreateRecordRuleResponse::getApp() const
{
    return app_;
}

void CreateRecordRuleResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateRecordRuleResponse::appIsSet() const
{
    return appIsSet_;
}

void CreateRecordRuleResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateRecordRuleResponse::getStream() const
{
    return stream_;
}

void CreateRecordRuleResponse::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool CreateRecordRuleResponse::streamIsSet() const
{
    return streamIsSet_;
}

void CreateRecordRuleResponse::unsetstream()
{
    streamIsSet_ = false;
}

std::string CreateRecordRuleResponse::getRecordType() const
{
    return recordType_;
}

void CreateRecordRuleResponse::setRecordType(const std::string& value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool CreateRecordRuleResponse::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void CreateRecordRuleResponse::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

DefaultRecordConfig CreateRecordRuleResponse::getDefaultRecordConfig() const
{
    return defaultRecordConfig_;
}

void CreateRecordRuleResponse::setDefaultRecordConfig(const DefaultRecordConfig& value)
{
    defaultRecordConfig_ = value;
    defaultRecordConfigIsSet_ = true;
}

bool CreateRecordRuleResponse::defaultRecordConfigIsSet() const
{
    return defaultRecordConfigIsSet_;
}

void CreateRecordRuleResponse::unsetdefaultRecordConfig()
{
    defaultRecordConfigIsSet_ = false;
}

utility::datetime CreateRecordRuleResponse::getCreateTime() const
{
    return createTime_;
}

void CreateRecordRuleResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateRecordRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateRecordRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime CreateRecordRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateRecordRuleResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateRecordRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateRecordRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


