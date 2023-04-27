

#include "huaweicloud/lts/v2/model/AccessConfigFormatCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatCreate::AccessConfigFormatCreate()
{
    singleIsSet_ = false;
    multiIsSet_ = false;
}

AccessConfigFormatCreate::~AccessConfigFormatCreate() = default;

void AccessConfigFormatCreate::validate()
{
}

web::json::value AccessConfigFormatCreate::toJson() const
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

bool AccessConfigFormatCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("single"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatSingleCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi"));
        if(!fieldValue.is_null())
        {
            AccessConfigFormatMutilCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMulti(refVal);
        }
    }
    return ok;
}


AccessConfigFormatSingleCreate AccessConfigFormatCreate::getSingle() const
{
    return single_;
}

void AccessConfigFormatCreate::setSingle(const AccessConfigFormatSingleCreate& value)
{
    single_ = value;
    singleIsSet_ = true;
}

bool AccessConfigFormatCreate::singleIsSet() const
{
    return singleIsSet_;
}

void AccessConfigFormatCreate::unsetsingle()
{
    singleIsSet_ = false;
}

AccessConfigFormatMutilCreate AccessConfigFormatCreate::getMulti() const
{
    return multi_;
}

void AccessConfigFormatCreate::setMulti(const AccessConfigFormatMutilCreate& value)
{
    multi_ = value;
    multiIsSet_ = true;
}

bool AccessConfigFormatCreate::multiIsSet() const
{
    return multiIsSet_;
}

void AccessConfigFormatCreate::unsetmulti()
{
    multiIsSet_ = false;
}

}
}
}
}
}


