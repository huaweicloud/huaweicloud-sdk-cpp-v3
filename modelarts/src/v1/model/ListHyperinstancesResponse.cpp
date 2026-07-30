

#include "huaweicloud/modelarts/v1/model/ListHyperinstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstancesResponse::ListHyperinstancesResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListHyperinstancesResponse::~ListHyperinstancesResponse() = default;

void ListHyperinstancesResponse::validate()
{
}

web::json::value ListHyperinstancesResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListHyperinstancesResponse::fromJson(const web::json::value& val)
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
            std::vector<ServerHyperinstanceResponse> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListHyperinstancesResponse::getCurrent() const
{
    return current_;
}

void ListHyperinstancesResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListHyperinstancesResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListHyperinstancesResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerHyperinstanceResponse>& ListHyperinstancesResponse::getData()
{
    return data_;
}

void ListHyperinstancesResponse::setData(const std::vector<ServerHyperinstanceResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListHyperinstancesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListHyperinstancesResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListHyperinstancesResponse::getPages() const
{
    return pages_;
}

void ListHyperinstancesResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListHyperinstancesResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListHyperinstancesResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListHyperinstancesResponse::getSize() const
{
    return size_;
}

void ListHyperinstancesResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListHyperinstancesResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListHyperinstancesResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListHyperinstancesResponse::getTotal() const
{
    return total_;
}

void ListHyperinstancesResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHyperinstancesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHyperinstancesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListHyperinstancesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListHyperinstancesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListHyperinstancesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListHyperinstancesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


