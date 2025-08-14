

#include "huaweicloud/identitycenter/v1/model/ResponseSchemaSubjectDetailsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResponseSchemaSubjectDetailsDto::ResponseSchemaSubjectDetailsDto()
{
    nameIdFormat_ = "";
    nameIdFormatIsSet_ = false;
    include_ = "";
    includeIsSet_ = false;
}

ResponseSchemaSubjectDetailsDto::~ResponseSchemaSubjectDetailsDto() = default;

void ResponseSchemaSubjectDetailsDto::validate()
{
}

web::json::value ResponseSchemaSubjectDetailsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIdFormatIsSet_) {
        val[utility::conversions::to_string_t("name_id_format")] = ModelBase::toJson(nameIdFormat_);
    }
    if(includeIsSet_) {
        val[utility::conversions::to_string_t("include")] = ModelBase::toJson(include_);
    }

    return val;
}
bool ResponseSchemaSubjectDetailsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name_id_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_id_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameIdFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInclude(refVal);
        }
    }
    return ok;
}


std::string ResponseSchemaSubjectDetailsDto::getNameIdFormat() const
{
    return nameIdFormat_;
}

void ResponseSchemaSubjectDetailsDto::setNameIdFormat(const std::string& value)
{
    nameIdFormat_ = value;
    nameIdFormatIsSet_ = true;
}

bool ResponseSchemaSubjectDetailsDto::nameIdFormatIsSet() const
{
    return nameIdFormatIsSet_;
}

void ResponseSchemaSubjectDetailsDto::unsetnameIdFormat()
{
    nameIdFormatIsSet_ = false;
}

std::string ResponseSchemaSubjectDetailsDto::getInclude() const
{
    return include_;
}

void ResponseSchemaSubjectDetailsDto::setInclude(const std::string& value)
{
    include_ = value;
    includeIsSet_ = true;
}

bool ResponseSchemaSubjectDetailsDto::includeIsSet() const
{
    return includeIsSet_;
}

void ResponseSchemaSubjectDetailsDto::unsetinclude()
{
    includeIsSet_ = false;
}

}
}
}
}
}


