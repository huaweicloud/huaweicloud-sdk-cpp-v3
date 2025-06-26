

#include "huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




SaveTemplateUsedInfoResponse::SaveTemplateUsedInfoResponse()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SaveTemplateUsedInfoResponse::~SaveTemplateUsedInfoResponse() = default;

void SaveTemplateUsedInfoResponse::validate()
{
}

web::json::value SaveTemplateUsedInfoResponse::toJson() const
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
bool SaveTemplateUsedInfoResponse::fromJson(const web::json::value& val)
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


std::string SaveTemplateUsedInfoResponse::getResult() const
{
    return result_;
}

void SaveTemplateUsedInfoResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SaveTemplateUsedInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SaveTemplateUsedInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string SaveTemplateUsedInfoResponse::getError() const
{
    return error_;
}

void SaveTemplateUsedInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool SaveTemplateUsedInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void SaveTemplateUsedInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string SaveTemplateUsedInfoResponse::getStatus() const
{
    return status_;
}

void SaveTemplateUsedInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SaveTemplateUsedInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SaveTemplateUsedInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


