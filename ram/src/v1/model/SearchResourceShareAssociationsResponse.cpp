

#include "huaweicloud/ram/v1/model/SearchResourceShareAssociationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




SearchResourceShareAssociationsResponse::SearchResourceShareAssociationsResponse()
{
    resourceShareAssociationsIsSet_ = false;
    pageInfoIsSet_ = false;
}

SearchResourceShareAssociationsResponse::~SearchResourceShareAssociationsResponse() = default;

void SearchResourceShareAssociationsResponse::validate()
{
}

web::json::value SearchResourceShareAssociationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceShareAssociationsIsSet_) {
        val[utility::conversions::to_string_t("resource_share_associations")] = ModelBase::toJson(resourceShareAssociations_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool SearchResourceShareAssociationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_share_associations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_share_associations"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceShareAssociation> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceShareAssociations(refVal);
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


std::vector<ResourceShareAssociation>& SearchResourceShareAssociationsResponse::getResourceShareAssociations()
{
    return resourceShareAssociations_;
}

void SearchResourceShareAssociationsResponse::setResourceShareAssociations(const std::vector<ResourceShareAssociation>& value)
{
    resourceShareAssociations_ = value;
    resourceShareAssociationsIsSet_ = true;
}

bool SearchResourceShareAssociationsResponse::resourceShareAssociationsIsSet() const
{
    return resourceShareAssociationsIsSet_;
}

void SearchResourceShareAssociationsResponse::unsetresourceShareAssociations()
{
    resourceShareAssociationsIsSet_ = false;
}

PageInfo SearchResourceShareAssociationsResponse::getPageInfo() const
{
    return pageInfo_;
}

void SearchResourceShareAssociationsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool SearchResourceShareAssociationsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void SearchResourceShareAssociationsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


