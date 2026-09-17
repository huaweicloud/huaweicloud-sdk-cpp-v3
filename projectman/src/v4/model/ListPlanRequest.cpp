

#include "huaweicloud/projectman/v4/model/ListPlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListPlanRequest::ListPlanRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    updatedTimeInterval_ = "";
    updatedTimeIntervalIsSet_ = false;
}

ListPlanRequest::~ListPlanRequest() = default;

void ListPlanRequest::validate()
{
}

web::json::value ListPlanRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(updatedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("updated_time_interval")] = ModelBase::toJson(updatedTimeInterval_);
    }

    return val;
}
bool ListPlanRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTimeInterval(refVal);
        }
    }
    return ok;
}


std::string ListPlanRequest::getProjectId() const
{
    return projectId_;
}

void ListPlanRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPlanRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPlanRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListPlanRequest::getKeyWord() const
{
    return keyWord_;
}

void ListPlanRequest::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool ListPlanRequest::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void ListPlanRequest::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string ListPlanRequest::getUpdatedTimeInterval() const
{
    return updatedTimeInterval_;
}

void ListPlanRequest::setUpdatedTimeInterval(const std::string& value)
{
    updatedTimeInterval_ = value;
    updatedTimeIntervalIsSet_ = true;
}

bool ListPlanRequest::updatedTimeIntervalIsSet() const
{
    return updatedTimeIntervalIsSet_;
}

void ListPlanRequest::unsetupdatedTimeInterval()
{
    updatedTimeIntervalIsSet_ = false;
}

}
}
}
}
}


