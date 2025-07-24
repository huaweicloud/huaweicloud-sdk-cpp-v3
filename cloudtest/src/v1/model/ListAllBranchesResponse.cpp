

#include "huaweicloud/cloudtest/v1/model/ListAllBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllBranchesResponse::ListAllBranchesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListAllBranchesResponse::~ListAllBranchesResponse() = default;

void ListAllBranchesResponse::validate()
{
}

web::json::value ListAllBranchesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListAllBranchesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ResultValueListTestVersionVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListAllBranchesResponse::getStatus() const
{
    return status_;
}

void ListAllBranchesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAllBranchesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAllBranchesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestVersionVo ListAllBranchesResponse::getResult() const
{
    return result_;
}

void ListAllBranchesResponse::setResult(const ResultValueListTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAllBranchesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAllBranchesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


