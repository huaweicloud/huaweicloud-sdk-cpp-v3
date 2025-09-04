

#include "huaweicloud/codeartsbuild/v3/model/MoveGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




MoveGroupResponse::MoveGroupResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

MoveGroupResponse::~MoveGroupResponse() = default;

void MoveGroupResponse::validate()
{
}

web::json::value MoveGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool MoveGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<MoveJobGroupResponseBody_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


std::vector<MoveJobGroupResponseBody_result>& MoveGroupResponse::getResult()
{
    return result_;
}

void MoveGroupResponse::setResult(const std::vector<MoveJobGroupResponseBody_result>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool MoveGroupResponse::resultIsSet() const
{
    return resultIsSet_;
}

void MoveGroupResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string MoveGroupResponse::getError() const
{
    return error_;
}

void MoveGroupResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool MoveGroupResponse::errorIsSet() const
{
    return errorIsSet_;
}

void MoveGroupResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string MoveGroupResponse::getStatus() const
{
    return status_;
}

void MoveGroupResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MoveGroupResponse::statusIsSet() const
{
    return statusIsSet_;
}

void MoveGroupResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


