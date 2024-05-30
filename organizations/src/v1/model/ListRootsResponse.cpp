

#include "huaweicloud/organizations/v1/model/ListRootsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListRootsResponse::ListRootsResponse()
{
    rootsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListRootsResponse::~ListRootsResponse() = default;

void ListRootsResponse::validate()
{
}

web::json::value ListRootsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootsIsSet_) {
        val[utility::conversions::to_string_t("roots")] = ModelBase::toJson(roots_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListRootsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("roots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roots"));
        if(!fieldValue.is_null())
        {
            std::vector<RootDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoots(refVal);
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


std::vector<RootDto>& ListRootsResponse::getRoots()
{
    return roots_;
}

void ListRootsResponse::setRoots(const std::vector<RootDto>& value)
{
    roots_ = value;
    rootsIsSet_ = true;
}

bool ListRootsResponse::rootsIsSet() const
{
    return rootsIsSet_;
}

void ListRootsResponse::unsetroots()
{
    rootsIsSet_ = false;
}

PageInfoDto ListRootsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListRootsResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListRootsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListRootsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


