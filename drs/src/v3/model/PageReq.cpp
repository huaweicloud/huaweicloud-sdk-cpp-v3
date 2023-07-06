

#include "huaweicloud/drs/v3/model/PageReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




PageReq::PageReq()
{
    curPage_ = 0;
    curPageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
}

PageReq::~PageReq() = default;

void PageReq::validate()
{
}

web::json::value PageReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curPageIsSet_) {
        val[utility::conversions::to_string_t("cur_page")] = ModelBase::toJson(curPage_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }

    return val;
}

bool PageReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cur_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    return ok;
}

int32_t PageReq::getCurPage() const
{
    return curPage_;
}

void PageReq::setCurPage(int32_t value)
{
    curPage_ = value;
    curPageIsSet_ = true;
}

bool PageReq::curPageIsSet() const
{
    return curPageIsSet_;
}

void PageReq::unsetcurPage()
{
    curPageIsSet_ = false;
}

int32_t PageReq::getPerPage() const
{
    return perPage_;
}

void PageReq::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool PageReq::perPageIsSet() const
{
    return perPageIsSet_;
}

void PageReq::unsetperPage()
{
    perPageIsSet_ = false;
}

}
}
}
}
}


