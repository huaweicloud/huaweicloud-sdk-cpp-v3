

#include "huaweicloud/projectman/v4/model/PageInfoVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PageInfoVO::PageInfoVO()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

PageInfoVO::~PageInfoVO() = default;

void PageInfoVO::validate()
{
}

web::json::value PageInfoVO::toJson() const
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
bool PageInfoVO::fromJson(const web::json::value& val)
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


int32_t PageInfoVO::getPageNo() const
{
    return pageNo_;
}

void PageInfoVO::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool PageInfoVO::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void PageInfoVO::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t PageInfoVO::getPageSize() const
{
    return pageSize_;
}

void PageInfoVO::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool PageInfoVO::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void PageInfoVO::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


