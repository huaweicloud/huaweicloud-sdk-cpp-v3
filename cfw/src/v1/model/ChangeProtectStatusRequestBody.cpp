

#include "huaweicloud/cfw/v1/model/ChangeProtectStatusRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeProtectStatusRequestBody::ChangeProtectStatusRequestBody()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ChangeProtectStatusRequestBody::~ChangeProtectStatusRequestBody() = default;

void ChangeProtectStatusRequestBody::validate()
{
}

web::json::value ChangeProtectStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool ChangeProtectStatusRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string ChangeProtectStatusRequestBody::getObjectId() const
{
    return objectId_;
}

void ChangeProtectStatusRequestBody::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ChangeProtectStatusRequestBody::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ChangeProtectStatusRequestBody::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ChangeProtectStatusRequestBody::getStatus() const
{
    return status_;
}

void ChangeProtectStatusRequestBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChangeProtectStatusRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void ChangeProtectStatusRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


