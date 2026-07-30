

#include "huaweicloud/modelarts/v1/model/WorkflowScheduleUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowScheduleUpdate::WorkflowScheduleUpdate()
{
    contentIsSet_ = false;
    enable_ = false;
    enableIsSet_ = false;
}

WorkflowScheduleUpdate::~WorkflowScheduleUpdate() = default;

void WorkflowScheduleUpdate::validate()
{
}

web::json::value WorkflowScheduleUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }

    return val;
}
bool WorkflowScheduleUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& WorkflowScheduleUpdate::getContent()
{
    return content_;
}

void WorkflowScheduleUpdate::setContent(const std::map<std::string, Object>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool WorkflowScheduleUpdate::contentIsSet() const
{
    return contentIsSet_;
}

void WorkflowScheduleUpdate::unsetcontent()
{
    contentIsSet_ = false;
}

bool WorkflowScheduleUpdate::isEnable() const
{
    return enable_;
}

void WorkflowScheduleUpdate::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool WorkflowScheduleUpdate::enableIsSet() const
{
    return enableIsSet_;
}

void WorkflowScheduleUpdate::unsetenable()
{
    enableIsSet_ = false;
}

}
}
}
}
}


