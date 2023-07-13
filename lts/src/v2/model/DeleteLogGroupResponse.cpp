

#include "huaweicloud/lts/v2/model/DeleteLogGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DeleteLogGroupResponse::DeleteLogGroupResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteLogGroupResponse::~DeleteLogGroupResponse() = default;

void DeleteLogGroupResponse::validate()
{
}

web::json::value DeleteLogGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteLogGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteLogGroupResponse::getBody() const
{
    return body_;
}

void DeleteLogGroupResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteLogGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteLogGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


