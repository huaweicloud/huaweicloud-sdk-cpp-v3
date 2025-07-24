

#include "huaweicloud/cloudtest/v1/model/IteratorVersionsQueryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IteratorVersionsQueryInfo::IteratorVersionsQueryInfo()
{
    name_ = "";
    nameIsSet_ = false;
    filterIsSet_ = false;
    own_ = false;
    ownIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
    ownerIdsIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

IteratorVersionsQueryInfo::~IteratorVersionsQueryInfo() = default;

void IteratorVersionsQueryInfo::validate()
{
}

web::json::value IteratorVersionsQueryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(ownIsSet_) {
        val[utility::conversions::to_string_t("own")] = ModelBase::toJson(own_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }
    if(ownerIdsIsSet_) {
        val[utility::conversions::to_string_t("owner_ids")] = ModelBase::toJson(ownerIds_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool IteratorVersionsQueryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            IteratorListFilterInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("own"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("own"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
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
    return ok;
}


std::string IteratorVersionsQueryInfo::getName() const
{
    return name_;
}

void IteratorVersionsQueryInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IteratorVersionsQueryInfo::nameIsSet() const
{
    return nameIsSet_;
}

void IteratorVersionsQueryInfo::unsetname()
{
    nameIsSet_ = false;
}

IteratorListFilterInfo IteratorVersionsQueryInfo::getFilter() const
{
    return filter_;
}

void IteratorVersionsQueryInfo::setFilter(const IteratorListFilterInfo& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool IteratorVersionsQueryInfo::filterIsSet() const
{
    return filterIsSet_;
}

void IteratorVersionsQueryInfo::unsetfilter()
{
    filterIsSet_ = false;
}

bool IteratorVersionsQueryInfo::isOwn() const
{
    return own_;
}

void IteratorVersionsQueryInfo::setOwn(bool value)
{
    own_ = value;
    ownIsSet_ = true;
}

bool IteratorVersionsQueryInfo::ownIsSet() const
{
    return ownIsSet_;
}

void IteratorVersionsQueryInfo::unsetown()
{
    ownIsSet_ = false;
}

std::string IteratorVersionsQueryInfo::getBranchUri() const
{
    return branchUri_;
}

void IteratorVersionsQueryInfo::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool IteratorVersionsQueryInfo::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void IteratorVersionsQueryInfo::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

std::string IteratorVersionsQueryInfo::getIteratorUri() const
{
    return iteratorUri_;
}

void IteratorVersionsQueryInfo::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool IteratorVersionsQueryInfo::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void IteratorVersionsQueryInfo::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

std::vector<std::string>& IteratorVersionsQueryInfo::getOwnerIds()
{
    return ownerIds_;
}

void IteratorVersionsQueryInfo::setOwnerIds(const std::vector<std::string>& value)
{
    ownerIds_ = value;
    ownerIdsIsSet_ = true;
}

bool IteratorVersionsQueryInfo::ownerIdsIsSet() const
{
    return ownerIdsIsSet_;
}

void IteratorVersionsQueryInfo::unsetownerIds()
{
    ownerIdsIsSet_ = false;
}

std::string IteratorVersionsQueryInfo::getProjectUuid() const
{
    return projectUuid_;
}

void IteratorVersionsQueryInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool IteratorVersionsQueryInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void IteratorVersionsQueryInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string IteratorVersionsQueryInfo::getCurrentStage() const
{
    return currentStage_;
}

void IteratorVersionsQueryInfo::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool IteratorVersionsQueryInfo::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void IteratorVersionsQueryInfo::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

int32_t IteratorVersionsQueryInfo::getPageNo() const
{
    return pageNo_;
}

void IteratorVersionsQueryInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool IteratorVersionsQueryInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void IteratorVersionsQueryInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t IteratorVersionsQueryInfo::getPageSize() const
{
    return pageSize_;
}

void IteratorVersionsQueryInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool IteratorVersionsQueryInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void IteratorVersionsQueryInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


