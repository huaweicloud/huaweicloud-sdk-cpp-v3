

#include "huaweicloud/cloudtest/v1/model/ListAlertTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAlertTemplatesRequest::ListAlertTemplatesRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListAlertTemplatesRequest::~ListAlertTemplatesRequest() = default;

void ListAlertTemplatesRequest::validate()
{
}

web::json::value ListAlertTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("pageNum")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("pageSize")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListAlertTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListAlertTemplatesRequest::getServiceId() const
{
    return serviceId_;
}

void ListAlertTemplatesRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListAlertTemplatesRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListAlertTemplatesRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListAlertTemplatesRequest::getName() const
{
    return name_;
}

void ListAlertTemplatesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAlertTemplatesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAlertTemplatesRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListAlertTemplatesRequest::getPageNum() const
{
    return pageNum_;
}

void ListAlertTemplatesRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListAlertTemplatesRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListAlertTemplatesRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListAlertTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void ListAlertTemplatesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListAlertTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListAlertTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


