

#include "huaweicloud/gaussdb/v3/model/UpdateAutoKillProcessStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateAutoKillProcessStatusRequestBody::UpdateAutoKillProcessStatusRequestBody()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateAutoKillProcessStatusRequestBody::~UpdateAutoKillProcessStatusRequestBody() = default;

void UpdateAutoKillProcessStatusRequestBody::validate()
{
}

web::json::value UpdateAutoKillProcessStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateAutoKillProcessStatusRequestBody::fromJson(const web::json::value& val)
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


std::string UpdateAutoKillProcessStatusRequestBody::getStatus() const
{
    return status_;
}

void UpdateAutoKillProcessStatusRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAutoKillProcessStatusRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAutoKillProcessStatusRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


