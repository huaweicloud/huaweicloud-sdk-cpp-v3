

#include "huaweicloud/sis/v1/model/RegisterVoiceReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RegisterVoiceReq::RegisterVoiceReq()
{
    configIsSet_ = false;
    data_ = "";
    dataIsSet_ = false;
}

RegisterVoiceReq::~RegisterVoiceReq() = default;

void RegisterVoiceReq::validate()
{
}

web::json::value RegisterVoiceReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool RegisterVoiceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            RegisterVoiceReq_config refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


RegisterVoiceReq_config RegisterVoiceReq::getConfig() const
{
    return config_;
}

void RegisterVoiceReq::setConfig(const RegisterVoiceReq_config& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool RegisterVoiceReq::configIsSet() const
{
    return configIsSet_;
}

void RegisterVoiceReq::unsetconfig()
{
    configIsSet_ = false;
}

std::string RegisterVoiceReq::getData() const
{
    return data_;
}

void RegisterVoiceReq::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool RegisterVoiceReq::dataIsSet() const
{
    return dataIsSet_;
}

void RegisterVoiceReq::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


