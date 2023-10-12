

#include "huaweicloud/codeartsdeploy/v2/model/ListNewHostsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListNewHostsRequest::ListNewHostsRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    keyField_ = "";
    keyFieldIsSet_ = false;
    environmentId_ = "";
    environmentIdIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
}

ListNewHostsRequest::~ListNewHostsRequest() = default;

void ListNewHostsRequest::validate()
{
}

web::json::value ListNewHostsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(keyFieldIsSet_) {
        val[utility::conversions::to_string_t("key_field")] = ModelBase::toJson(keyField_);
    }
    if(environmentIdIsSet_) {
        val[utility::conversions::to_string_t("environment_id")] = ModelBase::toJson(environmentId_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }

    return val;
}
bool ListNewHostsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("as_proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("as_proxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsProxy(refVal);
        }
    }
    return ok;
}


std::string ListNewHostsRequest::getGroupId() const
{
    return groupId_;
}

void ListNewHostsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListNewHostsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListNewHostsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListNewHostsRequest::getKeyField() const
{
    return keyField_;
}

void ListNewHostsRequest::setKeyField(const std::string& value)
{
    keyField_ = value;
    keyFieldIsSet_ = true;
}

bool ListNewHostsRequest::keyFieldIsSet() const
{
    return keyFieldIsSet_;
}

void ListNewHostsRequest::unsetkeyField()
{
    keyFieldIsSet_ = false;
}

std::string ListNewHostsRequest::getEnvironmentId() const
{
    return environmentId_;
}

void ListNewHostsRequest::setEnvironmentId(const std::string& value)
{
    environmentId_ = value;
    environmentIdIsSet_ = true;
}

bool ListNewHostsRequest::environmentIdIsSet() const
{
    return environmentIdIsSet_;
}

void ListNewHostsRequest::unsetenvironmentId()
{
    environmentIdIsSet_ = false;
}

int32_t ListNewHostsRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListNewHostsRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListNewHostsRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListNewHostsRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListNewHostsRequest::getPageSize() const
{
    return pageSize_;
}

void ListNewHostsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListNewHostsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListNewHostsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListNewHostsRequest::getSortKey() const
{
    return sortKey_;
}

void ListNewHostsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListNewHostsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListNewHostsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListNewHostsRequest::getSortDir() const
{
    return sortDir_;
}

void ListNewHostsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListNewHostsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListNewHostsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

bool ListNewHostsRequest::isAsProxy() const
{
    return asProxy_;
}

void ListNewHostsRequest::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool ListNewHostsRequest::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void ListNewHostsRequest::unsetasProxy()
{
    asProxyIsSet_ = false;
}

}
}
}
}
}


