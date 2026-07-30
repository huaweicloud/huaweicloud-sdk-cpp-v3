

#include "huaweicloud/modelarts/v1/model/ShowSwitchableFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowSwitchableFlavorsResponse::ShowSwitchableFlavorsResponse()
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
    flavorsIsSet_ = false;
}

ShowSwitchableFlavorsResponse::~ShowSwitchableFlavorsResponse() = default;

void ShowSwitchableFlavorsResponse::validate()
{
}

web::json::value ShowSwitchableFlavorsResponse::toJson() const
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
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }

    return val;
}
bool ShowSwitchableFlavorsResponse::fromJson(const web::json::value& val)
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
            std::vector<NotebookFlavor> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<NotebookFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    return ok;
}


int32_t ShowSwitchableFlavorsResponse::getCurrent() const
{
    return current_;
}

void ShowSwitchableFlavorsResponse::setCurrent(int32_t value)
{
    current_ = value;
    currentIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::currentIsSet() const
{
    return currentIsSet_;
}

void ShowSwitchableFlavorsResponse::unsetcurrent()
{
    currentIsSet_ = false;
}

std::vector<NotebookFlavor>& ShowSwitchableFlavorsResponse::getData()
{
    return data_;
}

void ShowSwitchableFlavorsResponse::setData(const std::vector<NotebookFlavor>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ShowSwitchableFlavorsResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ShowSwitchableFlavorsResponse::getPages() const
{
    return pages_;
}

void ShowSwitchableFlavorsResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ShowSwitchableFlavorsResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ShowSwitchableFlavorsResponse::getSize() const
{
    return size_;
}

void ShowSwitchableFlavorsResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowSwitchableFlavorsResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ShowSwitchableFlavorsResponse::getTotal() const
{
    return total_;
}

void ShowSwitchableFlavorsResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowSwitchableFlavorsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<NotebookFlavor>& ShowSwitchableFlavorsResponse::getFlavors()
{
    return flavors_;
}

void ShowSwitchableFlavorsResponse::setFlavors(const std::vector<NotebookFlavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowSwitchableFlavorsResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowSwitchableFlavorsResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

}
}
}
}
}


