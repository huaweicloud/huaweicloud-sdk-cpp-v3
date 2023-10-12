

#include "huaweicloud/cdn/v1/model/Follow302StatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




Follow302StatusRequest::Follow302StatusRequest()
{
    follow302Status_ = "";
    follow302StatusIsSet_ = false;
}

Follow302StatusRequest::~Follow302StatusRequest() = default;

void Follow302StatusRequest::validate()
{
}

web::json::value Follow302StatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(follow302StatusIsSet_) {
        val[utility::conversions::to_string_t("follow302_status")] = ModelBase::toJson(follow302Status_);
    }

    return val;
}
bool Follow302StatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("follow302_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow302_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollow302Status(refVal);
        }
    }
    return ok;
}


std::string Follow302StatusRequest::getFollow302Status() const
{
    return follow302Status_;
}

void Follow302StatusRequest::setFollow302Status(const std::string& value)
{
    follow302Status_ = value;
    follow302StatusIsSet_ = true;
}

bool Follow302StatusRequest::follow302StatusIsSet() const
{
    return follow302StatusIsSet_;
}

void Follow302StatusRequest::unsetfollow302Status()
{
    follow302StatusIsSet_ = false;
}

}
}
}
}
}


