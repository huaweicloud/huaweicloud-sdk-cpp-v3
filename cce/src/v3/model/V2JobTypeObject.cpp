

#include "huaweicloud/cce/v3/model/V2JobTypeObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




V2JobTypeObject::V2JobTypeObject()
{
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
}

V2JobTypeObject::~V2JobTypeObject() = default;

void V2JobTypeObject::validate()
{
}

web::json::value V2JobTypeObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }

    return val;
}
bool V2JobTypeObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    return ok;
}


std::string V2JobTypeObject::getUid() const
{
    return uid_;
}

void V2JobTypeObject::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool V2JobTypeObject::uidIsSet() const
{
    return uidIsSet_;
}

void V2JobTypeObject::unsetuid()
{
    uidIsSet_ = false;
}

std::string V2JobTypeObject::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void V2JobTypeObject::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool V2JobTypeObject::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void V2JobTypeObject::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string V2JobTypeObject::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void V2JobTypeObject::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool V2JobTypeObject::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void V2JobTypeObject::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


