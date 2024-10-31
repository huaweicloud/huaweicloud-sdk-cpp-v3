

#include "huaweicloud/cfw/v1/model/FailedEipInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FailedEipInfo::FailedEipInfo()
{
    id_ = "";
    idIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

FailedEipInfo::~FailedEipInfo() = default;

void FailedEipInfo::validate()
{
}

web::json::value FailedEipInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool FailedEipInfo::fromJson(const web::json::value& val)
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


std::string FailedEipInfo::getId() const
{
    return id_;
}

void FailedEipInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FailedEipInfo::idIsSet() const
{
    return idIsSet_;
}

void FailedEipInfo::unsetid()
{
    idIsSet_ = false;
}

std::string FailedEipInfo::getErrorMessage() const
{
    return errorMessage_;
}

void FailedEipInfo::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool FailedEipInfo::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void FailedEipInfo::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


