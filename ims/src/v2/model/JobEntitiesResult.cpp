

#include "huaweicloud/ims/v2/model/JobEntitiesResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




JobEntitiesResult::JobEntitiesResult()
{
    imageId_ = "";
    imageIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

JobEntitiesResult::~JobEntitiesResult() = default;

void JobEntitiesResult::validate()
{
}

web::json::value JobEntitiesResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool JobEntitiesResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string JobEntitiesResult::getImageId() const
{
    return imageId_;
}

void JobEntitiesResult::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool JobEntitiesResult::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void JobEntitiesResult::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string JobEntitiesResult::getProjectId() const
{
    return projectId_;
}

void JobEntitiesResult::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool JobEntitiesResult::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void JobEntitiesResult::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string JobEntitiesResult::getStatus() const
{
    return status_;
}

void JobEntitiesResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobEntitiesResult::statusIsSet() const
{
    return statusIsSet_;
}

void JobEntitiesResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


