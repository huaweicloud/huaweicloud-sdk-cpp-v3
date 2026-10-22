

#include "huaweicloud/modelarts/v1/model/JobUpdateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




JobUpdateRequestBody::JobUpdateRequestBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    specIsSet_ = false;
    endpointsIsSet_ = false;
    metadataIsSet_ = false;
}

JobUpdateRequestBody::~JobUpdateRequestBody() = default;

void JobUpdateRequestBody::validate()
{
}

web::json::value JobUpdateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool JobUpdateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            JobUpdateRequestBody_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            JobEndpointsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            JobUpdateRequestBody_metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string JobUpdateRequestBody::getDescription() const
{
    return description_;
}

void JobUpdateRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool JobUpdateRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void JobUpdateRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

JobUpdateRequestBody_spec JobUpdateRequestBody::getSpec() const
{
    return spec_;
}

void JobUpdateRequestBody::setSpec(const JobUpdateRequestBody_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool JobUpdateRequestBody::specIsSet() const
{
    return specIsSet_;
}

void JobUpdateRequestBody::unsetspec()
{
    specIsSet_ = false;
}

JobEndpointsReq JobUpdateRequestBody::getEndpoints() const
{
    return endpoints_;
}

void JobUpdateRequestBody::setEndpoints(const JobEndpointsReq& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool JobUpdateRequestBody::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void JobUpdateRequestBody::unsetendpoints()
{
    endpointsIsSet_ = false;
}

JobUpdateRequestBody_metadata JobUpdateRequestBody::getMetadata() const
{
    return metadata_;
}

void JobUpdateRequestBody::setMetadata(const JobUpdateRequestBody_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool JobUpdateRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void JobUpdateRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


