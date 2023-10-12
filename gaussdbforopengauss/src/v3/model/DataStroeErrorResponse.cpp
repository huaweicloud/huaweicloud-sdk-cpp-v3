

#include "huaweicloud/gaussdbforopengauss/v3/model/DataStroeErrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DataStroeErrorResponse::DataStroeErrorResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

DataStroeErrorResponse::~DataStroeErrorResponse() = default;

void DataStroeErrorResponse::validate()
{
}

web::json::value DataStroeErrorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool DataStroeErrorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DataStroeErrorResponse::getErrorCode() const
{
    return errorCode_;
}

void DataStroeErrorResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool DataStroeErrorResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void DataStroeErrorResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string DataStroeErrorResponse::getErrorMsg() const
{
    return errorMsg_;
}

void DataStroeErrorResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool DataStroeErrorResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void DataStroeErrorResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


