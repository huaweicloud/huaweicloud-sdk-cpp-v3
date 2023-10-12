

#include "huaweicloud/rds/v3/model/DeleteJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteJobResponse::DeleteJobResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteJobResponse::~DeleteJobResponse() = default;

void DeleteJobResponse::validate()
{
}

web::json::value DeleteJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteJobResponse::fromJson(const web::json::value& val)
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


std::string DeleteJobResponse::getBody() const
{
    return body_;
}

void DeleteJobResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteJobResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteJobResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


