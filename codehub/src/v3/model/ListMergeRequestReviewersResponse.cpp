

#include "huaweicloud/codehub/v3/model/ListMergeRequestReviewersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListMergeRequestReviewersResponse::ListMergeRequestReviewersResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListMergeRequestReviewersResponse::~ListMergeRequestReviewersResponse() = default;

void ListMergeRequestReviewersResponse::validate()
{
}

web::json::value ListMergeRequestReviewersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListMergeRequestReviewersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            MergeRequestApprovalReviewersDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


MergeRequestApprovalReviewersDto ListMergeRequestReviewersResponse::getResult() const
{
    return result_;
}

void ListMergeRequestReviewersResponse::setResult(const MergeRequestApprovalReviewersDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMergeRequestReviewersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMergeRequestReviewersResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListMergeRequestReviewersResponse::getStatus() const
{
    return status_;
}

void ListMergeRequestReviewersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMergeRequestReviewersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMergeRequestReviewersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


