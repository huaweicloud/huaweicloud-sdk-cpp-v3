

#include "huaweicloud/codeartsartifact/v2/model/ListDomainIpConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListDomainIpConfigRequest::ListDomainIpConfigRequest()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListDomainIpConfigRequest::~ListDomainIpConfigRequest() = default;

void ListDomainIpConfigRequest::validate()
{
}

web::json::value ListDomainIpConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListDomainIpConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


int32_t ListDomainIpConfigRequest::getPageNo() const
{
    return pageNo_;
}

void ListDomainIpConfigRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListDomainIpConfigRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListDomainIpConfigRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListDomainIpConfigRequest::getPageSize() const
{
    return pageSize_;
}

void ListDomainIpConfigRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListDomainIpConfigRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListDomainIpConfigRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


