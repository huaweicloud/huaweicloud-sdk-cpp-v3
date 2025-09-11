

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateWdrSnapshotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateWdrSnapshotResponse::CreateWdrSnapshotResponse()
{
    bodyIsSet_ = false;
}

CreateWdrSnapshotResponse::~CreateWdrSnapshotResponse() = default;

void CreateWdrSnapshotResponse::validate()
{
}

web::json::value CreateWdrSnapshotResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWdrSnapshotResponse::fromJson(const web::json::value& val)
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


Object CreateWdrSnapshotResponse::getBody() const
{
    return body_;
}

void CreateWdrSnapshotResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWdrSnapshotResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWdrSnapshotResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


