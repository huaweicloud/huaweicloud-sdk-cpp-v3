

#include "huaweicloud/modelarts/v1/model/ListDevServerJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListDevServerJobsResponse::ListDevServerJobsResponse()
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

ListDevServerJobsResponse::~ListDevServerJobsResponse() = default;

void ListDevServerJobsResponse::validate()
{
}

web::json::value ListDevServerJobsResponse::toJson() const
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
bool ListDevServerJobsResponse::fromJson(const web::json::value& val)
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
            std::vector<DevServerJobListResponse> refVal;
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


int32_t ListDevServerJobsResponse::getCurrent() const
{
    return current_;
}

void ListDevServerJobsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListDevServerJobsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListDevServerJobsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<DevServerJobListResponse>& ListDevServerJobsResponse::getData()
{
    return data_;
}

void ListDevServerJobsResponse::setData(const std::vector<DevServerJobListResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListDevServerJobsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListDevServerJobsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListDevServerJobsResponse::getPages() const
{
    return pages_;
}

void ListDevServerJobsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListDevServerJobsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListDevServerJobsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListDevServerJobsResponse::getSize() const
{
    return size_;
}

void ListDevServerJobsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListDevServerJobsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListDevServerJobsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListDevServerJobsResponse::getTotal() const
{
    return total_;
}

void ListDevServerJobsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDevServerJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDevServerJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


