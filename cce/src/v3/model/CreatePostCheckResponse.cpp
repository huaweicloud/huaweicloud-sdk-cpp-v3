

#include "huaweicloud/cce/v3/model/CreatePostCheckResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePostCheckResponse::CreatePostCheckResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

CreatePostCheckResponse::~CreatePostCheckResponse() = default;

void CreatePostCheckResponse::validate()
{
}

web::json::value CreatePostCheckResponse::toJson() const
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
bool CreatePostCheckResponse::fromJson(const web::json::value& val)
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
            PostcheckCluserResponseMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PostcheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            PostcheckClusterResponseBody_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreatePostCheckResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreatePostCheckResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePostCheckResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePostCheckResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePostCheckResponse::getKind() const
{
    return kind_;
}

void CreatePostCheckResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePostCheckResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePostCheckResponse::unsetkind()
{
    kindIsSet_ = false;
}

PostcheckCluserResponseMetadata CreatePostCheckResponse::getMetadata() const
{
    return metadata_;
}

void CreatePostCheckResponse::setMetadata(const PostcheckCluserResponseMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePostCheckResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePostCheckResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

PostcheckSpec CreatePostCheckResponse::getSpec() const
{
    return spec_;
}

void CreatePostCheckResponse::setSpec(const PostcheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePostCheckResponse::specIsSet() const
{
    return specIsSet_;
}

void CreatePostCheckResponse::unsetspec()
{
    specIsSet_ = false;
}

PostcheckClusterResponseBody_status CreatePostCheckResponse::getStatus() const
{
    return status_;
}

void CreatePostCheckResponse::setStatus(const PostcheckClusterResponseBody_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreatePostCheckResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreatePostCheckResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


