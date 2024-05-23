

#include "huaweicloud/ram/v1/model/ListResourceTypesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceTypesResponse::ListResourceTypesResponse()
{
    resourceTypesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListResourceTypesResponse::~ListResourceTypesResponse() = default;

void ListResourceTypesResponse::validate()
{
}

web::json::value ListResourceTypesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListResourceTypesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTypesSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
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


std::vector<ResourceTypesSummary>& ListResourceTypesResponse::getResourceTypes()
{
    return resourceTypes_;
}

void ListResourceTypesResponse::setResourceTypes(const std::vector<ResourceTypesSummary>& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool ListResourceTypesResponse::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void ListResourceTypesResponse::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

PageInfo ListResourceTypesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListResourceTypesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListResourceTypesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListResourceTypesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


