

#include "huaweicloud/cloudtest/v1/model/ListTestBranchesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestBranchesResponse::ListTestBranchesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListTestBranchesResponse::~ListTestBranchesResponse() = default;

void ListTestBranchesResponse::validate()
{
}

web::json::value ListTestBranchesResponse::toJson() const
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
bool ListTestBranchesResponse::fromJson(const web::json::value& val)
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


std::string ListTestBranchesResponse::getStatus() const
{
    return status_;
}

void ListTestBranchesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTestBranchesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListTestBranchesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestVersionVo ListTestBranchesResponse::getResult() const
{
    return result_;
}

void ListTestBranchesResponse::setResult(const ResultValueListTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListTestBranchesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListTestBranchesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


