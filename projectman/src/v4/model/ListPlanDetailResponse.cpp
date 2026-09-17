

#include "huaweicloud/projectman/v4/model/ListPlanDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListPlanDetailResponse::ListPlanDetailResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ListPlanDetailResponse::~ListPlanDetailResponse() = default;

void ListPlanDetailResponse::validate()
{
}

web::json::value ListPlanDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListPlanDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PlanResponseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListPlanDetailResponse::getStatus() const
{
    return status_;
}

void ListPlanDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPlanDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListPlanDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPlanDetailResponse::getMessage() const
{
    return message_;
}

void ListPlanDetailResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListPlanDetailResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListPlanDetailResponse::unsetmessage()
{
    messageIsSet_ = false;
}

PlanResponseResult ListPlanDetailResponse::getResult() const
{
    return result_;
}

void ListPlanDetailResponse::setResult(const PlanResponseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListPlanDetailResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListPlanDetailResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


