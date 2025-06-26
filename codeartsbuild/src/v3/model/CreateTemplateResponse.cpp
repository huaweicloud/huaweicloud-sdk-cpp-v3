

#include "huaweicloud/codeartsbuild/v3/model/CreateTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateTemplateResponse::CreateTemplateResponse()
{
    status_ = "";
    statusIsSet_ = false;
    resultIsSet_ = false;
}

CreateTemplateResponse::~CreateTemplateResponse() = default;

void CreateTemplateResponse::validate()
{
}

web::json::value CreateTemplateResponse::toJson() const
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
bool CreateTemplateResponse::fromJson(const web::json::value& val)
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
            StatusSuccessResultWithUUID_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateTemplateResponse::getStatus() const
{
    return status_;
}

void CreateTemplateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateTemplateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateTemplateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

StatusSuccessResultWithUUID_result CreateTemplateResponse::getResult() const
{
    return result_;
}

void CreateTemplateResponse::setResult(const StatusSuccessResultWithUUID_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateTemplateResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateTemplateResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


