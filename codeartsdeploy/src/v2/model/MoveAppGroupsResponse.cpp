

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppGroupsResponse::MoveAppGroupsResponse()
{
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

MoveAppGroupsResponse::~MoveAppGroupsResponse() = default;

void MoveAppGroupsResponse::validate()
{
}

web::json::value MoveAppGroupsResponse::toJson() const
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
bool MoveAppGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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


std::string MoveAppGroupsResponse::getResult() const
{
    return result_;
}

void MoveAppGroupsResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool MoveAppGroupsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void MoveAppGroupsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string MoveAppGroupsResponse::getStatus() const
{
    return status_;
}

void MoveAppGroupsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MoveAppGroupsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void MoveAppGroupsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


