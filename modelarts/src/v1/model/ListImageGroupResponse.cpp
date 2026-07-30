

#include "huaweicloud/modelarts/v1/model/ListImageGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListImageGroupResponse::ListImageGroupResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    dataIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    isSwrEnterprise_ = false;
    isSwrEnterpriseIsSet_ = false;
}

ListImageGroupResponse::~ListImageGroupResponse() = default;

void ListImageGroupResponse::validate()
{
}

web::json::value ListImageGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentIsSet_) {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(current_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(isSwrEnterpriseIsSet_) {
        val[utility::conversions::to_string_t("is_swr_enterprise")] = ModelBase::toJson(isSwrEnterprise_);
    }

    return val;
}
bool ListImageGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_swr_enterprise"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_swr_enterprise"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSwrEnterprise(refVal);
        }
    }
    return ok;
}


int32_t ListImageGroupResponse::getCurrent() const
{
    return current_;
}

void ListImageGroupResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListImageGroupResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListImageGroupResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ImageGroup>& ListImageGroupResponse::getData()
{
    return data_;
}

void ListImageGroupResponse::setData(const std::vector<ImageGroup>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListImageGroupResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListImageGroupResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListImageGroupResponse::getPages() const
{
    return pages_;
}

void ListImageGroupResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListImageGroupResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListImageGroupResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListImageGroupResponse::getSize() const
{
    return size_;
}

void ListImageGroupResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListImageGroupResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListImageGroupResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListImageGroupResponse::getTotal() const
{
    return total_;
}

void ListImageGroupResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListImageGroupResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListImageGroupResponse::unsettotal()
{
    totalIsSet_ = false;
}

bool ListImageGroupResponse::isIsSwrEnterprise() const
{
    return isSwrEnterprise_;
}

void ListImageGroupResponse::setIsSwrEnterprise(bool value)
{
    isSwrEnterprise_ = value;
    isSwrEnterpriseIsSet_ = true;
}

bool ListImageGroupResponse::isSwrEnterpriseIsSet() const
{
    return isSwrEnterpriseIsSet_;
}

void ListImageGroupResponse::unsetisSwrEnterprise()
{
    isSwrEnterpriseIsSet_ = false;
}

}
}
}
}
}


