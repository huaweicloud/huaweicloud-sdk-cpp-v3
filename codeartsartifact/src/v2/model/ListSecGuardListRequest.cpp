

#include "huaweicloud/codeartsartifact/v2/model/ListSecGuardListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListSecGuardListRequest::ListSecGuardListRequest()
{
    date_ = 0;
    dateIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListSecGuardListRequest::~ListSecGuardListRequest() = default;

void ListSecGuardListRequest::validate()
{
}

web::json::value ListSecGuardListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListSecGuardListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
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


int32_t ListSecGuardListRequest::getDate() const
{
    return date_;
}

void ListSecGuardListRequest::setDate(int32_t value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ListSecGuardListRequest::dateIsSet() const
{
    return dateIsSet_;
}

void ListSecGuardListRequest::unsetdate()
{
    dateIsSet_ = false;
}

int32_t ListSecGuardListRequest::getPageNo() const
{
    return pageNo_;
}

void ListSecGuardListRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListSecGuardListRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListSecGuardListRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListSecGuardListRequest::getPageSize() const
{
    return pageSize_;
}

void ListSecGuardListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSecGuardListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSecGuardListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


