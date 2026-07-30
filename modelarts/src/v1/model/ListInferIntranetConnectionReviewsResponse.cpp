

#include "huaweicloud/modelarts/v1/model/ListInferIntranetConnectionReviewsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferIntranetConnectionReviewsResponse::ListInferIntranetConnectionReviewsResponse()
{
    current_ = 0;
    currentIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    dataIsSet_ = false;
}

ListInferIntranetConnectionReviewsResponse::~ListInferIntranetConnectionReviewsResponse() = default;

void ListInferIntranetConnectionReviewsResponse::validate()
{
}

web::json::value ListInferIntranetConnectionReviewsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListInferIntranetConnectionReviewsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<IntranetConnectionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


int32_t ListInferIntranetConnectionReviewsResponse::getCurrent() const
{
    return current_;
}

void ListInferIntranetConnectionReviewsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListInferIntranetConnectionReviewsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

int32_t ListInferIntranetConnectionReviewsResponse::getPages() const
{
    return pages_;
}

void ListInferIntranetConnectionReviewsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListInferIntranetConnectionReviewsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListInferIntranetConnectionReviewsResponse::getSize() const
{
    return size_;
}

void ListInferIntranetConnectionReviewsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListInferIntranetConnectionReviewsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int32_t ListInferIntranetConnectionReviewsResponse::getTotal() const
{
    return total_;
}

void ListInferIntranetConnectionReviewsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInferIntranetConnectionReviewsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<IntranetConnectionInfo>& ListInferIntranetConnectionReviewsResponse::getData()
{
    return data_;
}

void ListInferIntranetConnectionReviewsResponse::setData(const std::vector<IntranetConnectionInfo>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListInferIntranetConnectionReviewsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListInferIntranetConnectionReviewsResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


