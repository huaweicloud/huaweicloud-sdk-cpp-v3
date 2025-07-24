

#include "huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteRelationsByOneCaseResponse::DeleteRelationsByOneCaseResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

DeleteRelationsByOneCaseResponse::~DeleteRelationsByOneCaseResponse() = default;

void DeleteRelationsByOneCaseResponse::validate()
{
}

web::json::value DeleteRelationsByOneCaseResponse::toJson() const
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
bool DeleteRelationsByOneCaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteRelationsByOneCaseResponse::getStatus() const
{
    return status_;
}

void DeleteRelationsByOneCaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRelationsByOneCaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRelationsByOneCaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

ResultValueStringForOk DeleteRelationsByOneCaseResponse::getResult() const
{
    return result_;
}

void DeleteRelationsByOneCaseResponse::setResult(const ResultValueStringForOk& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteRelationsByOneCaseResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteRelationsByOneCaseResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


