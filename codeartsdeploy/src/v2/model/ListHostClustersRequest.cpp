

#include "huaweicloud/codeartsdeploy/v2/model/ListHostClustersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListHostClustersRequest::ListHostClustersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    isProxyMode_ = 0;
    isProxyModeIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
}

ListHostClustersRequest::~ListHostClustersRequest() = default;

void ListHostClustersRequest::validate()
{
}

web::json::value ListHostClustersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(isProxyModeIsSet_) {
        val[utility::conversions::to_string_t("is_proxy_mode")] = ModelBase::toJson(isProxyMode_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }

    return val;
}
bool ListHostClustersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_proxy_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    return ok;
}


std::string ListHostClustersRequest::getProjectId() const
{
    return projectId_;
}

void ListHostClustersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListHostClustersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListHostClustersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListHostClustersRequest::getName() const
{
    return name_;
}

void ListHostClustersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListHostClustersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListHostClustersRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListHostClustersRequest::getOs() const
{
    return os_;
}

void ListHostClustersRequest::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ListHostClustersRequest::osIsSet() const
{
    return osIsSet_;
}

void ListHostClustersRequest::unsetos()
{
    osIsSet_ = false;
}

int32_t ListHostClustersRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListHostClustersRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListHostClustersRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListHostClustersRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListHostClustersRequest::getPageSize() const
{
    return pageSize_;
}

void ListHostClustersRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListHostClustersRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListHostClustersRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListHostClustersRequest::getSortField() const
{
    return sortField_;
}

void ListHostClustersRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListHostClustersRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListHostClustersRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListHostClustersRequest::getSortType() const
{
    return sortType_;
}

void ListHostClustersRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListHostClustersRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListHostClustersRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t ListHostClustersRequest::getIsProxyMode() const
{
    return isProxyMode_;
}

void ListHostClustersRequest::setIsProxyMode(int32_t value)
{
    isProxyMode_ = value;
    isProxyModeIsSet_ = true;
}

bool ListHostClustersRequest::isProxyModeIsSet() const
{
    return isProxyModeIsSet_;
}

void ListHostClustersRequest::unsetisProxyMode()
{
    isProxyModeIsSet_ = false;
}

std::string ListHostClustersRequest::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void ListHostClustersRequest::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool ListHostClustersRequest::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void ListHostClustersRequest::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

}
}
}
}
}


