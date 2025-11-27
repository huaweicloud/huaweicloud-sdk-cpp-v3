

#include "huaweicloud/rds/v3/model/ModifyDbAgentJobRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyDbAgentJobRequestBody::ModifyDbAgentJobRequestBody()
{
    profileId_ = "";
    profileIdIsSet_ = false;
}

ModifyDbAgentJobRequestBody::~ModifyDbAgentJobRequestBody() = default;

void ModifyDbAgentJobRequestBody::validate()
{
}

web::json::value ModifyDbAgentJobRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }

    return val;
}
bool ModifyDbAgentJobRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
    return ok;
}


std::string ModifyDbAgentJobRequestBody::getProfileId() const
{
    return profileId_;
}

void ModifyDbAgentJobRequestBody::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ModifyDbAgentJobRequestBody::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ModifyDbAgentJobRequestBody::unsetprofileId()
{
    profileIdIsSet_ = false;
}

}
}
}
}
}


