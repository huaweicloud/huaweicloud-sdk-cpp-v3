

#include "huaweicloud/cloudtest/v1/model/ShowStatisticByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowStatisticByIdRequest::ShowStatisticByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    mindmapId_ = "";
    mindmapIdIsSet_ = false;
}

ShowStatisticByIdRequest::~ShowStatisticByIdRequest() = default;

void ShowStatisticByIdRequest::validate()
{
}

web::json::value ShowStatisticByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(mindmapIdIsSet_) {
        val[utility::conversions::to_string_t("mindmap_id")] = ModelBase::toJson(mindmapId_);
    }

    return val;
}
bool ShowStatisticByIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mindmap_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mindmap_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMindmapId(refVal);
        }
    }
    return ok;
}


std::string ShowStatisticByIdRequest::getProjectId() const
{
    return projectId_;
}

void ShowStatisticByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowStatisticByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowStatisticByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowStatisticByIdRequest::getMindmapId() const
{
    return mindmapId_;
}

void ShowStatisticByIdRequest::setMindmapId(const std::string& value)
{
    mindmapId_ = value;
    mindmapIdIsSet_ = true;
}

bool ShowStatisticByIdRequest::mindmapIdIsSet() const
{
    return mindmapIdIsSet_;
}

void ShowStatisticByIdRequest::unsetmindmapId()
{
    mindmapIdIsSet_ = false;
}

}
}
}
}
}


