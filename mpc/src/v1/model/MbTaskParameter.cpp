

#include "huaweicloud/mpc/v1/model/MbTaskParameter.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MbTaskParameter::MbTaskParameter()
{
    statusDescription_ = "";
    statusDescriptionIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
    metadataIsSet_ = false;
}

MbTaskParameter::~MbTaskParameter() = default;

void MbTaskParameter::validate()
{
}

web::json::value MbTaskParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusDescriptionIsSet_) {
        val[utility::conversions::to_string_t("status_description")] = ModelBase::toJson(statusDescription_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}

bool MbTaskParameter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilename(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            MetaData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string MbTaskParameter::getStatusDescription() const
{
    return statusDescription_;
}

void MbTaskParameter::setStatusDescription(const std::string& value)
{
    statusDescription_ = value;
    statusDescriptionIsSet_ = true;
}

bool MbTaskParameter::statusDescriptionIsSet() const
{
    return statusDescriptionIsSet_;
}

void MbTaskParameter::unsetstatusDescription()
{
    statusDescriptionIsSet_ = false;
}

std::string MbTaskParameter::getOutputFilename() const
{
    return outputFilename_;
}

void MbTaskParameter::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool MbTaskParameter::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void MbTaskParameter::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

MetaData MbTaskParameter::getMetadata() const
{
    return metadata_;
}

void MbTaskParameter::setMetadata(const MetaData& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool MbTaskParameter::metadataIsSet() const
{
    return metadataIsSet_;
}

void MbTaskParameter::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


