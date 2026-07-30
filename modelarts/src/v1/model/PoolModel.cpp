

#include "huaweicloud/modelarts/v1/model/PoolModel.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolModel::PoolModel()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

PoolModel::~PoolModel() = default;

void PoolModel::validate()
{
}

web::json::value PoolModel::toJson() const
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
bool PoolModel::fromJson(const web::json::value& val)
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
            PoolMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PoolSpecModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PoolStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string PoolModel::getApiVersion() const
{
    return apiVersion_;
}

void PoolModel::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PoolModel::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PoolModel::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PoolModel::getKind() const
{
    return kind_;
}

void PoolModel::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PoolModel::kindIsSet() const
{
    return kindIsSet_;
}

void PoolModel::unsetkind()
{
    kindIsSet_ = false;
}

PoolMetadata PoolModel::getMetadata() const
{
    return metadata_;
}

void PoolModel::setMetadata(const PoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PoolModel::metadataIsSet() const
{
    return metadataIsSet_;
}

void PoolModel::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecModel PoolModel::getSpec() const
{
    return spec_;
}

void PoolModel::setSpec(const PoolSpecModel& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PoolModel::specIsSet() const
{
    return specIsSet_;
}

void PoolModel::unsetspec()
{
    specIsSet_ = false;
}

PoolStatus PoolModel::getStatus() const
{
    return status_;
}

void PoolModel::setStatus(const PoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PoolModel::statusIsSet() const
{
    return statusIsSet_;
}

void PoolModel::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


