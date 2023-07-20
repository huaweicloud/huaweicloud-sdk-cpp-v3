

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceOpsWindowResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceOpsWindowResponse::UpdateGaussMySqlInstanceOpsWindowResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceOpsWindowResponse::~UpdateGaussMySqlInstanceOpsWindowResponse() = default;

void UpdateGaussMySqlInstanceOpsWindowResponse::validate()
{
}

web::json::value UpdateGaussMySqlInstanceOpsWindowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateGaussMySqlInstanceOpsWindowResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlInstanceOpsWindowResponse::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceOpsWindowResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceOpsWindowResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceOpsWindowResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


