

#include "huaweicloud/cloudtest/v1/model/ShowIteratorByDefectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIteratorByDefectRequest::ShowIteratorByDefectRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    defectId_ = "";
    defectIdIsSet_ = false;
}

ShowIteratorByDefectRequest::~ShowIteratorByDefectRequest() = default;

void ShowIteratorByDefectRequest::validate()
{
}

web::json::value ShowIteratorByDefectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(defectIdIsSet_) {
        val[utility::conversions::to_string_t("defect_id")] = ModelBase::toJson(defectId_);
    }

    return val;
}
bool ShowIteratorByDefectRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("defect_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defect_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefectId(refVal);
        }
    }
    return ok;
}


std::string ShowIteratorByDefectRequest::getProjectId() const
{
    return projectId_;
}

void ShowIteratorByDefectRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIteratorByDefectRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIteratorByDefectRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowIteratorByDefectRequest::getDefectId() const
{
    return defectId_;
}

void ShowIteratorByDefectRequest::setDefectId(const std::string& value)
{
    defectId_ = value;
    defectIdIsSet_ = true;
}

bool ShowIteratorByDefectRequest::defectIdIsSet() const
{
    return defectIdIsSet_;
}

void ShowIteratorByDefectRequest::unsetdefectId()
{
    defectIdIsSet_ = false;
}

}
}
}
}
}


