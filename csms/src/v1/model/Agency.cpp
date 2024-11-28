

#include "huaweicloud/csms/v1/model/Agency.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Agency::Agency()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
    agencyId_ = "";
    agencyIdIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

Agency::~Agency() = default;

void Agency::validate()
{
}

web::json::value Agency::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(agencyIdIsSet_) {
        val[utility::conversions::to_string_t("agency_id")] = ModelBase::toJson(agencyId_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool Agency::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyId(refVal);
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


std::string Agency::getAgencyName() const
{
    return agencyName_;
}

void Agency::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool Agency::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void Agency::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string Agency::getAgencyId() const
{
    return agencyId_;
}

void Agency::setAgencyId(const std::string& value)
{
    agencyId_ = value;
    agencyIdIsSet_ = true;
}

bool Agency::agencyIdIsSet() const
{
    return agencyIdIsSet_;
}

void Agency::unsetagencyId()
{
    agencyIdIsSet_ = false;
}

std::string Agency::getErrorMsg() const
{
    return errorMsg_;
}

void Agency::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool Agency::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void Agency::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


