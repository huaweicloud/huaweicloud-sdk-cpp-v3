

#include "huaweicloud/cfw/v1/model/ListJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListJobResponse::ListJobResponse()
{
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
    dataIsSet_ = false;
}

ListJobResponse::~ListJobResponse() = default;

void ListJobResponse::validate()
{
}

web::json::value ListJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string ListJobResponse::getErrorCode() const
{
    return errorCode_;
}

void ListJobResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool ListJobResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void ListJobResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string ListJobResponse::getErrorMsg() const
{
    return errorMsg_;
}

void ListJobResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ListJobResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ListJobResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

Object ListJobResponse::getData() const
{
    return data_;
}

void ListJobResponse::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListJobResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListJobResponse::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


