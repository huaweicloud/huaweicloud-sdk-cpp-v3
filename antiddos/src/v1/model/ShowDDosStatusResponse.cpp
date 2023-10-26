

#include "huaweicloud/antiddos/v1/model/ShowDDosStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowDDosStatusResponse::ShowDDosStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

ShowDDosStatusResponse::~ShowDDosStatusResponse() = default;

void ShowDDosStatusResponse::validate()
{
}

web::json::value ShowDDosStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowDDosStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowDDosStatusResponse::getStatus() const
{
    return status_;
}

void ShowDDosStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDDosStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDDosStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


