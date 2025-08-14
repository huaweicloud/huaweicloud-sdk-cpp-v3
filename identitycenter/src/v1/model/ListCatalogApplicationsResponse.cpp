

#include "huaweicloud/identitycenter/v1/model/ListCatalogApplicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListCatalogApplicationsResponse::ListCatalogApplicationsResponse()
{
    applicationsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListCatalogApplicationsResponse::~ListCatalogApplicationsResponse() = default;

void ListCatalogApplicationsResponse::validate()
{
}

web::json::value ListCatalogApplicationsResponse::toJson() const
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
bool ListCatalogApplicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationTemplateDisplayDto> refVal;
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


std::vector<ApplicationTemplateDisplayDto>& ListCatalogApplicationsResponse::getApplications()
{
    return applications_;
}

void ListCatalogApplicationsResponse::setApplications(const std::vector<ApplicationTemplateDisplayDto>& value)
{
    applications_ = value;
    applicationsIsSet_ = true;
}

bool ListCatalogApplicationsResponse::applicationsIsSet() const
{
    return applicationsIsSet_;
}

void ListCatalogApplicationsResponse::unsetapplications()
{
    applicationsIsSet_ = false;
}

PageInfoDto ListCatalogApplicationsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListCatalogApplicationsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListCatalogApplicationsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListCatalogApplicationsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


