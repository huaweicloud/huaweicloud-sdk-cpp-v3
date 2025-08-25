

#include "huaweicloud/cpcs/v1/model/ShowCcspClusterListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowCcspClusterListRequest::ShowCcspClusterListRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowCcspClusterListRequest::~ShowCcspClusterListRequest() = default;

void ShowCcspClusterListRequest::validate()
{
}

web::json::value ShowCcspClusterListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowCcspClusterListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


int32_t ShowCcspClusterListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowCcspClusterListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowCcspClusterListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowCcspClusterListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowCcspClusterListRequest::getPageNum() const
{
    return pageNum_;
}

void ShowCcspClusterListRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowCcspClusterListRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowCcspClusterListRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

std::string ShowCcspClusterListRequest::getName() const
{
    return name_;
}

void ShowCcspClusterListRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowCcspClusterListRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowCcspClusterListRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowCcspClusterListRequest::getServiceType() const
{
    return serviceType_;
}

void ShowCcspClusterListRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ShowCcspClusterListRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ShowCcspClusterListRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ShowCcspClusterListRequest::getSortKey() const
{
    return sortKey_;
}

void ShowCcspClusterListRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowCcspClusterListRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowCcspClusterListRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowCcspClusterListRequest::getSortDir() const
{
    return sortDir_;
}

void ShowCcspClusterListRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowCcspClusterListRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowCcspClusterListRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


