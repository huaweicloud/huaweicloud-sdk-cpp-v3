

#include "huaweicloud/smn/v2/model/SumCountDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




SumCountDetail::SumCountDetail()
{
    sms_ = 0;
    smsIsSet_ = false;
}

SumCountDetail::~SumCountDetail() = default;

void SumCountDetail::validate()
{
}

web::json::value SumCountDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }

    return val;
}
bool SumCountDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sms"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sms"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSms(refVal);
        }
    }
    return ok;
}


int32_t SumCountDetail::getSms() const
{
    return sms_;
}

void SumCountDetail::setSms(int32_t value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool SumCountDetail::smsIsSet() const
{
    return smsIsSet_;
}

void SumCountDetail::unsetsms()
{
    smsIsSet_ = false;
}

}
}
}
}
}


