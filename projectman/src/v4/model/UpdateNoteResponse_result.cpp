

#include "huaweicloud/projectman/v4/model/UpdateNoteResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateNoteResponse_result::UpdateNoteResponse_result()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateNoteResponse_result::~UpdateNoteResponse_result() = default;

void UpdateNoteResponse_result::validate()
{
}

web::json::value UpdateNoteResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateNoteResponse_result::fromJson(const web::json::value& val)
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


std::string UpdateNoteResponse_result::getStatus() const
{
    return status_;
}

void UpdateNoteResponse_result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNoteResponse_result::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNoteResponse_result::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


