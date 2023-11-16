

#include "huaweicloud/cdn/v1/model/Quic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Quic::Quic()
{
    status_ = "";
    statusIsSet_ = false;
}

Quic::~Quic() = default;

void Quic::validate()
{
}

web::json::value Quic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool Quic::fromJson(const web::json::value& val)
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


std::string Quic::getStatus() const
{
    return status_;
}

void Quic::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Quic::statusIsSet() const
{
    return statusIsSet_;
}

void Quic::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


