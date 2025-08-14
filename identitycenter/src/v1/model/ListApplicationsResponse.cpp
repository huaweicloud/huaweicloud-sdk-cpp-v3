

#include "huaweicloud/identitycenter/v1/model/ListApplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationsResponse::ListApplicationsResponse()
{
    applicationsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationsResponse::~ListApplicationsResponse() = default;

void ListApplicationsResponse::validate()
{
}

web::json::value ListApplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationsIsSet_) {
        val[utility::conversions::to_string_t("applications")] = ModelBase::toJson(applications_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListApplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplications(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<ApplicationDto>& ListApplicationsResponse::getApplications()
{
    return applications_;
}

void ListApplicationsResponse::setApplications(const std::vector<ApplicationDto>& value)
{
    applications_ = value;
    applicationsIsSet_ = true;
}

bool ListApplicationsResponse::applicationsIsSet() const
{
    return applicationsIsSet_;
}

void ListApplicationsResponse::unsetapplications()
{
    applicationsIsSet_ = false;
}

PageInfoDto ListApplicationsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


