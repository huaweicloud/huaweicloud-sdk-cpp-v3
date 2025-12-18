

#include "huaweicloud/cce/v3/model/GetAutopilotOneJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAutopilotOneJobResponse::GetAutopilotOneJobResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

GetAutopilotOneJobResponse::~GetAutopilotOneJobResponse() = default;

void GetAutopilotOneJobResponse::validate()
{
}

web::json::value GetAutopilotOneJobResponse::toJson() const
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
bool GetAutopilotOneJobResponse::fromJson(const web::json::value& val)
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


std::string GetAutopilotOneJobResponse::getKind() const
{
    return kind_;
}

void GetAutopilotOneJobResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool GetAutopilotOneJobResponse::kindIsSet() const
{
    return kindIsSet_;
}

void GetAutopilotOneJobResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string GetAutopilotOneJobResponse::getApiVersion() const
{
    return apiVersion_;
}

void GetAutopilotOneJobResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool GetAutopilotOneJobResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void GetAutopilotOneJobResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

V2JobTypeObject GetAutopilotOneJobResponse::getMetadata() const
{
    return metadata_;
}

void GetAutopilotOneJobResponse::setMetadata(const V2JobTypeObject& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool GetAutopilotOneJobResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void GetAutopilotOneJobResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

V2JobSpec GetAutopilotOneJobResponse::getSpec() const
{
    return spec_;
}

void GetAutopilotOneJobResponse::setSpec(const V2JobSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool GetAutopilotOneJobResponse::specIsSet() const
{
    return specIsSet_;
}

void GetAutopilotOneJobResponse::unsetspec()
{
    specIsSet_ = false;
}

V2JobStatus GetAutopilotOneJobResponse::getStatus() const
{
    return status_;
}

void GetAutopilotOneJobResponse::setStatus(const V2JobStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GetAutopilotOneJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GetAutopilotOneJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


