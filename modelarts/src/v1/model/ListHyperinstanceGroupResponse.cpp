

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceGroupResponse::ListHyperinstanceGroupResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListHyperinstanceGroupResponse::~ListHyperinstanceGroupResponse() = default;

void ListHyperinstanceGroupResponse::validate()
{
}

web::json::value ListHyperinstanceGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentIsSet_) {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(current_);
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
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListHyperinstanceGroupResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<HyperinstanceGroupResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListHyperinstanceGroupResponse::getCurrent() const
{
    return current_;
}

void ListHyperinstanceGroupResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListHyperinstanceGroupResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListHyperinstanceGroupResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListHyperinstanceGroupResponse::getPages() const
{
    return pages_;
}

void ListHyperinstanceGroupResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListHyperinstanceGroupResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListHyperinstanceGroupResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListHyperinstanceGroupResponse::getSize() const
{
    return size_;
}

void ListHyperinstanceGroupResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListHyperinstanceGroupResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListHyperinstanceGroupResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListHyperinstanceGroupResponse::getTotal() const
{
    return total_;
}

void ListHyperinstanceGroupResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHyperinstanceGroupResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHyperinstanceGroupResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HyperinstanceGroupResponse>& ListHyperinstanceGroupResponse::getData()
{
    return data_;
}

void ListHyperinstanceGroupResponse::setData(const std::vector<HyperinstanceGroupResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListHyperinstanceGroupResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListHyperinstanceGroupResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


