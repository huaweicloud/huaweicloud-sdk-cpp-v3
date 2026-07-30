

#include "huaweicloud/modelarts/v1/model/ListInferDeploymentVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferDeploymentVersionsResponse::ListInferDeploymentVersionsResponse()
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

ListInferDeploymentVersionsResponse::~ListInferDeploymentVersionsResponse() = default;

void ListInferDeploymentVersionsResponse::validate()
{
}

web::json::value ListInferDeploymentVersionsResponse::toJson() const
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
bool ListInferDeploymentVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<InferDeploymentVersionItemResp> refVal;
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


std::vector<InferDeploymentVersionItemResp>& ListInferDeploymentVersionsResponse::getData()
{
    return data_;
}

void ListInferDeploymentVersionsResponse::setData(const std::vector<InferDeploymentVersionItemResp>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferDeploymentVersionsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferDeploymentVersionsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferDeploymentVersionsResponse::getCurrent() const
{
    return current_;
}

void ListInferDeploymentVersionsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferDeploymentVersionsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferDeploymentVersionsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferDeploymentVersionsResponse::getSize() const
{
    return size_;
}

void ListInferDeploymentVersionsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferDeploymentVersionsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferDeploymentVersionsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferDeploymentVersionsResponse::getPages() const
{
    return pages_;
}

void ListInferDeploymentVersionsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferDeploymentVersionsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferDeploymentVersionsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferDeploymentVersionsResponse::getTotal() const
{
    return total_;
}

void ListInferDeploymentVersionsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferDeploymentVersionsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferDeploymentVersionsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


