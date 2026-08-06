

#include "huaweicloud/kms/v2/model/ListAccessPointResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListAccessPointResponse::ListAccessPointResponse()
{
    pageInfoIsSet_ = false;
    accessPointsIsSet_ = false;
}

ListAccessPointResponse::~ListAccessPointResponse() = default;

void ListAccessPointResponse::validate()
{
}

web::json::value ListAccessPointResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(accessPointsIsSet_) {
        val[utility::conversions::to_string_t("access_points")] = ModelBase::toJson(accessPoints_);
    }

    return val;
}
bool ListAccessPointResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            ListAccessPointResponseBody_page_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_points"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_points"));
        if(!fieldValue.is_null())
        {
            std::vector<ListAccessPointResponseBody_access_points> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessPoints(refVal);
        }
    }
    return ok;
}


ListAccessPointResponseBody_page_info ListAccessPointResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAccessPointResponse::setPageInfo(const ListAccessPointResponseBody_page_info& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAccessPointResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAccessPointResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

std::vector<ListAccessPointResponseBody_access_points>& ListAccessPointResponse::getAccessPoints()
{
    return accessPoints_;
}

void ListAccessPointResponse::setAccessPoints(const std::vector<ListAccessPointResponseBody_access_points>& value)
{
    accessPoints_ = value;
    accessPointsIsSet_ = true;
}

bool ListAccessPointResponse::accessPointsIsSet() const
{
    return accessPointsIsSet_;
}

void ListAccessPointResponse::unsetaccessPoints()
{
    accessPointsIsSet_ = false;
}

}
}
}
}
}


