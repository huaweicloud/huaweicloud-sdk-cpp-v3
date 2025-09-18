

#include "huaweicloud/projectman/v4/model/PageVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




PageVO::PageVO()
{
    page_ = "";
    pageIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    count_ = "";
    countIsSet_ = false;
}

PageVO::~PageVO() = default;

void PageVO::validate()
{
}

web::json::value PageVO::toJson() const
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
bool PageVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string PageVO::getPage() const
{
    return page_;
}

void PageVO::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool PageVO::pageIsSet() const
{
    return pageIsSet_;
}

void PageVO::unsetpage()
{
    pageIsSet_ = false;
}

std::string PageVO::getSize() const
{
    return size_;
}

void PageVO::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PageVO::sizeIsSet() const
{
    return sizeIsSet_;
}

void PageVO::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PageVO::getCount() const
{
    return count_;
}

void PageVO::setCount(const std::string& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool PageVO::countIsSet() const
{
    return countIsSet_;
}

void PageVO::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


