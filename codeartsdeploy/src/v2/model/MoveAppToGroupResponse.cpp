

#include "huaweicloud/codeartsdeploy/v2/model/MoveAppToGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




MoveAppToGroupResponse::MoveAppToGroupResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

MoveAppToGroupResponse::~MoveAppToGroupResponse() = default;

void MoveAppToGroupResponse::validate()
{
}

web::json::value MoveAppToGroupResponse::toJson() const
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
bool MoveAppToGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<MoveAppToGroupResult> refVal;
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


std::vector<MoveAppToGroupResult>& MoveAppToGroupResponse::getResult()
{
    return result_;
}

void MoveAppToGroupResponse::setResult(const std::vector<MoveAppToGroupResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool MoveAppToGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void MoveAppToGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string MoveAppToGroupResponse::getStatus() const
{
    return status_;
}

void MoveAppToGroupResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MoveAppToGroupResponse::statusIsSet() const
{
    return statusIsSet_;
}

void MoveAppToGroupResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


