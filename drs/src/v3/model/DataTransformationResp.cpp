

#include "huaweicloud/drs/v3/model/DataTransformationResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DataTransformationResp::DataTransformationResp()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DataTransformationResp::~DataTransformationResp() = default;

void DataTransformationResp::validate()
{
}

web::json::value DataTransformationResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool DataTransformationResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string DataTransformationResp::getId() const
{
    return id_;
}

void DataTransformationResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DataTransformationResp::idIsSet() const
{
    return idIsSet_;
}

void DataTransformationResp::unsetid()
{
    idIsSet_ = false;
}

std::string DataTransformationResp::getStatus() const
{
    return status_;
}

void DataTransformationResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DataTransformationResp::statusIsSet() const
{
    return statusIsSet_;
}

void DataTransformationResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DataTransformationResp::getErrorCode() const
{
    return errorCode_;
}

void DataTransformationResp::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DataTransformationResp::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DataTransformationResp::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DataTransformationResp::getErrorMsg() const
{
    return errorMsg_;
}

void DataTransformationResp::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DataTransformationResp::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DataTransformationResp::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


