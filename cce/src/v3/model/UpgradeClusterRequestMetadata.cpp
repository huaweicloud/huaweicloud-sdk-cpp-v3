

#include "huaweicloud/cce/v3/model/UpgradeClusterRequestMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeClusterRequestMetadata::UpgradeClusterRequestMetadata()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
}

UpgradeClusterRequestMetadata::~UpgradeClusterRequestMetadata() = default;

void UpgradeClusterRequestMetadata::validate()
{
}

web::json::value UpgradeClusterRequestMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }

    return val;
}
bool UpgradeClusterRequestMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    return ok;
}


std::string UpgradeClusterRequestMetadata::getApiVersion() const
{
    return apiVersion_;
}

void UpgradeClusterRequestMetadata::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradeClusterRequestMetadata::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradeClusterRequestMetadata::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string UpgradeClusterRequestMetadata::getKind() const
{
    return kind_;
}

void UpgradeClusterRequestMetadata::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradeClusterRequestMetadata::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradeClusterRequestMetadata::unsetkind()
{
    kindIsSet_ = false;
}

}
}
}
}
}


