

#include "huaweicloud/cce/v3/model/UpgradeTaskResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeTaskResponseBody::UpgradeTaskResponseBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

UpgradeTaskResponseBody::~UpgradeTaskResponseBody() = default;

void UpgradeTaskResponseBody::validate()
{
}

web::json::value UpgradeTaskResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpgradeTaskResponseBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeTaskStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpgradeTaskResponseBody::getApiVersion() const
{
    return apiVersion_;
}

void UpgradeTaskResponseBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool UpgradeTaskResponseBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void UpgradeTaskResponseBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string UpgradeTaskResponseBody::getKind() const
{
    return kind_;
}

void UpgradeTaskResponseBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool UpgradeTaskResponseBody::kindIsSet() const
{
    return kindIsSet_;
}

void UpgradeTaskResponseBody::unsetkind()
{
    kindIsSet_ = false;
}

UpgradeTaskMetadata UpgradeTaskResponseBody::getMetadata() const
{
    return metadata_;
}

void UpgradeTaskResponseBody::setMetadata(const UpgradeTaskMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpgradeTaskResponseBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpgradeTaskResponseBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

UpgradeTaskSpec UpgradeTaskResponseBody::getSpec() const
{
    return spec_;
}

void UpgradeTaskResponseBody::setSpec(const UpgradeTaskSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool UpgradeTaskResponseBody::specIsSet() const
{
    return specIsSet_;
}

void UpgradeTaskResponseBody::unsetspec()
{
    specIsSet_ = false;
}

UpgradeTaskStatus UpgradeTaskResponseBody::getStatus() const
{
    return status_;
}

void UpgradeTaskResponseBody::setStatus(const UpgradeTaskStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpgradeTaskResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpgradeTaskResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


