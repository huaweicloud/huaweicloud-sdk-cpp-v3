

#include "huaweicloud/sis/v1/model/PostShortAudioReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostShortAudioReq::PostShortAudioReq()
{
    configIsSet_ = false;
    data_ = "";
    dataIsSet_ = false;
}

PostShortAudioReq::~PostShortAudioReq() = default;

void PostShortAudioReq::validate()
{
}

web::json::value PostShortAudioReq::toJson() const
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

bool PostShortAudioReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            Config refVal;
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


Config PostShortAudioReq::getConfig() const
{
    return config_;
}

void PostShortAudioReq::setConfig(const Config& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool PostShortAudioReq::configIsSet() const
{
    return configIsSet_;
}

void PostShortAudioReq::unsetconfig()
{
    configIsSet_ = false;
}

std::string PostShortAudioReq::getData() const
{
    return data_;
}

void PostShortAudioReq::setData(const std::string& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool PostShortAudioReq::dataIsSet() const
{
    return dataIsSet_;
}

void PostShortAudioReq::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


