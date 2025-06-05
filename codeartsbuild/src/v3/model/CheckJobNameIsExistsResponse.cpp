

#include "huaweicloud/codeartsbuild/v3/model/CheckJobNameIsExistsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CheckJobNameIsExistsResponse::CheckJobNameIsExistsResponse()
{
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CheckJobNameIsExistsResponse::~CheckJobNameIsExistsResponse() = default;

void CheckJobNameIsExistsResponse::validate()
{
}

web::json::value CheckJobNameIsExistsResponse::toJson() const
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
bool CheckJobNameIsExistsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
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


bool CheckJobNameIsExistsResponse::isResult() const
{
    return result_;
}

void CheckJobNameIsExistsResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CheckJobNameIsExistsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CheckJobNameIsExistsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string CheckJobNameIsExistsResponse::getStatus() const
{
    return status_;
}

void CheckJobNameIsExistsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckJobNameIsExistsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CheckJobNameIsExistsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


