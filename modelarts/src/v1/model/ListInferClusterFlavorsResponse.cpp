

#include "huaweicloud/modelarts/v1/model/ListInferClusterFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferClusterFlavorsResponse::ListInferClusterFlavorsResponse()
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

ListInferClusterFlavorsResponse::~ListInferClusterFlavorsResponse() = default;

void ListInferClusterFlavorsResponse::validate()
{
}

web::json::value ListInferClusterFlavorsResponse::toJson() const
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
bool ListInferClusterFlavorsResponse::fromJson(const web::json::value& val)
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
            std::vector<InferFlavor> refVal;
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


int32_t ListInferClusterFlavorsResponse::getCurrent() const
{
    return current_;
}

void ListInferClusterFlavorsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferClusterFlavorsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferClusterFlavorsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<InferFlavor>& ListInferClusterFlavorsResponse::getData()
{
    return data_;
}

void ListInferClusterFlavorsResponse::setData(const std::vector<InferFlavor>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferClusterFlavorsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferClusterFlavorsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferClusterFlavorsResponse::getPages() const
{
    return pages_;
}

void ListInferClusterFlavorsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferClusterFlavorsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferClusterFlavorsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferClusterFlavorsResponse::getSize() const
{
    return size_;
}

void ListInferClusterFlavorsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferClusterFlavorsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferClusterFlavorsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferClusterFlavorsResponse::getTotal() const
{
    return total_;
}

void ListInferClusterFlavorsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferClusterFlavorsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferClusterFlavorsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


