

#include "huaweicloud/modelarts/v1/model/ListInferServiceEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferServiceEventsResponse::ListInferServiceEventsResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListInferServiceEventsResponse::~ListInferServiceEventsResponse() = default;

void ListInferServiceEventsResponse::validate()
{
}

web::json::value ListInferServiceEventsResponse::toJson() const
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
bool ListInferServiceEventsResponse::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceEventResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListInferServiceEventsResponse::getCurrent() const
{
    return current_;
}

void ListInferServiceEventsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferServiceEventsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferServiceEventsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferServiceEventsResponse::getPages() const
{
    return pages_;
}

void ListInferServiceEventsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferServiceEventsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferServiceEventsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferServiceEventsResponse::getSize() const
{
    return size_;
}

void ListInferServiceEventsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferServiceEventsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferServiceEventsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferServiceEventsResponse::getTotal() const
{
    return total_;
}

void ListInferServiceEventsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferServiceEventsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferServiceEventsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ServiceEventResponse>& ListInferServiceEventsResponse::getData()
{
    return data_;
}

void ListInferServiceEventsResponse::setData(const std::vector<ServiceEventResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferServiceEventsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferServiceEventsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


