

#include "huaweicloud/identitycenter/v1/model/ListProfilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListProfilesResponse::ListProfilesResponse()
{
    applicationProfilesIsSet_ = false;
}

ListProfilesResponse::~ListProfilesResponse() = default;

void ListProfilesResponse::validate()
{
}

web::json::value ListProfilesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationProfilesIsSet_) {
        val[utility::conversions::to_string_t("application_profiles")] = ModelBase::toJson(applicationProfiles_);
    }

    return val;
}
bool ListProfilesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_profiles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_profiles"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationProfileDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProfiles(refVal);
        }
    }
    return ok;
}


std::vector<ApplicationProfileDto>& ListProfilesResponse::getApplicationProfiles()
{
    return applicationProfiles_;
}

void ListProfilesResponse::setApplicationProfiles(const std::vector<ApplicationProfileDto>& value)
{
    applicationProfiles_ = value;
    applicationProfilesIsSet_ = true;
}

bool ListProfilesResponse::applicationProfilesIsSet() const
{
    return applicationProfilesIsSet_;
}

void ListProfilesResponse::unsetapplicationProfiles()
{
    applicationProfilesIsSet_ = false;
}

}
}
}
}
}


