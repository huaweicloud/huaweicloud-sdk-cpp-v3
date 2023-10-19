

#include "huaweicloud/gaussdb/v3/model/CopyConfigurationsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CopyConfigurationsRequestBody::CopyConfigurationsRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

CopyConfigurationsRequestBody::~CopyConfigurationsRequestBody() = default;

void CopyConfigurationsRequestBody::validate()
{
}

web::json::value CopyConfigurationsRequestBody::toJson() const
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
bool CopyConfigurationsRequestBody::fromJson(const web::json::value& val)
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


std::string CopyConfigurationsRequestBody::getName() const
{
    return name_;
}

void CopyConfigurationsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CopyConfigurationsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CopyConfigurationsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CopyConfigurationsRequestBody::getDescription() const
{
    return description_;
}

void CopyConfigurationsRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CopyConfigurationsRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CopyConfigurationsRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


