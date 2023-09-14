

#include "huaweicloud/smn/v2/model/ListApplicationsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationsResponse::ListApplicationsResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    applicationCount_ = 0;
    applicationCountIsSet_ = false;
    applicationsIsSet_ = false;
}

ListApplicationsResponse::~ListApplicationsResponse() = default;

void ListApplicationsResponse::validate()
{
}

web::json::value ListApplicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(applicationCountIsSet_) {
        val[utility::conversions::to_string_t("application_count")] = ModelBase::toJson(applicationCount_);
    }
    if(applicationsIsSet_) {
        val[utility::conversions::to_string_t("applications")] = ModelBase::toJson(applications_);
    }

    return val;
}

bool ListApplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplications(refVal);
        }
    }
    return ok;
}

std::string ListApplicationsResponse::getRequestId() const
{
    return requestId_;
}

void ListApplicationsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListApplicationsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListApplicationsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

int32_t ListApplicationsResponse::getApplicationCount() const
{
    return applicationCount_;
}

void ListApplicationsResponse::setApplicationCount(int32_t value)
{
    applicationCount_ = value;
    applicationCountIsSet_ = true;
}

bool ListApplicationsResponse::applicationCountIsSet() const
{
    return applicationCountIsSet_;
}

void ListApplicationsResponse::unsetapplicationCount()
{
    applicationCountIsSet_ = false;
}

std::vector<ApplicationItem>& ListApplicationsResponse::getApplications()
{
    return applications_;
}

void ListApplicationsResponse::setApplications(const std::vector<ApplicationItem>& value)
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

}
}
}
}
}


