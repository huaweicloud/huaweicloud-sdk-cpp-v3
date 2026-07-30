

#include "huaweicloud/modelarts/v1/model/DeleteDevServerJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteDevServerJobsResponse::DeleteDevServerJobsResponse()
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

DeleteDevServerJobsResponse::~DeleteDevServerJobsResponse() = default;

void DeleteDevServerJobsResponse::validate()
{
}

web::json::value DeleteDevServerJobsResponse::toJson() const
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
bool DeleteDevServerJobsResponse::fromJson(const web::json::value& val)
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


int32_t DeleteDevServerJobsResponse::getCurrent() const
{
    return current_;
}

void DeleteDevServerJobsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool DeleteDevServerJobsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void DeleteDevServerJobsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<DevServerJobListResponse>& DeleteDevServerJobsResponse::getData()
{
    return data_;
}

void DeleteDevServerJobsResponse::setData(const std::vector<DevServerJobListResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool DeleteDevServerJobsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void DeleteDevServerJobsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t DeleteDevServerJobsResponse::getPages() const
{
    return pages_;
}

void DeleteDevServerJobsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool DeleteDevServerJobsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void DeleteDevServerJobsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t DeleteDevServerJobsResponse::getSize() const
{
    return size_;
}

void DeleteDevServerJobsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool DeleteDevServerJobsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void DeleteDevServerJobsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t DeleteDevServerJobsResponse::getTotal() const
{
    return total_;
}

void DeleteDevServerJobsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool DeleteDevServerJobsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void DeleteDevServerJobsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


