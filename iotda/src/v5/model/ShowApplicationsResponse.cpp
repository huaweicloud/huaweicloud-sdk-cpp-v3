

#include "huaweicloud/iotda/v5/model/ShowApplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowApplicationsResponse::ShowApplicationsResponse()
{
    applicationsIsSet_ = false;
}

ShowApplicationsResponse::~ShowApplicationsResponse() = default;

void ShowApplicationsResponse::validate()
{
}

web::json::value ShowApplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationsIsSet_) {
        val[utility::conversions::to_string_t("applications")] = ModelBase::toJson(applications_);
    }

    return val;
}
bool ShowApplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplications(refVal);
        }
    }
    return ok;
}


std::vector<ApplicationDTO>& ShowApplicationsResponse::getApplications()
{
    return applications_;
}

void ShowApplicationsResponse::setApplications(const std::vector<ApplicationDTO>& value)
{
    applications_ = value;
    applicationsIsSet_ = true;
}

bool ShowApplicationsResponse::applicationsIsSet() const
{
    return applicationsIsSet_;
}

void ShowApplicationsResponse::unsetapplications()
{
    applicationsIsSet_ = false;
}

}
}
}
}
}


