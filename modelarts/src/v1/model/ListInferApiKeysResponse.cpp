

#include "huaweicloud/modelarts/v1/model/ListInferApiKeysResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferApiKeysResponse::ListInferApiKeysResponse()
{
    dataIsSet_ = false;
    current_ = 0;
    currentIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListInferApiKeysResponse::~ListInferApiKeysResponse() = default;

void ListInferApiKeysResponse::validate()
{
}

web::json::value ListInferApiKeysResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
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

    return val;
}
bool ListInferApiKeysResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ApiKeyResponseV2> refVal;
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


std::vector<ApiKeyResponseV2>& ListInferApiKeysResponse::getData()
{
    return data_;
}

void ListInferApiKeysResponse::setData(const std::vector<ApiKeyResponseV2>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferApiKeysResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferApiKeysResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListInferApiKeysResponse::getCurrent() const
{
    return current_;
}

void ListInferApiKeysResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferApiKeysResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferApiKeysResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferApiKeysResponse::getPages() const
{
    return pages_;
}

void ListInferApiKeysResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferApiKeysResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferApiKeysResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferApiKeysResponse::getSize() const
{
    return size_;
}

void ListInferApiKeysResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferApiKeysResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferApiKeysResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferApiKeysResponse::getTotal() const
{
    return total_;
}

void ListInferApiKeysResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferApiKeysResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferApiKeysResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


