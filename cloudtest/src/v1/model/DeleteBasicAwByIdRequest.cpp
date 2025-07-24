

#include "huaweicloud/cloudtest/v1/model/DeleteBasicAwByIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteBasicAwByIdRequest::DeleteBasicAwByIdRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    awId_ = "";
    awIdIsSet_ = false;
}

DeleteBasicAwByIdRequest::~DeleteBasicAwByIdRequest() = default;

void DeleteBasicAwByIdRequest::validate()
{
}

web::json::value DeleteBasicAwByIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(awIdIsSet_) {
        val[utility::conversions::to_string_t("aw_id")] = ModelBase::toJson(awId_);
    }

    return val;
}
bool DeleteBasicAwByIdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("aw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAwId(refVal);
        }
    }
    return ok;
}


std::string DeleteBasicAwByIdRequest::getProjectId() const
{
    return projectId_;
}

void DeleteBasicAwByIdRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteBasicAwByIdRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteBasicAwByIdRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeleteBasicAwByIdRequest::getAwId() const
{
    return awId_;
}

void DeleteBasicAwByIdRequest::setAwId(const std::string& value)
{
    awId_ = value;
    awIdIsSet_ = true;
}

bool DeleteBasicAwByIdRequest::awIdIsSet() const
{
    return awIdIsSet_;
}

void DeleteBasicAwByIdRequest::unsetawId()
{
    awIdIsSet_ = false;
}

}
}
}
}
}


