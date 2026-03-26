

#include "huaweicloud/gaussdb/v3/model/DeleteStarRockLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarRockLtsConfigResponse::DeleteStarRockLtsConfigResponse()
{
    bodyIsSet_ = false;
}

DeleteStarRockLtsConfigResponse::~DeleteStarRockLtsConfigResponse() = default;

void DeleteStarRockLtsConfigResponse::validate()
{
}

web::json::value DeleteStarRockLtsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteStarRockLtsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object DeleteStarRockLtsConfigResponse::getBody() const
{
    return body_;
}

void DeleteStarRockLtsConfigResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteStarRockLtsConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteStarRockLtsConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


