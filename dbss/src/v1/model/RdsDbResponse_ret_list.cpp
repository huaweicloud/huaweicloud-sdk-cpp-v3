

#include "huaweicloud/dbss/v1/model/RdsDbResponse_ret_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RdsDbResponse_ret_list::RdsDbResponse_ret_list()
{
    id_ = "";
    idIsSet_ = false;
    retStatus_ = "";
    retStatusIsSet_ = false;
    retMessage_ = "";
    retMessageIsSet_ = false;
}

RdsDbResponse_ret_list::~RdsDbResponse_ret_list() = default;

void RdsDbResponse_ret_list::validate()
{
}

web::json::value RdsDbResponse_ret_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(retStatusIsSet_) {
        val[utility::conversions::to_string_t("ret_status")] = ModelBase::toJson(retStatus_);
    }
    if(retMessageIsSet_) {
        val[utility::conversions::to_string_t("ret_message")] = ModelBase::toJson(retMessage_);
    }

    return val;
}
bool RdsDbResponse_ret_list::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ret_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ret_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ret_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ret_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetMessage(refVal);
        }
    }
    return ok;
}


std::string RdsDbResponse_ret_list::getId() const
{
    return id_;
}

void RdsDbResponse_ret_list::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RdsDbResponse_ret_list::idIsSet() const
{
    return idIsSet_;
}

void RdsDbResponse_ret_list::unsetid()
{
    idIsSet_ = false;
}

std::string RdsDbResponse_ret_list::getRetStatus() const
{
    return retStatus_;
}

void RdsDbResponse_ret_list::setRetStatus(const std::string& value)
{
    retStatus_ = value;
    retStatusIsSet_ = true;
}

bool RdsDbResponse_ret_list::retStatusIsSet() const
{
    return retStatusIsSet_;
}

void RdsDbResponse_ret_list::unsetretStatus()
{
    retStatusIsSet_ = false;
}

std::string RdsDbResponse_ret_list::getRetMessage() const
{
    return retMessage_;
}

void RdsDbResponse_ret_list::setRetMessage(const std::string& value)
{
    retMessage_ = value;
    retMessageIsSet_ = true;
}

bool RdsDbResponse_ret_list::retMessageIsSet() const
{
    return retMessageIsSet_;
}

void RdsDbResponse_ret_list::unsetretMessage()
{
    retMessageIsSet_ = false;
}

}
}
}
}
}


