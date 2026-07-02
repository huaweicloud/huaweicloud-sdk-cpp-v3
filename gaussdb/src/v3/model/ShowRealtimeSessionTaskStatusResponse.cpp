

#include "huaweicloud/gaussdb/v3/model/ShowRealtimeSessionTaskStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowRealtimeSessionTaskStatusResponse::ShowRealtimeSessionTaskStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowRealtimeSessionTaskStatusResponse::~ShowRealtimeSessionTaskStatusResponse() = default;

void ShowRealtimeSessionTaskStatusResponse::validate()
{
}

web::json::value ShowRealtimeSessionTaskStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowRealtimeSessionTaskStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowRealtimeSessionTaskStatusResponse::getStatus() const
{
    return status_;
}

void ShowRealtimeSessionTaskStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRealtimeSessionTaskStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRealtimeSessionTaskStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


