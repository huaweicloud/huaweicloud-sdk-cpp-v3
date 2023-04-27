

#include "huaweicloud/lts/v2/model/Event.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Event::Event()
{
    metadataIsSet_ = false;
    startsAt_ = 0L;
    startsAtIsSet_ = false;
}

Event::~Event() = default;

void Event::validate()
{
}

web::json::value Event::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(startsAtIsSet_) {
        val[utility::conversions::to_string_t("starts_at")] = ModelBase::toJson(startsAt_);
    }

    return val;
}

bool Event::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("starts_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("starts_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartsAt(refVal);
        }
    }
    return ok;
}


Metadata Event::getMetadata() const
{
    return metadata_;
}

void Event::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Event::metadataIsSet() const
{
    return metadataIsSet_;
}

void Event::unsetmetadata()
{
    metadataIsSet_ = false;
}

int64_t Event::getStartsAt() const
{
    return startsAt_;
}

void Event::setStartsAt(int64_t value)
{
    startsAt_ = value;
    startsAtIsSet_ = true;
}

bool Event::startsAtIsSet() const
{
    return startsAtIsSet_;
}

void Event::unsetstartsAt()
{
    startsAtIsSet_ = false;
}

}
}
}
}
}


