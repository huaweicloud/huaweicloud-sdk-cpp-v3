

#include "huaweicloud/identitycenter/v1/model/ListApplicationAssignmentsForPrincipalResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationAssignmentsForPrincipalResponse::ListApplicationAssignmentsForPrincipalResponse()
{
    applicationAssignmentsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationAssignmentsForPrincipalResponse::~ListApplicationAssignmentsForPrincipalResponse() = default;

void ListApplicationAssignmentsForPrincipalResponse::validate()
{
}

web::json::value ListApplicationAssignmentsForPrincipalResponse::toJson() const
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
bool ListApplicationAssignmentsForPrincipalResponse::fromJson(const web::json::value& val)
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


std::vector<ApplicationAssignmentDto>& ListApplicationAssignmentsForPrincipalResponse::getApplicationAssignments()
{
    return applicationAssignments_;
}

void ListApplicationAssignmentsForPrincipalResponse::setApplicationAssignments(const std::vector<ApplicationAssignmentDto>& value)
{
    applicationAssignments_ = value;
    applicationAssignmentsIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalResponse::applicationAssignmentsIsSet() const
{
    return applicationAssignmentsIsSet_;
}

void ListApplicationAssignmentsForPrincipalResponse::unsetapplicationAssignments()
{
    applicationAssignmentsIsSet_ = false;
}

PageInfoDto ListApplicationAssignmentsForPrincipalResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationAssignmentsForPrincipalResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationAssignmentsForPrincipalResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationAssignmentsForPrincipalResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


