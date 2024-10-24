

#include "huaweicloud/live/v1/model/CreateOttChannelInfoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateOttChannelInfoReq::CreateOttChannelInfoReq()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    inputIsSet_ = false;
    encoderSettingsIsSet_ = false;
    recordSettingsIsSet_ = false;
    endpointsIsSet_ = false;
    encoderSettingsExpandIsSet_ = false;
}

CreateOttChannelInfoReq::~CreateOttChannelInfoReq() = default;

void CreateOttChannelInfoReq::validate()
{
}

web::json::value CreateOttChannelInfoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(encoderSettingsIsSet_) {
        val[utility::conversions::to_string_t("encoder_settings")] = ModelBase::toJson(encoderSettings_);
    }
    if(recordSettingsIsSet_) {
        val[utility::conversions::to_string_t("record_settings")] = ModelBase::toJson(recordSettings_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(encoderSettingsExpandIsSet_) {
        val[utility::conversions::to_string_t("encoder_settings_expand")] = ModelBase::toJson(encoderSettingsExpand_);
    }

    return val;
}
bool CreateOttChannelInfoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            InputStreamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoder_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoder_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyOttChannelEncoderSettings_encoder_settings> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoderSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_settings"));
        if(!fieldValue.is_null())
        {
            CreateOttChannelInfoReq_record_settings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoder_settings_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoder_settings_expand"));
        if(!fieldValue.is_null())
        {
            EncoderSettingsExpand refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoderSettingsExpand(refVal);
        }
    }
    return ok;
}


std::string CreateOttChannelInfoReq::getDomain() const
{
    return domain_;
}

void CreateOttChannelInfoReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CreateOttChannelInfoReq::domainIsSet() const
{
    return domainIsSet_;
}

void CreateOttChannelInfoReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CreateOttChannelInfoReq::getAppName() const
{
    return appName_;
}

void CreateOttChannelInfoReq::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool CreateOttChannelInfoReq::appNameIsSet() const
{
    return appNameIsSet_;
}

void CreateOttChannelInfoReq::unsetappName()
{
    appNameIsSet_ = false;
}

std::string CreateOttChannelInfoReq::getId() const
{
    return id_;
}

void CreateOttChannelInfoReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateOttChannelInfoReq::idIsSet() const
{
    return idIsSet_;
}

void CreateOttChannelInfoReq::unsetid()
{
    idIsSet_ = false;
}

std::string CreateOttChannelInfoReq::getName() const
{
    return name_;
}

void CreateOttChannelInfoReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateOttChannelInfoReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateOttChannelInfoReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateOttChannelInfoReq::getState() const
{
    return state_;
}

void CreateOttChannelInfoReq::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateOttChannelInfoReq::stateIsSet() const
{
    return stateIsSet_;
}

void CreateOttChannelInfoReq::unsetstate()
{
    stateIsSet_ = false;
}

InputStreamInfo CreateOttChannelInfoReq::getInput() const
{
    return input_;
}

void CreateOttChannelInfoReq::setInput(const InputStreamInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateOttChannelInfoReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateOttChannelInfoReq::unsetinput()
{
    inputIsSet_ = false;
}

std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& CreateOttChannelInfoReq::getEncoderSettings()
{
    return encoderSettings_;
}

void CreateOttChannelInfoReq::setEncoderSettings(const std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& value)
{
    encoderSettings_ = value;
    encoderSettingsIsSet_ = true;
}

bool CreateOttChannelInfoReq::encoderSettingsIsSet() const
{
    return encoderSettingsIsSet_;
}

void CreateOttChannelInfoReq::unsetencoderSettings()
{
    encoderSettingsIsSet_ = false;
}

CreateOttChannelInfoReq_record_settings CreateOttChannelInfoReq::getRecordSettings() const
{
    return recordSettings_;
}

void CreateOttChannelInfoReq::setRecordSettings(const CreateOttChannelInfoReq_record_settings& value)
{
    recordSettings_ = value;
    recordSettingsIsSet_ = true;
}

bool CreateOttChannelInfoReq::recordSettingsIsSet() const
{
    return recordSettingsIsSet_;
}

void CreateOttChannelInfoReq::unsetrecordSettings()
{
    recordSettingsIsSet_ = false;
}

std::vector<EndpointItem>& CreateOttChannelInfoReq::getEndpoints()
{
    return endpoints_;
}

void CreateOttChannelInfoReq::setEndpoints(const std::vector<EndpointItem>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool CreateOttChannelInfoReq::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void CreateOttChannelInfoReq::unsetendpoints()
{
    endpointsIsSet_ = false;
}

EncoderSettingsExpand CreateOttChannelInfoReq::getEncoderSettingsExpand() const
{
    return encoderSettingsExpand_;
}

void CreateOttChannelInfoReq::setEncoderSettingsExpand(const EncoderSettingsExpand& value)
{
    encoderSettingsExpand_ = value;
    encoderSettingsExpandIsSet_ = true;
}

bool CreateOttChannelInfoReq::encoderSettingsExpandIsSet() const
{
    return encoderSettingsExpandIsSet_;
}

void CreateOttChannelInfoReq::unsetencoderSettingsExpand()
{
    encoderSettingsExpandIsSet_ = false;
}

}
}
}
}
}


