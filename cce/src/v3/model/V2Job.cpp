

#include "huaweicloud/cce/v3/model/V2Job.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




V2Job::V2Job()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

V2Job::~V2Job() = default;

void V2Job::validate()
{
}

web::json::value V2Job::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool V2Job::fromJson(const web::json::value& val)
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
            V2JobTypeObject refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            V2JobSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            V2JobStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string V2Job::getKind() const
{
    return kind_;
}

void V2Job::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool V2Job::kindIsSet() const
{
    return kindIsSet_;
}

void V2Job::unsetkind()
{
    kindIsSet_ = false;
}

std::string V2Job::getApiVersion() const
{
    return apiVersion_;
}

void V2Job::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool V2Job::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void V2Job::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

V2JobTypeObject V2Job::getMetadata() const
{
    return metadata_;
}

void V2Job::setMetadata(const V2JobTypeObject& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool V2Job::metadataIsSet() const
{
    return metadataIsSet_;
}

void V2Job::unsetmetadata()
{
    metadataIsSet_ = false;
}

V2JobSpec V2Job::getSpec() const
{
    return spec_;
}

void V2Job::setSpec(const V2JobSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool V2Job::specIsSet() const
{
    return specIsSet_;
}

void V2Job::unsetspec()
{
    specIsSet_ = false;
}

V2JobStatus V2Job::getStatus() const
{
    return status_;
}

void V2Job::setStatus(const V2JobStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool V2Job::statusIsSet() const
{
    return statusIsSet_;
}

void V2Job::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


