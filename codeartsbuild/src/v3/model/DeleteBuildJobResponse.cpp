

#include "huaweicloud/codeartsbuild/v3/model/DeleteBuildJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteBuildJobResponse::DeleteBuildJobResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DeleteBuildJobResponse::~DeleteBuildJobResponse() = default;

void DeleteBuildJobResponse::validate()
{
}

web::json::value DeleteBuildJobResponse::toJson() const
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
bool DeleteBuildJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            DeleteBuildJobResponseBody_result refVal;
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


DeleteBuildJobResponseBody_result DeleteBuildJobResponse::getResult() const
{
    return result_;
}

void DeleteBuildJobResponse::setResult(const DeleteBuildJobResponseBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteBuildJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteBuildJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DeleteBuildJobResponse::getStatus() const
{
    return status_;
}

void DeleteBuildJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteBuildJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteBuildJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


