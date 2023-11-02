

#include "huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyInstanceConfigurationsRequestBody::CopyInstanceConfigurationsRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CopyInstanceConfigurationsRequestBody::~CopyInstanceConfigurationsRequestBody() = default;

void CopyInstanceConfigurationsRequestBody::validate()
{
}

web::json::value CopyInstanceConfigurationsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool CopyInstanceConfigurationsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string CopyInstanceConfigurationsRequestBody::getName() const
{
    return name_;
}

void CopyInstanceConfigurationsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyInstanceConfigurationsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CopyInstanceConfigurationsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyInstanceConfigurationsRequestBody::getDescription() const
{
    return description_;
}

void CopyInstanceConfigurationsRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyInstanceConfigurationsRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyInstanceConfigurationsRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


