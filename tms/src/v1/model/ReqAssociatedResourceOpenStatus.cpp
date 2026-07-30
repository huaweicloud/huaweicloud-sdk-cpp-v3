

#include "huaweicloud/tms/v1/model/ReqAssociatedResourceOpenStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ReqAssociatedResourceOpenStatus::ReqAssociatedResourceOpenStatus()
{
    status_ = "";
    statusIsSet_ = false;
}

ReqAssociatedResourceOpenStatus::~ReqAssociatedResourceOpenStatus() = default;

void ReqAssociatedResourceOpenStatus::validate()
{
}

web::json::value ReqAssociatedResourceOpenStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ReqAssociatedResourceOpenStatus::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ReqAssociatedResourceOpenStatus::getStatus() const
{
    return status_;
}

void ReqAssociatedResourceOpenStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ReqAssociatedResourceOpenStatus::statusIsSet() const
{
    return statusIsSet_;
}

void ReqAssociatedResourceOpenStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


