

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceServersResponse::ListHyperinstanceServersResponse()
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

ListHyperinstanceServersResponse::~ListHyperinstanceServersResponse() = default;

void ListHyperinstanceServersResponse::validate()
{
}

web::json::value ListHyperinstanceServersResponse::toJson() const
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
bool ListHyperinstanceServersResponse::fromJson(const web::json::value& val)
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


int32_t ListHyperinstanceServersResponse::getCurrent() const
{
    return current_;
}

void ListHyperinstanceServersResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListHyperinstanceServersResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListHyperinstanceServersResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerResponse>& ListHyperinstanceServersResponse::getData()
{
    return data_;
}

void ListHyperinstanceServersResponse::setData(const std::vector<ServerResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListHyperinstanceServersResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListHyperinstanceServersResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListHyperinstanceServersResponse::getPages() const
{
    return pages_;
}

void ListHyperinstanceServersResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListHyperinstanceServersResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListHyperinstanceServersResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListHyperinstanceServersResponse::getSize() const
{
    return size_;
}

void ListHyperinstanceServersResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListHyperinstanceServersResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListHyperinstanceServersResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListHyperinstanceServersResponse::getTotal() const
{
    return total_;
}

void ListHyperinstanceServersResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListHyperinstanceServersResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListHyperinstanceServersResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


