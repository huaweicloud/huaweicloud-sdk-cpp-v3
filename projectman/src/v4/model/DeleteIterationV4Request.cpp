

#include "huaweicloud/projectman/v4/model/DeleteIterationV4Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIterationV4Request::DeleteIterationV4Request()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    iterationId_ = 0;
    iterationIdIsSet_ = false;
}

DeleteIterationV4Request::~DeleteIterationV4Request() = default;

void DeleteIterationV4Request::validate()
{
}

web::json::value DeleteIterationV4Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }

    return val;
}
bool DeleteIterationV4Request::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    return ok;
}


std::string DeleteIterationV4Request::getProjectId() const
{
    return projectId_;
}

void DeleteIterationV4Request::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteIterationV4Request::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteIterationV4Request::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t DeleteIterationV4Request::getIterationId() const
{
    return iterationId_;
}

void DeleteIterationV4Request::setIterationId(int32_t value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool DeleteIterationV4Request::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void DeleteIterationV4Request::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

}
}
}
}
}


