

#include "huaweicloud/projectman/v4/model/PlanListResponse_page.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PlanListResponse_page::PlanListResponse_page()
{
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

PlanListResponse_page::~PlanListResponse_page() = default;

void PlanListResponse_page::validate()
{
}

web::json::value PlanListResponse_page::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool PlanListResponse_page::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


int32_t PlanListResponse_page::getPage() const
{
    return page_;
}

void PlanListResponse_page::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool PlanListResponse_page::pageIsSet() const
{
    return pageIsSet_;
}

void PlanListResponse_page::unsetpage()
{
    pageIsSet_ = false;
}

int32_t PlanListResponse_page::getSize() const
{
    return size_;
}

void PlanListResponse_page::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PlanListResponse_page::sizeIsSet() const
{
    return sizeIsSet_;
}

void PlanListResponse_page::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t PlanListResponse_page::getCount() const
{
    return count_;
}

void PlanListResponse_page::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PlanListResponse_page::countIsSet() const
{
    return countIsSet_;
}

void PlanListResponse_page::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


