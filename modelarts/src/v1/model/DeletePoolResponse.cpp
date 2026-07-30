

#include "huaweicloud/modelarts/v1/model/DeletePoolResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeletePoolResponse::DeletePoolResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

DeletePoolResponse::~DeletePoolResponse() = default;

void DeletePoolResponse::validate()
{
}

web::json::value DeletePoolResponse::toJson() const
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
bool DeletePoolResponse::fromJson(const web::json::value& val)
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
            PoolMetadataDeletion refVal;
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


std::string DeletePoolResponse::getApiVersion() const
{
    return apiVersion_;
}

void DeletePoolResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool DeletePoolResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void DeletePoolResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string DeletePoolResponse::getKind() const
{
    return kind_;
}

void DeletePoolResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool DeletePoolResponse::kindIsSet() const
{
    return kindIsSet_;
}

void DeletePoolResponse::unsetkind()
{
    kindIsSet_ = false;
}

PoolMetadataDeletion DeletePoolResponse::getMetadata() const
{
    return metadata_;
}

void DeletePoolResponse::setMetadata(const PoolMetadataDeletion& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool DeletePoolResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void DeletePoolResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecModel DeletePoolResponse::getSpec() const
{
    return spec_;
}

void DeletePoolResponse::setSpec(const PoolSpecModel& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool DeletePoolResponse::specIsSet() const
{
    return specIsSet_;
}

void DeletePoolResponse::unsetspec()
{
    specIsSet_ = false;
}

PoolStatus DeletePoolResponse::getStatus() const
{
    return status_;
}

void DeletePoolResponse::setStatus(const PoolStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeletePoolResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeletePoolResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


