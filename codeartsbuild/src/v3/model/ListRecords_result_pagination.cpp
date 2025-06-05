

#include "huaweicloud/codeartsbuild/v3/model/ListRecords_result_pagination.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecords_result_pagination::ListRecords_result_pagination()
{
    page_ = 0;
    pageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListRecords_result_pagination::~ListRecords_result_pagination() = default;

void ListRecords_result_pagination::validate()
{
}

web::json::value ListRecords_result_pagination::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListRecords_result_pagination::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t ListRecords_result_pagination::getPage() const
{
    return page_;
}

void ListRecords_result_pagination::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListRecords_result_pagination::pageIsSet() const
{
    return pageIsSet_;
}

void ListRecords_result_pagination::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListRecords_result_pagination::getLimit() const
{
    return limit_;
}

void ListRecords_result_pagination::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRecords_result_pagination::limitIsSet() const
{
    return limitIsSet_;
}

void ListRecords_result_pagination::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListRecords_result_pagination::getTotal() const
{
    return total_;
}

void ListRecords_result_pagination::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRecords_result_pagination::totalIsSet() const
{
    return totalIsSet_;
}

void ListRecords_result_pagination::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


