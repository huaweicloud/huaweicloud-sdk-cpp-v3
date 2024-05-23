

#include "huaweicloud/ram/v1/model/SearchResourceSharesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceSharesResponse::SearchResourceSharesResponse()
{
    resourceSharesIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchResourceSharesResponse::~SearchResourceSharesResponse() = default;

void SearchResourceSharesResponse::validate()
{
}

web::json::value SearchResourceSharesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceSharesIsSet_) {
        val[utility::conversions::to_string_t("resource_shares")] = ModelBase::toJson(resourceShares_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchResourceSharesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_shares"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_shares"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceShare> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShares(refVal);
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


std::vector<ResourceShare>& SearchResourceSharesResponse::getResourceShares()
{
    return resourceShares_;
}

void SearchResourceSharesResponse::setResourceShares(const std::vector<ResourceShare>& value)
{
    resourceShares_ = value;
    resourceSharesIsSet_ = true;
}

bool SearchResourceSharesResponse::resourceSharesIsSet() const
{
    return resourceSharesIsSet_;
}

void SearchResourceSharesResponse::unsetresourceShares()
{
    resourceSharesIsSet_ = false;
}

PageInfo SearchResourceSharesResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchResourceSharesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchResourceSharesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchResourceSharesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


