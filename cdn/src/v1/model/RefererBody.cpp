

#include "huaweicloud/cdn/v1/model/RefererBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




RefererBody::RefererBody()
{
    refererIsSet_ = false;
}

RefererBody::~RefererBody() = default;

void RefererBody::validate()
{
}

web::json::value RefererBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refererIsSet_) {
        val[utility::conversions::to_string_t("referer")] = ModelBase::toJson(referer_);
    }

    return val;
}

bool RefererBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("referer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referer"));
        if(!fieldValue.is_null())
        {
            Referer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferer(refVal);
        }
    }
    return ok;
}

Referer RefererBody::getReferer() const
{
    return referer_;
}

void RefererBody::setReferer(const Referer& value)
{
    referer_ = value;
    refererIsSet_ = true;
}

bool RefererBody::refererIsSet() const
{
    return refererIsSet_;
}

void RefererBody::unsetreferer()
{
    refererIsSet_ = false;
}

}
}
}
}
}


