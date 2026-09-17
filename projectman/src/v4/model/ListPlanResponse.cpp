

#include "huaweicloud/projectman/v4/model/ListPlanResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListPlanResponse::ListPlanResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
    pageIsSet_ = false;
}

ListPlanResponse::~ListPlanResponse() = default;

void ListPlanResponse::validate()
{
}

web::json::value ListPlanResponse::toJson() const
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
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListPlanResponse::fromJson(const web::json::value& val)
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
            std::vector<PlanResponseResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PlanListResponse_page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::string ListPlanResponse::getStatus() const
{
    return status_;
}

void ListPlanResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPlanResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListPlanResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPlanResponse::getMessage() const
{
    return message_;
}

void ListPlanResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListPlanResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListPlanResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<PlanResponseResult>& ListPlanResponse::getResult()
{
    return result_;
}

void ListPlanResponse::setResult(const std::vector<PlanResponseResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListPlanResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListPlanResponse::unsetresult()
{
    resultIsSet_ = false;
}

PlanListResponse_page ListPlanResponse::getPage() const
{
    return page_;
}

void ListPlanResponse::setPage(const PlanListResponse_page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListPlanResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListPlanResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


