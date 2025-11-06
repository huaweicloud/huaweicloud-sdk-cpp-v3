

#include "huaweicloud/codeartsrepo/v3/model/AddProtectBranchV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddProtectBranchV2Response::AddProtectBranchV2Response()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddProtectBranchV2Response::~AddProtectBranchV2Response() = default;

void AddProtectBranchV2Response::validate()
{
}

web::json::value AddProtectBranchV2Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AddProtectBranchV2Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            AddProtectResponse refVal;
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


Error AddProtectBranchV2Response::getError() const
{
    return error_;
}

void AddProtectBranchV2Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddProtectBranchV2Response::errorIsSet() const
{
    return errorIsSet_;
}

void AddProtectBranchV2Response::unseterror()
{
    errorIsSet_ = false;
}

AddProtectResponse AddProtectBranchV2Response::getResult() const
{
    return result_;
}

void AddProtectBranchV2Response::setResult(const AddProtectResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddProtectBranchV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void AddProtectBranchV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddProtectBranchV2Response::getStatus() const
{
    return status_;
}

void AddProtectBranchV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddProtectBranchV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void AddProtectBranchV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


