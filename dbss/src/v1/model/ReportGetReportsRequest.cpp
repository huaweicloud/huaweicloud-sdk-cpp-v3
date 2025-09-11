

#include "huaweicloud/dbss/v1/model/ReportGetReportsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ReportGetReportsRequest::ReportGetReportsRequest()
{
    name_ = "";
    nameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ReportGetReportsRequest::~ReportGetReportsRequest() = default;

void ReportGetReportsRequest::validate()
{
}

web::json::value ReportGetReportsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ReportGetReportsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
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
    return ok;
}


std::string ReportGetReportsRequest::getName() const
{
    return name_;
}

void ReportGetReportsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportGetReportsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ReportGetReportsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ReportGetReportsRequest::getPage() const
{
    return page_;
}

void ReportGetReportsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ReportGetReportsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ReportGetReportsRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ReportGetReportsRequest::getSize() const
{
    return size_;
}

void ReportGetReportsRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ReportGetReportsRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ReportGetReportsRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


