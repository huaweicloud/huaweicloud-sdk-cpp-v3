

#include "huaweicloud/gaussdb/v3/model/DeleteHtapProcessListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteHtapProcessListResponse::DeleteHtapProcessListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    msg_ = "";
    msgIsSet_ = false;
}

DeleteHtapProcessListResponse::~DeleteHtapProcessListResponse() = default;

void DeleteHtapProcessListResponse::validate()
{
}

web::json::value DeleteHtapProcessListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(msgIsSet_) {
        val[utility::conversions::to_string_t("msg")] = ModelBase::toJson(msg_);
    }

    return val;
}
bool DeleteHtapProcessListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMsg(refVal);
        }
    }
    return ok;
}


std::string DeleteHtapProcessListResponse::getStatus() const
{
    return status_;
}

void DeleteHtapProcessListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteHtapProcessListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteHtapProcessListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteHtapProcessListResponse::getMsg() const
{
    return msg_;
}

void DeleteHtapProcessListResponse::setMsg(const std::string& value)
{
    msg_ = value;
    msgIsSet_ = true;
}

bool DeleteHtapProcessListResponse::msgIsSet() const
{
    return msgIsSet_;
}

void DeleteHtapProcessListResponse::unsetmsg()
{
    msgIsSet_ = false;
}

}
}
}
}
}


