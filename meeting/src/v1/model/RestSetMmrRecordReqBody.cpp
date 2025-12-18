

#include "huaweicloud/meeting/v1/model/RestSetMmrRecordReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSetMmrRecordReqBody::RestSetMmrRecordReqBody()
{
    recordType_ = 0;
    recordTypeIsSet_ = false;
}

RestSetMmrRecordReqBody::~RestSetMmrRecordReqBody() = default;

void RestSetMmrRecordReqBody::validate()
{
}

web::json::value RestSetMmrRecordReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordTypeIsSet_) {
        val[utility::conversions::to_string_t("recordType")] = ModelBase::toJson(recordType_);
    }

    return val;
}
bool RestSetMmrRecordReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recordType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordType(refVal);
        }
    }
    return ok;
}


int32_t RestSetMmrRecordReqBody::getRecordType() const
{
    return recordType_;
}

void RestSetMmrRecordReqBody::setRecordType(int32_t value)
{
    recordType_ = value;
    recordTypeIsSet_ = true;
}

bool RestSetMmrRecordReqBody::recordTypeIsSet() const
{
    return recordTypeIsSet_;
}

void RestSetMmrRecordReqBody::unsetrecordType()
{
    recordTypeIsSet_ = false;
}

}
}
}
}
}


