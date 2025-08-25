

#include "huaweicloud/cce/v3/model/BatchSyncNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




BatchSyncNodesResponse::BatchSyncNodesResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

BatchSyncNodesResponse::~BatchSyncNodesResponse() = default;

void BatchSyncNodesResponse::validate()
{
}

web::json::value BatchSyncNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchSyncNodesResponse::fromJson(const web::json::value& val)
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


std::string BatchSyncNodesResponse::getBody() const
{
    return body_;
}

void BatchSyncNodesResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchSyncNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchSyncNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


