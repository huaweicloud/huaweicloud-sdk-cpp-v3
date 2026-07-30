

#include "huaweicloud/modelarts/v1/model/CreatePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePoolResponse::CreatePoolResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreatePoolResponse::~CreatePoolResponse() = default;

void CreatePoolResponse::validate()
{
}

web::json::value CreatePoolResponse::toJson() const
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
bool CreatePoolResponse::fromJson(const web::json::value& val)
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


std::string CreatePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreatePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePoolResponse::getKind() const
{
    return kind_;
}

void CreatePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

PoolMetadata CreatePoolResponse::getMetadata() const
{
    return metadata_;
}

void CreatePoolResponse::setMetadata(const PoolMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecModel CreatePoolResponse::getSpec() const
{
    return spec_;
}

void CreatePoolResponse::setSpec(const PoolSpecModel& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void CreatePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

PoolStatus CreatePoolResponse::getStatus() const
{
    return status_;
}

void CreatePoolResponse::setStatus(const PoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreatePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreatePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


