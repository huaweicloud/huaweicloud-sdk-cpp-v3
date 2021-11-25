

#include "huaweicloud/sis/v1/model/PostTranscriberJobs.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostTranscriberJobs::PostTranscriberJobs()
{
    configIsSet_ = false;
    dataUrl_ = "";
    dataUrlIsSet_ = false;
}

PostTranscriberJobs::~PostTranscriberJobs() = default;

void PostTranscriberJobs::validate()
{
}

web::json::value PostTranscriberJobs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(dataUrlIsSet_) {
        val[utility::conversions::to_string_t("data_url")] = ModelBase::toJson(dataUrl_);
    }

    return val;
}

bool PostTranscriberJobs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            TranscriberConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataUrl(refVal);
        }
    }
    return ok;
}


TranscriberConfig PostTranscriberJobs::getConfig() const
{
    return config_;
}

void PostTranscriberJobs::setConfig(const TranscriberConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool PostTranscriberJobs::configIsSet() const
{
    return configIsSet_;
}

void PostTranscriberJobs::unsetconfig()
{
    configIsSet_ = false;
}

std::string PostTranscriberJobs::getDataUrl() const
{
    return dataUrl_;
}

void PostTranscriberJobs::setDataUrl(const std::string& value)
{
    dataUrl_ = value;
    dataUrlIsSet_ = true;
}

bool PostTranscriberJobs::dataUrlIsSet() const
{
    return dataUrlIsSet_;
}

void PostTranscriberJobs::unsetdataUrl()
{
    dataUrlIsSet_ = false;
}

}
}
}
}
}


