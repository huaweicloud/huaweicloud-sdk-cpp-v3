

#include "huaweicloud/csms/v1/model/ErrorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ErrorInfo::ErrorInfo()
{
    name_ = "";
    nameIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

ErrorInfo::~ErrorInfo() = default;

void ErrorInfo::validate()
{
}

web::json::value ErrorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool ErrorInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string ErrorInfo::getName() const
{
    return name_;
}

void ErrorInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ErrorInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ErrorInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ErrorInfo::getErrorMsg() const
{
    return errorMsg_;
}

void ErrorInfo::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool ErrorInfo::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void ErrorInfo::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


