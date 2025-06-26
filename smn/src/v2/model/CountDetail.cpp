

#include "huaweicloud/smn/v2/model/CountDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CountDetail::CountDetail()
{
    sms_ = 0;
    smsIsSet_ = false;
}

CountDetail::~CountDetail() = default;

void CountDetail::validate()
{
}

web::json::value CountDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(smsIsSet_) {
        val[utility::conversions::to_string_t("sms")] = ModelBase::toJson(sms_);
    }

    return val;
}
bool CountDetail::fromJson(const web::json::value& val)
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


int32_t CountDetail::getSms() const
{
    return sms_;
}

void CountDetail::setSms(int32_t value)
{
    sms_ = value;
    smsIsSet_ = true;
}

bool CountDetail::smsIsSet() const
{
    return smsIsSet_;
}

void CountDetail::unsetsms()
{
    smsIsSet_ = false;
}

}
}
}
}
}


