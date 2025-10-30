

#include "huaweicloud/lts/v2/model/CreateDashBoardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateDashBoardResponse::CreateDashBoardResponse()
{
    chartsIsSet_ = false;
    filtersIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    lastUpdateTime_ = 0L;
    lastUpdateTimeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    useSystemTemplate_ = false;
    useSystemTemplateIsSet_ = false;
    conciseModeEnable_ = false;
    conciseModeEnableIsSet_ = false;
    tagsIsSet_ = false;
}

CreateDashBoardResponse::~CreateDashBoardResponse() = default;

void CreateDashBoardResponse::validate()
{
}

web::json::value CreateDashBoardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(chartsIsSet_) {
        val[utility::conversions::to_string_t("charts")] = ModelBase::toJson(charts_);
    }
    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(filters_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(useSystemTemplateIsSet_) {
        val[utility::conversions::to_string_t("useSystemTemplate")] = ModelBase::toJson(useSystemTemplate_);
    }
    if(conciseModeEnableIsSet_) {
        val[utility::conversions::to_string_t("concise_mode_enable")] = ModelBase::toJson(conciseModeEnable_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateDashBoardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("charts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filters"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useSystemTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useSystemTemplate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseSystemTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concise_mode_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concise_mode_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConciseModeEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateDashBoardResponse::getCharts()
{
    return charts_;
}

void CreateDashBoardResponse::setCharts(const std::vector<std::string>& value)
{
    charts_ = value;
    chartsIsSet_ = true;
}

bool CreateDashBoardResponse::chartsIsSet() const
{
    return chartsIsSet_;
}

void CreateDashBoardResponse::unsetcharts()
{
    chartsIsSet_ = false;
}

std::vector<std::string>& CreateDashBoardResponse::getFilters()
{
    return filters_;
}

void CreateDashBoardResponse::setFilters(const std::vector<std::string>& value)
{
    filters_ = value;
    filtersIsSet_ = true;
}

bool CreateDashBoardResponse::filtersIsSet() const
{
    return filtersIsSet_;
}

void CreateDashBoardResponse::unsetfilters()
{
    filtersIsSet_ = false;
}

std::string CreateDashBoardResponse::getGroupName() const
{
    return groupName_;
}

void CreateDashBoardResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool CreateDashBoardResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void CreateDashBoardResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string CreateDashBoardResponse::getId() const
{
    return id_;
}

void CreateDashBoardResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateDashBoardResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateDashBoardResponse::unsetid()
{
    idIsSet_ = false;
}

int64_t CreateDashBoardResponse::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void CreateDashBoardResponse::setLastUpdateTime(int64_t value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool CreateDashBoardResponse::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void CreateDashBoardResponse::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string CreateDashBoardResponse::getProjectId() const
{
    return projectId_;
}

void CreateDashBoardResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateDashBoardResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateDashBoardResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateDashBoardResponse::getTitle() const
{
    return title_;
}

void CreateDashBoardResponse::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool CreateDashBoardResponse::titleIsSet() const
{
    return titleIsSet_;
}

void CreateDashBoardResponse::unsettitle()
{
    titleIsSet_ = false;
}

bool CreateDashBoardResponse::isUseSystemTemplate() const
{
    return useSystemTemplate_;
}

void CreateDashBoardResponse::setUseSystemTemplate(bool value)
{
    useSystemTemplate_ = value;
    useSystemTemplateIsSet_ = true;
}

bool CreateDashBoardResponse::useSystemTemplateIsSet() const
{
    return useSystemTemplateIsSet_;
}

void CreateDashBoardResponse::unsetuseSystemTemplate()
{
    useSystemTemplateIsSet_ = false;
}

bool CreateDashBoardResponse::isConciseModeEnable() const
{
    return conciseModeEnable_;
}

void CreateDashBoardResponse::setConciseModeEnable(bool value)
{
    conciseModeEnable_ = value;
    conciseModeEnableIsSet_ = true;
}

bool CreateDashBoardResponse::conciseModeEnableIsSet() const
{
    return conciseModeEnableIsSet_;
}

void CreateDashBoardResponse::unsetconciseModeEnable()
{
    conciseModeEnableIsSet_ = false;
}

std::vector<ResourceTag>& CreateDashBoardResponse::getTags()
{
    return tags_;
}

void CreateDashBoardResponse::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateDashBoardResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateDashBoardResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


