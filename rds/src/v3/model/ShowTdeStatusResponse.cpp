

#include "huaweicloud/rds/v3/model/ShowTdeStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTdeStatusResponse::ShowTdeStatusResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    tdeStatus_ = "";
    tdeStatusIsSet_ = false;
}

ShowTdeStatusResponse::~ShowTdeStatusResponse() = default;

void ShowTdeStatusResponse::validate()
{
}

web::json::value ShowTdeStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(tdeStatusIsSet_) {
        val[utility::conversions::to_string_t("tde_status")] = ModelBase::toJson(tdeStatus_);
    }

    return val;
}
bool ShowTdeStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tde_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tde_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTdeStatus(refVal);
        }
    }
    return ok;
}


std::string ShowTdeStatusResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowTdeStatusResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTdeStatusResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTdeStatusResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowTdeStatusResponse::getTdeStatus() const
{
    return tdeStatus_;
}

void ShowTdeStatusResponse::setTdeStatus(const std::string& value)
{
    tdeStatus_ = value;
    tdeStatusIsSet_ = true;
}

bool ShowTdeStatusResponse::tdeStatusIsSet() const
{
    return tdeStatusIsSet_;
}

void ShowTdeStatusResponse::unsettdeStatus()
{
    tdeStatusIsSet_ = false;
}

}
}
}
}
}


