

#include "huaweicloud/cpcs/v1/model/ShowAppListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAppListRequest::ShowAppListRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
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

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
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
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


int32_t ShowAppListRequest::getLimit() const
{
    return limit_;
}

void ShowAppListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAppListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAppListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAppListRequest::getOffset() const
{
    return offset_;
}

void ShowAppListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAppListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAppListRequest::unsetoffset()
{
    offsetIsSet_ = false;
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


