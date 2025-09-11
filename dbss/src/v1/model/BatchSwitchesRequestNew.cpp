

#include "huaweicloud/dbss/v1/model/BatchSwitchesRequestNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




BatchSwitchesRequestNew::BatchSwitchesRequestNew()
{
    idsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BatchSwitchesRequestNew::~BatchSwitchesRequestNew() = default;

void BatchSwitchesRequestNew::validate()
{
}

web::json::value BatchSwitchesRequestNew::toJson() const
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
bool BatchSwitchesRequestNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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


std::vector<std::string>& BatchSwitchesRequestNew::getIds()
{
    return ids_;
}

void BatchSwitchesRequestNew::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool BatchSwitchesRequestNew::idsIsSet() const
{
    return idsIsSet_;
}

void BatchSwitchesRequestNew::unsetids()
{
    idsIsSet_ = false;
}

std::string BatchSwitchesRequestNew::getStatus() const
{
    return status_;
}

void BatchSwitchesRequestNew::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchSwitchesRequestNew::statusIsSet() const
{
    return statusIsSet_;
}

void BatchSwitchesRequestNew::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


