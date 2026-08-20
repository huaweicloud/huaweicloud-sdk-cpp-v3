

#include "huaweicloud/projectman/v4/model/DeleteIpdLabelRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdLabelRequest::DeleteIpdLabelRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    labelId_ = "";
    labelIdIsSet_ = false;
}

DeleteIpdLabelRequest::~DeleteIpdLabelRequest() = default;

void DeleteIpdLabelRequest::validate()
{
}

web::json::value DeleteIpdLabelRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(labelIdIsSet_) {
        val[utility::conversions::to_string_t("label_id")] = ModelBase::toJson(labelId_);
    }

    return val;
}
bool DeleteIpdLabelRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("label_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelId(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdLabelRequest::getProjectId() const
{
    return projectId_;
}

void DeleteIpdLabelRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIpdLabelRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIpdLabelRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteIpdLabelRequest::getLabelId() const
{
    return labelId_;
}

void DeleteIpdLabelRequest::setLabelId(const std::string& value)
{
    labelId_ = value;
    labelIdIsSet_ = true;
}

bool DeleteIpdLabelRequest::labelIdIsSet() const
{
    return labelIdIsSet_;
}

void DeleteIpdLabelRequest::unsetlabelId()
{
    labelIdIsSet_ = false;
}

}
}
}
}
}


