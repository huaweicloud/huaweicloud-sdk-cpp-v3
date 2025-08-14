

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceDisplayDataReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceDisplayDataReqBody::UpdateApplicationInstanceDisplayDataReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

UpdateApplicationInstanceDisplayDataReqBody::~UpdateApplicationInstanceDisplayDataReqBody() = default;

void UpdateApplicationInstanceDisplayDataReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceDisplayDataReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}
bool UpdateApplicationInstanceDisplayDataReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}


std::string UpdateApplicationInstanceDisplayDataReqBody::getDescription() const
{
    return description_;
}

void UpdateApplicationInstanceDisplayDataReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateApplicationInstanceDisplayDataReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateApplicationInstanceDisplayDataReqBody::getDisplayName() const
{
    return displayName_;
}

void UpdateApplicationInstanceDisplayDataReqBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool UpdateApplicationInstanceDisplayDataReqBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void UpdateApplicationInstanceDisplayDataReqBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


