

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentInstancesResponse::ListInferDeploymentInstancesResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    dataIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListInferDeploymentInstancesResponse::~ListInferDeploymentInstancesResponse() = default;

void ListInferDeploymentInstancesResponse::validate()
{
}

web::json::value ListInferDeploymentInstancesResponse::toJson() const
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
bool ListInferDeploymentInstancesResponse::fromJson(const web::json::value& val)
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
            std::vector<ServiceInstanceResponse> refVal;
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t ListInferDeploymentInstancesResponse::getCurrent() const
{
    return current_;
}

void ListInferDeploymentInstancesResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferDeploymentInstancesResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferDeploymentInstancesResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServiceInstanceResponse>& ListInferDeploymentInstancesResponse::getData()
{
    return data_;
}

void ListInferDeploymentInstancesResponse::setData(const std::vector<ServiceInstanceResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferDeploymentInstancesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferDeploymentInstancesResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferDeploymentInstancesResponse::getPages() const
{
    return pages_;
}

void ListInferDeploymentInstancesResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferDeploymentInstancesResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferDeploymentInstancesResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferDeploymentInstancesResponse::getSize() const
{
    return size_;
}

void ListInferDeploymentInstancesResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferDeploymentInstancesResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferDeploymentInstancesResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferDeploymentInstancesResponse::getTotal() const
{
    return total_;
}

void ListInferDeploymentInstancesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferDeploymentInstancesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferDeploymentInstancesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


