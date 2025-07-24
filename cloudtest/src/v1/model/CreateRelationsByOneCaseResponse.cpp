

#include "huaweicloud/cloudtest/v1/model/CreateRelationsByOneCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateRelationsByOneCaseResponse::CreateRelationsByOneCaseResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

CreateRelationsByOneCaseResponse::~CreateRelationsByOneCaseResponse() = default;

void CreateRelationsByOneCaseResponse::validate()
{
}

web::json::value CreateRelationsByOneCaseResponse::toJson() const
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
bool CreateRelationsByOneCaseResponse::fromJson(const web::json::value& val)
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
            ResultValueStringForOk refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateRelationsByOneCaseResponse::getStatus() const
{
    return status_;
}

void CreateRelationsByOneCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRelationsByOneCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRelationsByOneCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueStringForOk CreateRelationsByOneCaseResponse::getResult() const
{
    return result_;
}

void CreateRelationsByOneCaseResponse::setResult(const ResultValueStringForOk& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateRelationsByOneCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateRelationsByOneCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


