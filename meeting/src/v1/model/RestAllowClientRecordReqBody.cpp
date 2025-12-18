

#include "huaweicloud/meeting/v1/model/RestAllowClientRecordReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestAllowClientRecordReqBody::RestAllowClientRecordReqBody()
{
    allowClientRecord_ = 0;
    allowClientRecordIsSet_ = false;
}

RestAllowClientRecordReqBody::~RestAllowClientRecordReqBody() = default;

void RestAllowClientRecordReqBody::validate()
{
}

web::json::value RestAllowClientRecordReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allowClientRecordIsSet_) {
        val[utility::conversions::to_string_t("allowClientRecord")] = ModelBase::toJson(allowClientRecord_);
    }

    return val;
}
bool RestAllowClientRecordReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allowClientRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowClientRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowClientRecord(refVal);
        }
    }
    return ok;
}


int32_t RestAllowClientRecordReqBody::getAllowClientRecord() const
{
    return allowClientRecord_;
}

void RestAllowClientRecordReqBody::setAllowClientRecord(int32_t value)
{
    allowClientRecord_ = value;
    allowClientRecordIsSet_ = true;
}

bool RestAllowClientRecordReqBody::allowClientRecordIsSet() const
{
    return allowClientRecordIsSet_;
}

void RestAllowClientRecordReqBody::unsetallowClientRecord()
{
    allowClientRecordIsSet_ = false;
}

}
}
}
}
}


