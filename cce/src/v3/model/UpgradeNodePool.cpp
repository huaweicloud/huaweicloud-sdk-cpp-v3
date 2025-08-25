

#include "huaweicloud/cce/v3/model/UpgradeNodePool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeNodePool::UpgradeNodePool()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

UpgradeNodePool::~UpgradeNodePool() = default;

void UpgradeNodePool::validate()
{
}

web::json::value UpgradeNodePool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool UpgradeNodePool::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NodePoolMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodePoolUpgradeSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string UpgradeNodePool::getKind() const
{
    return kind_;
}

void UpgradeNodePool::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradeNodePool::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradeNodePool::unsetkind()
{
    kindIsSet_ = false;
}

std::string UpgradeNodePool::getApiVersion() const
{
    return apiVersion_;
}

void UpgradeNodePool::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradeNodePool::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradeNodePool::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

NodePoolMetadata UpgradeNodePool::getMetadata() const
{
    return metadata_;
}

void UpgradeNodePool::setMetadata(const NodePoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeNodePool::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeNodePool::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolUpgradeSpec UpgradeNodePool::getSpec() const
{
    return spec_;
}

void UpgradeNodePool::setSpec(const NodePoolUpgradeSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeNodePool::specIsSet() const
{
    return specIsSet_;
}

void UpgradeNodePool::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


