

#include "huaweicloud/gaussdbfornosql/v3/model/OfflineNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




OfflineNodesResponse::OfflineNodesResponse()
{
    bodyIsSet_ = false;
}

OfflineNodesResponse::~OfflineNodesResponse() = default;

void OfflineNodesResponse::validate()
{
}

web::json::value OfflineNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool OfflineNodesResponse::fromJson(const web::json::value& val)
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


Object OfflineNodesResponse::getBody() const
{
    return body_;
}

void OfflineNodesResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool OfflineNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void OfflineNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


