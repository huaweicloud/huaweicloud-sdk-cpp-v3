

#include "huaweicloud/lts/v2/model/AccessConfigFormat.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormat::AccessConfigFormat()
{
    singleIsSet_ = false;
    multiIsSet_ = false;
}

AccessConfigFormat::~AccessConfigFormat() = default;

void AccessConfigFormat::validate()
{
}

web::json::value AccessConfigFormat::toJson() const
{
    web::json::value val = web::json::value::object();

    if(singleIsSet_) {
        val[utility::conversions::to_string_t("single")] = ModelBase::toJson(single_);
    }
    if(multiIsSet_) {
        val[utility::conversions::to_string_t("multi")] = ModelBase::toJson(multi_);
    }

    return val;
}

bool AccessConfigFormat::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("single"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatSingle refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatMutil refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMulti(refVal);
        }
    }
    return ok;
}


AccessConfigFormatSingle AccessConfigFormat::getSingle() const
{
    return single_;
}

void AccessConfigFormat::setSingle(const AccessConfigFormatSingle& value)
{
    single_ = value;
    singleIsSet_ = true;
}

bool AccessConfigFormat::singleIsSet() const
{
    return singleIsSet_;
}

void AccessConfigFormat::unsetsingle()
{
    singleIsSet_ = false;
}

AccessConfigFormatMutil AccessConfigFormat::getMulti() const
{
    return multi_;
}

void AccessConfigFormat::setMulti(const AccessConfigFormatMutil& value)
{
    multi_ = value;
    multiIsSet_ = true;
}

bool AccessConfigFormat::multiIsSet() const
{
    return multiIsSet_;
}

void AccessConfigFormat::unsetmulti()
{
    multiIsSet_ = false;
}

}
}
}
}
}


