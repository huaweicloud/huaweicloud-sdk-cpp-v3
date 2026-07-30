

#include "huaweicloud/modelarts/v1/model/CreatePoolRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreatePoolRequestBody::CreatePoolRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

CreatePoolRequestBody::~CreatePoolRequestBody() = default;

void CreatePoolRequestBody::validate()
{
}

web::json::value CreatePoolRequestBody::toJson() const
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

    return val;
}
bool CreatePoolRequestBody::fromJson(const web::json::value& val)
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
            PoolMetadataCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PoolSpecCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string CreatePoolRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void CreatePoolRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePoolRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePoolRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreatePoolRequestBody::getKind() const
{
    return kind_;
}

void CreatePoolRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePoolRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePoolRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

PoolMetadataCreation CreatePoolRequestBody::getMetadata() const
{
    return metadata_;
}

void CreatePoolRequestBody::setMetadata(const PoolMetadataCreation& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePoolRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePoolRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

PoolSpecCreation CreatePoolRequestBody::getSpec() const
{
    return spec_;
}

void CreatePoolRequestBody::setSpec(const PoolSpecCreation& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePoolRequestBody::specIsSet() const
{
    return specIsSet_;
}

void CreatePoolRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


