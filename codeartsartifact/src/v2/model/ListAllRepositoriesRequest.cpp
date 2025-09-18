

#include "huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAllRepositoriesRequest::ListAllRepositoriesRequest()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    qname_ = "";
    qnameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    formatList_ = "";
    formatListIsSet_ = false;
    isRecycleBin_ = false;
    isRecycleBinIsSet_ = false;
    isNeedPaging_ = false;
    isNeedPagingIsSet_ = false;
    inProject_ = false;
    inProjectIsSet_ = false;
}

ListAllRepositoriesRequest::~ListAllRepositoriesRequest() = default;

void ListAllRepositoriesRequest::validate()
{
}

web::json::value ListAllRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(qnameIsSet_) {
        val[utility::conversions::to_string_t("qname")] = ModelBase::toJson(qname_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(formatListIsSet_) {
        val[utility::conversions::to_string_t("format_list")] = ModelBase::toJson(formatList_);
    }
    if(isRecycleBinIsSet_) {
        val[utility::conversions::to_string_t("is_recycle_bin")] = ModelBase::toJson(isRecycleBin_);
    }
    if(isNeedPagingIsSet_) {
        val[utility::conversions::to_string_t("is_need_paging")] = ModelBase::toJson(isNeedPaging_);
    }
    if(inProjectIsSet_) {
        val[utility::conversions::to_string_t("in_project")] = ModelBase::toJson(inProject_);
    }

    return val;
}
bool ListAllRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormatList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_recycle_bin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_recycle_bin"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecycleBin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_need_paging"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_paging"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedPaging(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in_project"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInProject(refVal);
        }
    }
    return ok;
}


std::string ListAllRepositoriesRequest::getTenantId() const
{
    return tenantId_;
}

void ListAllRepositoriesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListAllRepositoriesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListAllRepositoriesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getGroupId() const
{
    return groupId_;
}

void ListAllRepositoriesRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListAllRepositoriesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListAllRepositoriesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListAllRepositoriesRequest::getPageNo() const
{
    return pageNo_;
}

void ListAllRepositoriesRequest::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListAllRepositoriesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListAllRepositoriesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListAllRepositoriesRequest::getPageSize() const
{
    return pageSize_;
}

void ListAllRepositoriesRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListAllRepositoriesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListAllRepositoriesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getSort() const
{
    return sort_;
}

void ListAllRepositoriesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListAllRepositoriesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListAllRepositoriesRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getQname() const
{
    return qname_;
}

void ListAllRepositoriesRequest::setQname(const std::string& value)
{
    qname_ = value;
    qnameIsSet_ = true;
}

bool ListAllRepositoriesRequest::qnameIsSet() const
{
    return qnameIsSet_;
}

void ListAllRepositoriesRequest::unsetqname()
{
    qnameIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getType() const
{
    return type_;
}

void ListAllRepositoriesRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAllRepositoriesRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAllRepositoriesRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getFormat() const
{
    return format_;
}

void ListAllRepositoriesRequest::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ListAllRepositoriesRequest::formatIsSet() const
{
    return formatIsSet_;
}

void ListAllRepositoriesRequest::unsetformat()
{
    formatIsSet_ = false;
}

std::string ListAllRepositoriesRequest::getFormatList() const
{
    return formatList_;
}

void ListAllRepositoriesRequest::setFormatList(const std::string& value)
{
    formatList_ = value;
    formatListIsSet_ = true;
}

bool ListAllRepositoriesRequest::formatListIsSet() const
{
    return formatListIsSet_;
}

void ListAllRepositoriesRequest::unsetformatList()
{
    formatListIsSet_ = false;
}

bool ListAllRepositoriesRequest::isIsRecycleBin() const
{
    return isRecycleBin_;
}

void ListAllRepositoriesRequest::setIsRecycleBin(bool value)
{
    isRecycleBin_ = value;
    isRecycleBinIsSet_ = true;
}

bool ListAllRepositoriesRequest::isRecycleBinIsSet() const
{
    return isRecycleBinIsSet_;
}

void ListAllRepositoriesRequest::unsetisRecycleBin()
{
    isRecycleBinIsSet_ = false;
}

bool ListAllRepositoriesRequest::isIsNeedPaging() const
{
    return isNeedPaging_;
}

void ListAllRepositoriesRequest::setIsNeedPaging(bool value)
{
    isNeedPaging_ = value;
    isNeedPagingIsSet_ = true;
}

bool ListAllRepositoriesRequest::isNeedPagingIsSet() const
{
    return isNeedPagingIsSet_;
}

void ListAllRepositoriesRequest::unsetisNeedPaging()
{
    isNeedPagingIsSet_ = false;
}

bool ListAllRepositoriesRequest::isInProject() const
{
    return inProject_;
}

void ListAllRepositoriesRequest::setInProject(bool value)
{
    inProject_ = value;
    inProjectIsSet_ = true;
}

bool ListAllRepositoriesRequest::inProjectIsSet() const
{
    return inProjectIsSet_;
}

void ListAllRepositoriesRequest::unsetinProject()
{
    inProjectIsSet_ = false;
}

}
}
}
}
}


