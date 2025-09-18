

#include "huaweicloud/ga/v1/model/ListAllPopsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListAllPopsResponse::ListAllPopsResponse()
{
    popsIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListAllPopsResponse::~ListAllPopsResponse() = default;

void ListAllPopsResponse::validate()
{
}

web::json::value ListAllPopsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(popsIsSet_) {
        val[utility::conversions::to_string_t("pops")] = ModelBase::toJson(pops_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListAllPopsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pops"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pops"));
        if(!fieldValue.is_null())
        {
            std::vector<PopOuterDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPops(refVal);
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


std::vector<PopOuterDetail>& ListAllPopsResponse::getPops()
{
    return pops_;
}

void ListAllPopsResponse::setPops(const std::vector<PopOuterDetail>& value)
{
    pops_ = value;
    popsIsSet_ = true;
}

bool ListAllPopsResponse::popsIsSet() const
{
    return popsIsSet_;
}

void ListAllPopsResponse::unsetpops()
{
    popsIsSet_ = false;
}

PageInfo ListAllPopsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListAllPopsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListAllPopsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListAllPopsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


