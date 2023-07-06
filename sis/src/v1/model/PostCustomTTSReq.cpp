

#include "huaweicloud/sis/v1/model/PostCustomTTSReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostCustomTTSReq::PostCustomTTSReq()
{
    text_ = "";
    textIsSet_ = false;
    configIsSet_ = false;
}

PostCustomTTSReq::~PostCustomTTSReq() = default;

void PostCustomTTSReq::validate()
{
}

web::json::value PostCustomTTSReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }

    return val;
}

bool PostCustomTTSReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            TtsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    return ok;
}

std::string PostCustomTTSReq::getText() const
{
    return text_;
}

void PostCustomTTSReq::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool PostCustomTTSReq::textIsSet() const
{
    return textIsSet_;
}

void PostCustomTTSReq::unsettext()
{
    textIsSet_ = false;
}

TtsConfig PostCustomTTSReq::getConfig() const
{
    return config_;
}

void PostCustomTTSReq::setConfig(const TtsConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool PostCustomTTSReq::configIsSet() const
{
    return configIsSet_;
}

void PostCustomTTSReq::unsetconfig()
{
    configIsSet_ = false;
}

}
}
}
}
}


