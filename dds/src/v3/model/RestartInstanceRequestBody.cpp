

#include "huaweicloud/dds/v3/model/RestartInstanceRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestartInstanceRequestBody::RestartInstanceRequestBody()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
}

RestartInstanceRequestBody::~RestartInstanceRequestBody() = default;

void RestartInstanceRequestBody::validate()
{
}

web::json::value RestartInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }

    return val;
}

bool RestartInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    return ok;
}

std::string RestartInstanceRequestBody::getTargetType() const
{
    return targetType_;
}

void RestartInstanceRequestBody::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool RestartInstanceRequestBody::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void RestartInstanceRequestBody::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string RestartInstanceRequestBody::getTargetId() const
{
    return targetId_;
}

void RestartInstanceRequestBody::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool RestartInstanceRequestBody::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void RestartInstanceRequestBody::unsettargetId()
{
    targetIdIsSet_ = false;
}

}
}
}
}
}


