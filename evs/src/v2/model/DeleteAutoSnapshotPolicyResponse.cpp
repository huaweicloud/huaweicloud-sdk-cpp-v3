

#include "huaweicloud/evs/v2/model/DeleteAutoSnapshotPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteAutoSnapshotPolicyResponse::DeleteAutoSnapshotPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteAutoSnapshotPolicyResponse::~DeleteAutoSnapshotPolicyResponse() = default;

void DeleteAutoSnapshotPolicyResponse::validate()
{
}

web::json::value DeleteAutoSnapshotPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteAutoSnapshotPolicyResponse::fromJson(const web::json::value& val)
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


std::string DeleteAutoSnapshotPolicyResponse::getBody() const
{
    return body_;
}

void DeleteAutoSnapshotPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteAutoSnapshotPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteAutoSnapshotPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


