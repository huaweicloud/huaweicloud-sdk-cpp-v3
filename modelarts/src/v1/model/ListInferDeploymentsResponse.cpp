

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentsResponse::ListInferDeploymentsResponse()
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

ListInferDeploymentsResponse::~ListInferDeploymentsResponse() = default;

void ListInferDeploymentsResponse::validate()
{
}

web::json::value ListInferDeploymentsResponse::toJson() const
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
bool ListInferDeploymentsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<InferDeploymentItemResponse_data> refVal;
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


std::vector<InferDeploymentItemResponse_data>& ListInferDeploymentsResponse::getData()
{
    return data_;
}

void ListInferDeploymentsResponse::setData(const std::vector<InferDeploymentItemResponse_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferDeploymentsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferDeploymentsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferDeploymentsResponse::getCurrent() const
{
    return current_;
}

void ListInferDeploymentsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferDeploymentsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferDeploymentsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferDeploymentsResponse::getSize() const
{
    return size_;
}

void ListInferDeploymentsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferDeploymentsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferDeploymentsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferDeploymentsResponse::getPages() const
{
    return pages_;
}

void ListInferDeploymentsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferDeploymentsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferDeploymentsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferDeploymentsResponse::getTotal() const
{
    return total_;
}

void ListInferDeploymentsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferDeploymentsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferDeploymentsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


