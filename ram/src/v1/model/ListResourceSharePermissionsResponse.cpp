

#include "huaweicloud/ram/v1/model/ListResourceSharePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ListResourceSharePermissionsResponse::ListResourceSharePermissionsResponse()
{
    associatedPermissionsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListResourceSharePermissionsResponse::~ListResourceSharePermissionsResponse() = default;

void ListResourceSharePermissionsResponse::validate()
{
}

web::json::value ListResourceSharePermissionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(associatedPermissionsIsSet_) {
        val[utility::conversions::to_string_t("associated_permissions")] = ModelBase::toJson(associatedPermissions_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListResourceSharePermissionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("associated_permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_permissions"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedPermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedPermissions(refVal);
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


std::vector<AssociatedPermission>& ListResourceSharePermissionsResponse::getAssociatedPermissions()
{
    return associatedPermissions_;
}

void ListResourceSharePermissionsResponse::setAssociatedPermissions(const std::vector<AssociatedPermission>& value)
{
    associatedPermissions_ = value;
    associatedPermissionsIsSet_ = true;
}

bool ListResourceSharePermissionsResponse::associatedPermissionsIsSet() const
{
    return associatedPermissionsIsSet_;
}

void ListResourceSharePermissionsResponse::unsetassociatedPermissions()
{
    associatedPermissionsIsSet_ = false;
}

PageInfo ListResourceSharePermissionsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListResourceSharePermissionsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListResourceSharePermissionsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListResourceSharePermissionsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


