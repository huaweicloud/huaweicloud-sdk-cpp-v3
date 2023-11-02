

#include "huaweicloud/dbss/v1/model/BatchSwitchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchSwitchesRequest::BatchSwitchesRequest()
{
    ids_ = "";
    idsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BatchSwitchesRequest::~BatchSwitchesRequest() = default;

void BatchSwitchesRequest::validate()
{
}

web::json::value BatchSwitchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BatchSwitchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
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


std::string BatchSwitchesRequest::getIds() const
{
    return ids_;
}

void BatchSwitchesRequest::setIds(const std::string& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchSwitchesRequest::idsIsSet() const
{
    return idsIsSet_;
}

void BatchSwitchesRequest::unsetids()
{
    idsIsSet_ = false;
}

std::string BatchSwitchesRequest::getStatus() const
{
    return status_;
}

void BatchSwitchesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchSwitchesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void BatchSwitchesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


