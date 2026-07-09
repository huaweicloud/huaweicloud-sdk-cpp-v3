

#include "huaweicloud/dbss/v1/model/ListDomainAllResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListDomainAllResourceResponse::ListDomainAllResourceResponse()
{
    pageInfoIsSet_ = false;
    resourcesIsSet_ = false;
}

ListDomainAllResourceResponse::~ListDomainAllResourceResponse() = default;

void ListDomainAllResourceResponse::validate()
{
}

web::json::value ListDomainAllResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }

    return val;
}
bool ListDomainAllResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<CsbResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    return ok;
}


PageInfo ListDomainAllResourceResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListDomainAllResourceResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListDomainAllResourceResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListDomainAllResourceResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<CsbResource>& ListDomainAllResourceResponse::getResources()
{
    return resources_;
}

void ListDomainAllResourceResponse::setResources(const std::vector<CsbResource>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListDomainAllResourceResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListDomainAllResourceResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

}
}
}
}
}


