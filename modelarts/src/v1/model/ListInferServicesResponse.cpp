

#include "huaweicloud/modelarts/v1/model/ListInferServicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServicesResponse::ListInferServicesResponse()
{
    dataIsSet_ = false;
    current_ = 0;
    currentIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListInferServicesResponse::~ListInferServicesResponse() = default;

void ListInferServicesResponse::validate()
{
}

web::json::value ListInferServicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(currentIsSet_) {
        val[utility::conversions::to_string_t("current")] = ModelBase::toJson(current_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListInferServicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceItemResponse_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrent(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
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


std::vector<ServiceItemResponse_data>& ListInferServicesResponse::getData()
{
    return data_;
}

void ListInferServicesResponse::setData(const std::vector<ServiceItemResponse_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferServicesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferServicesResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferServicesResponse::getCurrent() const
{
    return current_;
}

void ListInferServicesResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferServicesResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferServicesResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferServicesResponse::getSize() const
{
    return size_;
}

void ListInferServicesResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferServicesResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferServicesResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferServicesResponse::getPages() const
{
    return pages_;
}

void ListInferServicesResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferServicesResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferServicesResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferServicesResponse::getTotal() const
{
    return total_;
}

void ListInferServicesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferServicesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferServicesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


