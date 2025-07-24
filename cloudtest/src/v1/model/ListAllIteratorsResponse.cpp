

#include "huaweicloud/cloudtest/v1/model/ListAllIteratorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllIteratorsResponse::ListAllIteratorsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

ListAllIteratorsResponse::~ListAllIteratorsResponse() = default;

void ListAllIteratorsResponse::validate()
{
}

web::json::value ListAllIteratorsResponse::toJson() const
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
bool ListAllIteratorsResponse::fromJson(const web::json::value& val)
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


std::string ListAllIteratorsResponse::getStatus() const
{
    return status_;
}

void ListAllIteratorsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAllIteratorsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAllIteratorsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueListTestVersionVo ListAllIteratorsResponse::getResult() const
{
    return result_;
}

void ListAllIteratorsResponse::setResult(const ResultValueListTestVersionVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAllIteratorsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAllIteratorsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


