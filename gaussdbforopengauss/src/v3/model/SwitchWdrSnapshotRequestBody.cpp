

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchWdrSnapshotRequestBody::SwitchWdrSnapshotRequestBody()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchWdrSnapshotRequestBody::~SwitchWdrSnapshotRequestBody() = default;

void SwitchWdrSnapshotRequestBody::validate()
{
}

web::json::value SwitchWdrSnapshotRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchWdrSnapshotRequestBody::fromJson(const web::json::value& val)
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


std::string SwitchWdrSnapshotRequestBody::getStatus() const
{
    return status_;
}

void SwitchWdrSnapshotRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchWdrSnapshotRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchWdrSnapshotRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


