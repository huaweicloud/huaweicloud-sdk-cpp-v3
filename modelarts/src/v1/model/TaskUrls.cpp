

#include "huaweicloud/modelarts/v1/model/TaskUrls.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskUrls::TaskUrls()
{
    task_ = "";
    taskIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

TaskUrls::~TaskUrls() = default;

void TaskUrls::validate()
{
}

web::json::value TaskUrls::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool TaskUrls::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string TaskUrls::getTask() const
{
    return task_;
}

void TaskUrls::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool TaskUrls::taskIsSet() const
{
    return taskIsSet_;
}

void TaskUrls::unsettask()
{
    taskIsSet_ = false;
}

std::string TaskUrls::getUrl() const
{
    return url_;
}

void TaskUrls::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TaskUrls::urlIsSet() const
{
    return urlIsSet_;
}

void TaskUrls::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


