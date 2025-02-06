

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupReqBody::CreateGroupReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

CreateGroupReqBody::~CreateGroupReqBody() = default;

void CreateGroupReqBody::validate()
{
}

web::json::value CreateGroupReqBody::toJson() const
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
bool CreateGroupReqBody::fromJson(const web::json::value& val)
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


std::string CreateGroupReqBody::getDescription() const
{
    return description_;
}

void CreateGroupReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGroupReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGroupReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateGroupReqBody::getDisplayName() const
{
    return displayName_;
}

void CreateGroupReqBody::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool CreateGroupReqBody::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void CreateGroupReqBody::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


