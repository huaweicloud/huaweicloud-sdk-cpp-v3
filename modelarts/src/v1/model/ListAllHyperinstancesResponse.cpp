

#include "huaweicloud/modelarts/v1/model/ListAllHyperinstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAllHyperinstancesResponse::ListAllHyperinstancesResponse()
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

ListAllHyperinstancesResponse::~ListAllHyperinstancesResponse() = default;

void ListAllHyperinstancesResponse::validate()
{
}

web::json::value ListAllHyperinstancesResponse::toJson() const
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
bool ListAllHyperinstancesResponse::fromJson(const web::json::value& val)
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
            std::vector<ServerHyperinstanceResponse> refVal;
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


int32_t ListAllHyperinstancesResponse::getCurrent() const
{
    return current_;
}

void ListAllHyperinstancesResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ListAllHyperinstancesResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ListAllHyperinstancesResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<ServerHyperinstanceResponse>& ListAllHyperinstancesResponse::getData()
{
    return data_;
}

void ListAllHyperinstancesResponse::setData(const std::vector<ServerHyperinstanceResponse>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListAllHyperinstancesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListAllHyperinstancesResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListAllHyperinstancesResponse::getPages() const
{
    return pages_;
}

void ListAllHyperinstancesResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListAllHyperinstancesResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListAllHyperinstancesResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListAllHyperinstancesResponse::getSize() const
{
    return size_;
}

void ListAllHyperinstancesResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAllHyperinstancesResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAllHyperinstancesResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListAllHyperinstancesResponse::getTotal() const
{
    return total_;
}

void ListAllHyperinstancesResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAllHyperinstancesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAllHyperinstancesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


