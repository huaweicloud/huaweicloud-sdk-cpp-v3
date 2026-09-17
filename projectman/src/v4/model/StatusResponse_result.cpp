

#include "huaweicloud/projectman/v4/model/StatusResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




StatusResponse_result::StatusResponse_result()
{
    statusIsSet_ = false;
}

StatusResponse_result::~StatusResponse_result() = default;

void StatusResponse_result::validate()
{
}

web::json::value StatusResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool StatusResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<StatusVoIpd> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::vector<StatusVoIpd>& StatusResponse_result::getStatus()
{
    return status_;
}

void StatusResponse_result::setStatus(const std::vector<StatusVoIpd>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StatusResponse_result::statusIsSet() const
{
    return statusIsSet_;
}

void StatusResponse_result::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


