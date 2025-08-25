

#include "huaweicloud/cce/v3/model/PrecheckTaskMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PrecheckTaskMetadata::PrecheckTaskMetadata()
{
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
}

PrecheckTaskMetadata::~PrecheckTaskMetadata() = default;

void PrecheckTaskMetadata::validate()
{
}

web::json::value PrecheckTaskMetadata::toJson() const
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
bool PrecheckTaskMetadata::fromJson(const web::json::value& val)
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


std::string PrecheckTaskMetadata::getUid() const
{
    return uid_;
}

void PrecheckTaskMetadata::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool PrecheckTaskMetadata::uidIsSet() const
{
    return uidIsSet_;
}

void PrecheckTaskMetadata::unsetuid()
{
    uidIsSet_ = false;
}

std::string PrecheckTaskMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void PrecheckTaskMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool PrecheckTaskMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void PrecheckTaskMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string PrecheckTaskMetadata::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void PrecheckTaskMetadata::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool PrecheckTaskMetadata::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void PrecheckTaskMetadata::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

}
}
}
}
}


