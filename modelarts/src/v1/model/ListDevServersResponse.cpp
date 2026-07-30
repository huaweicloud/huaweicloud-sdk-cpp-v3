

#include "huaweicloud/modelarts/v1/model/ListDevServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServersResponse::ListDevServersResponse()
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
}

ListDevServersResponse::~ListDevServersResponse() = default;

void ListDevServersResponse::validate()
{
}

web::json::value ListDevServersResponse::toJson() const
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

    return val;
}
bool ListDevServersResponse::fromJson(const web::json::value& val)
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
            std::vector<ServerResponse> refVal;
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
    return ok;
}


int32_t ListDevServersResponse::getCurrent() const
{
    return current_;
}

void ListDevServersResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListDevServersResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListDevServersResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerResponse>& ListDevServersResponse::getData()
{
    return data_;
}

void ListDevServersResponse::setData(const std::vector<ServerResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDevServersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDevServersResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListDevServersResponse::getPages() const
{
    return pages_;
}

void ListDevServersResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListDevServersResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListDevServersResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListDevServersResponse::getSize() const
{
    return size_;
}

void ListDevServersResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDevServersResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDevServersResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListDevServersResponse::getTotal() const
{
    return total_;
}

void ListDevServersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDevServersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDevServersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


