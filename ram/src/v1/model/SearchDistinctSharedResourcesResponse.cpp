

#include "huaweicloud/ram/v1/model/SearchDistinctSharedResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchDistinctSharedResourcesResponse::SearchDistinctSharedResourcesResponse()
{
    distinctSharedResourcesIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchDistinctSharedResourcesResponse::~SearchDistinctSharedResourcesResponse() = default;

void SearchDistinctSharedResourcesResponse::validate()
{
}

web::json::value SearchDistinctSharedResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(distinctSharedResourcesIsSet_) {
        val[utility::conversions::to_string_t("distinct_shared_resources")] = ModelBase::toJson(distinctSharedResources_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchDistinctSharedResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("distinct_shared_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distinct_shared_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<DistinctSharedResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistinctSharedResources(refVal);
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


std::vector<DistinctSharedResource>& SearchDistinctSharedResourcesResponse::getDistinctSharedResources()
{
    return distinctSharedResources_;
}

void SearchDistinctSharedResourcesResponse::setDistinctSharedResources(const std::vector<DistinctSharedResource>& value)
{
    distinctSharedResources_ = value;
    distinctSharedResourcesIsSet_ = true;
}

bool SearchDistinctSharedResourcesResponse::distinctSharedResourcesIsSet() const
{
    return distinctSharedResourcesIsSet_;
}

void SearchDistinctSharedResourcesResponse::unsetdistinctSharedResources()
{
    distinctSharedResourcesIsSet_ = false;
}

PageInfo SearchDistinctSharedResourcesResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchDistinctSharedResourcesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchDistinctSharedResourcesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchDistinctSharedResourcesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


