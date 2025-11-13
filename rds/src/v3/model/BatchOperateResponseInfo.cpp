

#include "huaweicloud/rds/v3/model/BatchOperateResponseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchOperateResponseInfo::BatchOperateResponseInfo()
{
    id_ = "";
    idIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

BatchOperateResponseInfo::~BatchOperateResponseInfo() = default;

void BatchOperateResponseInfo::validate()
{
}

web::json::value BatchOperateResponseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool BatchOperateResponseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string BatchOperateResponseInfo::getId() const
{
    return id_;
}

void BatchOperateResponseInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchOperateResponseInfo::idIsSet() const
{
    return idIsSet_;
}

void BatchOperateResponseInfo::unsetid()
{
    idIsSet_ = false;
}

std::string BatchOperateResponseInfo::getResult() const
{
    return result_;
}

void BatchOperateResponseInfo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchOperateResponseInfo::resultIsSet() const
{
    return resultIsSet_;
}

void BatchOperateResponseInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchOperateResponseInfo::getErrorMessage() const
{
    return errorMessage_;
}

void BatchOperateResponseInfo::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool BatchOperateResponseInfo::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void BatchOperateResponseInfo::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


