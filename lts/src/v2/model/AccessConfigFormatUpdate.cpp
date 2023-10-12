

#include "huaweicloud/lts/v2/model/AccessConfigFormatUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatUpdate::AccessConfigFormatUpdate()
{
    singleIsSet_ = false;
    multiIsSet_ = false;
}

AccessConfigFormatUpdate::~AccessConfigFormatUpdate() = default;

void AccessConfigFormatUpdate::validate()
{
}

web::json::value AccessConfigFormatUpdate::toJson() const
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
bool AccessConfigFormatUpdate::fromJson(const web::json::value& val)
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


AccessConfigFormatSingle AccessConfigFormatUpdate::getSingle() const
{
    return single_;
}

void AccessConfigFormatUpdate::setSingle(const AccessConfigFormatSingle& value)
{
    single_ = value;
    singleIsSet_ = true;
}

bool AccessConfigFormatUpdate::singleIsSet() const
{
    return singleIsSet_;
}

void AccessConfigFormatUpdate::unsetsingle()
{
    singleIsSet_ = false;
}

AccessConfigFormatMutil AccessConfigFormatUpdate::getMulti() const
{
    return multi_;
}

void AccessConfigFormatUpdate::setMulti(const AccessConfigFormatMutil& value)
{
    multi_ = value;
    multiIsSet_ = true;
}

bool AccessConfigFormatUpdate::multiIsSet() const
{
    return multiIsSet_;
}

void AccessConfigFormatUpdate::unsetmulti()
{
    multiIsSet_ = false;
}

}
}
}
}
}


