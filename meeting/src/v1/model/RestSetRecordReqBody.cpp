

#include "huaweicloud/meeting/v1/model/RestSetRecordReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetRecordReqBody::RestSetRecordReqBody()
{
    isRecord_ = 0;
    isRecordIsSet_ = false;
}

RestSetRecordReqBody::~RestSetRecordReqBody() = default;

void RestSetRecordReqBody::validate()
{
}

web::json::value RestSetRecordReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isRecordIsSet_) {
        val[utility::conversions::to_string_t("isRecord")] = ModelBase::toJson(isRecord_);
    }

    return val;
}
bool RestSetRecordReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRecord(refVal);
        }
    }
    return ok;
}


int32_t RestSetRecordReqBody::getIsRecord() const
{
    return isRecord_;
}

void RestSetRecordReqBody::setIsRecord(int32_t value)
{
    isRecord_ = value;
    isRecordIsSet_ = true;
}

bool RestSetRecordReqBody::isRecordIsSet() const
{
    return isRecordIsSet_;
}

void RestSetRecordReqBody::unsetisRecord()
{
    isRecordIsSet_ = false;
}

}
}
}
}
}


