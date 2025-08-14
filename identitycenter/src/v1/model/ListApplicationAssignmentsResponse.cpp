

#include "huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationAssignmentsResponse::ListApplicationAssignmentsResponse()
{
    applicationAssignmentsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationAssignmentsResponse::~ListApplicationAssignmentsResponse() = default;

void ListApplicationAssignmentsResponse::validate()
{
}

web::json::value ListApplicationAssignmentsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationAssignmentsIsSet_) {
        val[utility::conversions::to_string_t("application_assignments")] = ModelBase::toJson(applicationAssignments_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListApplicationAssignmentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_assignments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_assignments"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationAssignmentDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationAssignments(refVal);
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


std::vector<ApplicationAssignmentDto>& ListApplicationAssignmentsResponse::getApplicationAssignments()
{
    return applicationAssignments_;
}

void ListApplicationAssignmentsResponse::setApplicationAssignments(const std::vector<ApplicationAssignmentDto>& value)
{
    applicationAssignments_ = value;
    applicationAssignmentsIsSet_ = true;
}

bool ListApplicationAssignmentsResponse::applicationAssignmentsIsSet() const
{
    return applicationAssignmentsIsSet_;
}

void ListApplicationAssignmentsResponse::unsetapplicationAssignments()
{
    applicationAssignmentsIsSet_ = false;
}

PageInfoDto ListApplicationAssignmentsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationAssignmentsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationAssignmentsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationAssignmentsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


