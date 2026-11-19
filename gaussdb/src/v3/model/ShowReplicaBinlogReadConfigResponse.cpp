

#include "huaweicloud/gaussdb/v3/model/ShowReplicaBinlogReadConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowReplicaBinlogReadConfigResponse::ShowReplicaBinlogReadConfigResponse()
{
    supported_ = false;
    supportedIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

ShowReplicaBinlogReadConfigResponse::~ShowReplicaBinlogReadConfigResponse() = default;

void ShowReplicaBinlogReadConfigResponse::validate()
{
}

web::json::value ShowReplicaBinlogReadConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportedIsSet_) {
        val[utility::conversions::to_string_t("supported")] = ModelBase::toJson(supported_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ShowReplicaBinlogReadConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("supported"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupported(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


bool ShowReplicaBinlogReadConfigResponse::isSupported() const
{
    return supported_;
}

void ShowReplicaBinlogReadConfigResponse::setSupported(bool value)
{
    supported_ = value;
    supportedIsSet_ = true;
}

bool ShowReplicaBinlogReadConfigResponse::supportedIsSet() const
{
    return supportedIsSet_;
}

void ShowReplicaBinlogReadConfigResponse::unsetsupported()
{
    supportedIsSet_ = false;
}

bool ShowReplicaBinlogReadConfigResponse::isEnabled() const
{
    return enabled_;
}

void ShowReplicaBinlogReadConfigResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowReplicaBinlogReadConfigResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowReplicaBinlogReadConfigResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


