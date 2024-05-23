

#include "huaweicloud/ram/v1/model/SearchSharedResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchSharedResourcesResponse::SearchSharedResourcesResponse()
{
    sharedResourcesIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchSharedResourcesResponse::~SearchSharedResourcesResponse() = default;

void SearchSharedResourcesResponse::validate()
{
}

web::json::value SearchSharedResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sharedResourcesIsSet_) {
        val[utility::conversions::to_string_t("shared_resources")] = ModelBase::toJson(sharedResources_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchSharedResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shared_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<SharedResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<SharedResource>& SearchSharedResourcesResponse::getSharedResources()
{
    return sharedResources_;
}

void SearchSharedResourcesResponse::setSharedResources(const std::vector<SharedResource>& value)
{
    sharedResources_ = value;
    sharedResourcesIsSet_ = true;
}

bool SearchSharedResourcesResponse::sharedResourcesIsSet() const
{
    return sharedResourcesIsSet_;
}

void SearchSharedResourcesResponse::unsetsharedResources()
{
    sharedResourcesIsSet_ = false;
}

PageInfo SearchSharedResourcesResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchSharedResourcesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchSharedResourcesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchSharedResourcesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


