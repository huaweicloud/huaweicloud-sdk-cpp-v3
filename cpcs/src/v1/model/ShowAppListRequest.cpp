

#include "huaweicloud/cpcs/v1/model/ShowAppListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppListRequest::ShowAppListRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ShowAppListRequest::~ShowAppListRequest() = default;

void ShowAppListRequest::validate()
{
}

web::json::value ShowAppListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ShowAppListRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
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


int32_t ShowAppListRequest::getPageSize() const
{
    return pageSize_;
}

void ShowAppListRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowAppListRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowAppListRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowAppListRequest::getPageNum() const
{
    return pageNum_;
}

void ShowAppListRequest::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ShowAppListRequest::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ShowAppListRequest::unsetpageNum()
{
    pageNumIsSet_ = false;
}

std::string ShowAppListRequest::getAppName() const
{
    return appName_;
}

void ShowAppListRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowAppListRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowAppListRequest::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowAppListRequest::getVpcName() const
{
    return vpcName_;
}

void ShowAppListRequest::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool ShowAppListRequest::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void ShowAppListRequest::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string ShowAppListRequest::getSortKey() const
{
    return sortKey_;
}

void ShowAppListRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ShowAppListRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ShowAppListRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ShowAppListRequest::getSortDir() const
{
    return sortDir_;
}

void ShowAppListRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ShowAppListRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ShowAppListRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


