

#include "huaweicloud/modelarts/v1/model/ListTrainingJobTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobTasksResponse::ListTrainingJobTasksResponse()
{
    bodyIsSet_ = false;
}

ListTrainingJobTasksResponse::~ListTrainingJobTasksResponse() = default;

void ListTrainingJobTasksResponse::validate()
{
}

web::json::value ListTrainingJobTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTrainingJobTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskHistory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TaskHistory>& ListTrainingJobTasksResponse::getBody()
{
    return body_;
}

void ListTrainingJobTasksResponse::setBody(const std::vector<TaskHistory>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTrainingJobTasksResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTrainingJobTasksResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


