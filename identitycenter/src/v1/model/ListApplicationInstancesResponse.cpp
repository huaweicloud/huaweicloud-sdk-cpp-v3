

#include "huaweicloud/identitycenter/v1/model/ListApplicationInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ListApplicationInstancesResponse::ListApplicationInstancesResponse()
{
    applicationInstancesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListApplicationInstancesResponse::~ListApplicationInstancesResponse() = default;

void ListApplicationInstancesResponse::validate()
{
}

web::json::value ListApplicationInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationInstancesIsSet_) {
        val[utility::conversions::to_string_t("application_instances")] = ModelBase::toJson(applicationInstances_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListApplicationInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicationInstanceDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstances(refVal);
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


std::vector<ApplicationInstanceDto>& ListApplicationInstancesResponse::getApplicationInstances()
{
    return applicationInstances_;
}

void ListApplicationInstancesResponse::setApplicationInstances(const std::vector<ApplicationInstanceDto>& value)
{
    applicationInstances_ = value;
    applicationInstancesIsSet_ = true;
}

bool ListApplicationInstancesResponse::applicationInstancesIsSet() const
{
    return applicationInstancesIsSet_;
}

void ListApplicationInstancesResponse::unsetapplicationInstances()
{
    applicationInstancesIsSet_ = false;
}

PageInfoDto ListApplicationInstancesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListApplicationInstancesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListApplicationInstancesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListApplicationInstancesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


