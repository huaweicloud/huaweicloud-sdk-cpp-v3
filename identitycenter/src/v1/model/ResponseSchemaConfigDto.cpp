

#include "huaweicloud/identitycenter/v1/model/ResponseSchemaConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResponseSchemaConfigDto::ResponseSchemaConfigDto()
{
    propertiesIsSet_ = false;
    subjectIsSet_ = false;
    supportedNameIdFormatsIsSet_ = false;
}

ResponseSchemaConfigDto::~ResponseSchemaConfigDto() = default;

void ResponseSchemaConfigDto::validate()
{
}

web::json::value ResponseSchemaConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(supportedNameIdFormatsIsSet_) {
        val[utility::conversions::to_string_t("supported_name_id_formats")] = ModelBase::toJson(supportedNameIdFormats_);
    }

    return val;
}
bool ResponseSchemaConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ResponseSchemaPropertiesDetailsDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            ResponseSchemaSubjectDetailsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supported_name_id_formats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supported_name_id_formats"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportedNameIdFormats(refVal);
        }
    }
    return ok;
}


std::map<std::string, ResponseSchemaPropertiesDetailsDto>& ResponseSchemaConfigDto::getProperties()
{
    return properties_;
}

void ResponseSchemaConfigDto::setProperties(const std::map<std::string, ResponseSchemaPropertiesDetailsDto>& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool ResponseSchemaConfigDto::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void ResponseSchemaConfigDto::unsetproperties()
{
    propertiesIsSet_ = false;
}

ResponseSchemaSubjectDetailsDto ResponseSchemaConfigDto::getSubject() const
{
    return subject_;
}

void ResponseSchemaConfigDto::setSubject(const ResponseSchemaSubjectDetailsDto& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ResponseSchemaConfigDto::subjectIsSet() const
{
    return subjectIsSet_;
}

void ResponseSchemaConfigDto::unsetsubject()
{
    subjectIsSet_ = false;
}

std::vector<std::string>& ResponseSchemaConfigDto::getSupportedNameIdFormats()
{
    return supportedNameIdFormats_;
}

void ResponseSchemaConfigDto::setSupportedNameIdFormats(const std::vector<std::string>& value)
{
    supportedNameIdFormats_ = value;
    supportedNameIdFormatsIsSet_ = true;
}

bool ResponseSchemaConfigDto::supportedNameIdFormatsIsSet() const
{
    return supportedNameIdFormatsIsSet_;
}

void ResponseSchemaConfigDto::unsetsupportedNameIdFormats()
{
    supportedNameIdFormatsIsSet_ = false;
}

}
}
}
}
}


