

#include "huaweicloud/mpc/v1/model/ListTranscodeDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListTranscodeDetailRequest::ListTranscodeDetailRequest()
{
    taskIdIsSet_ = false;
}

ListTranscodeDetailRequest::~ListTranscodeDetailRequest() = default;

void ListTranscodeDetailRequest::validate()
{
}

web::json::value ListTranscodeDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool ListTranscodeDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& ListTranscodeDetailRequest::getTaskId()
{
    return taskId_;
}

void ListTranscodeDetailRequest::setTaskId(const std::vector<std::string>& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTranscodeDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTranscodeDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


