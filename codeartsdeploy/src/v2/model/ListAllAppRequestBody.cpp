

#include "huaweicloud/codeartsdeploy/v2/model/ListAllAppRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAllAppRequestBody::ListAllAppRequestBody()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    sortName_ = "";
    sortNameIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    statesIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

ListAllAppRequestBody::~ListAllAppRequestBody() = default;

void ListAllAppRequestBody::validate()
{
}

web::json::value ListAllAppRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(sortNameIsSet_) {
        val[utility::conversions::to_string_t("sort_name")] = ModelBase::toJson(sortName_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(statesIsSet_) {
        val[utility::conversions::to_string_t("states")] = ModelBase::toJson(states_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ListAllAppRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sort_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("states"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("states"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStates(refVal);
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
    return ok;
}


std::string ListAllAppRequestBody::getProjectId() const
{
    return projectId_;
}

void ListAllAppRequestBody::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListAllAppRequestBody::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListAllAppRequestBody::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListAllAppRequestBody::getPage() const
{
    return page_;
}

void ListAllAppRequestBody::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListAllAppRequestBody::pageIsSet() const
{
    return pageIsSet_;
}

void ListAllAppRequestBody::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListAllAppRequestBody::getSize() const
{
    return size_;
}

void ListAllAppRequestBody::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListAllAppRequestBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListAllAppRequestBody::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ListAllAppRequestBody::getSortName() const
{
    return sortName_;
}

void ListAllAppRequestBody::setSortName(const std::string& value)
{
    sortName_ = value;
    sortNameIsSet_ = true;
}

bool ListAllAppRequestBody::sortNameIsSet() const
{
    return sortNameIsSet_;
}

void ListAllAppRequestBody::unsetsortName()
{
    sortNameIsSet_ = false;
}

std::string ListAllAppRequestBody::getSortBy() const
{
    return sortBy_;
}

void ListAllAppRequestBody::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListAllAppRequestBody::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListAllAppRequestBody::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::vector<std::string>& ListAllAppRequestBody::getStates()
{
    return states_;
}

void ListAllAppRequestBody::setStates(const std::vector<std::string>& value)
{
    states_ = value;
    statesIsSet_ = true;
}

bool ListAllAppRequestBody::statesIsSet() const
{
    return statesIsSet_;
}

void ListAllAppRequestBody::unsetstates()
{
    statesIsSet_ = false;
}

std::string ListAllAppRequestBody::getGroupId() const
{
    return groupId_;
}

void ListAllAppRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListAllAppRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListAllAppRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


