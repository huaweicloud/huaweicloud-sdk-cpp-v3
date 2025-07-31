

#include "huaweicloud/cfw/v1/model/AttackTrendRespBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AttackTrendRespBody::AttackTrendRespBody()
{
    denyCount_ = 0L;
    denyCountIsSet_ = false;
    permitCount_ = 0L;
    permitCountIsSet_ = false;
    time_ = 0L;
    timeIsSet_ = false;
}

AttackTrendRespBody::~AttackTrendRespBody() = default;

void AttackTrendRespBody::validate()
{
}

web::json::value AttackTrendRespBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(denyCountIsSet_) {
        val[utility::conversions::to_string_t("deny_count")] = ModelBase::toJson(denyCount_);
    }
    if(permitCountIsSet_) {
        val[utility::conversions::to_string_t("permit_count")] = ModelBase::toJson(permitCount_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool AttackTrendRespBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deny_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deny_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDenyCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


int64_t AttackTrendRespBody::getDenyCount() const
{
    return denyCount_;
}

void AttackTrendRespBody::setDenyCount(int64_t value)
{
    denyCount_ = value;
    denyCountIsSet_ = true;
}

bool AttackTrendRespBody::denyCountIsSet() const
{
    return denyCountIsSet_;
}

void AttackTrendRespBody::unsetdenyCount()
{
    denyCountIsSet_ = false;
}

int64_t AttackTrendRespBody::getPermitCount() const
{
    return permitCount_;
}

void AttackTrendRespBody::setPermitCount(int64_t value)
{
    permitCount_ = value;
    permitCountIsSet_ = true;
}

bool AttackTrendRespBody::permitCountIsSet() const
{
    return permitCountIsSet_;
}

void AttackTrendRespBody::unsetpermitCount()
{
    permitCountIsSet_ = false;
}

int64_t AttackTrendRespBody::getTime() const
{
    return time_;
}

void AttackTrendRespBody::setTime(int64_t value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool AttackTrendRespBody::timeIsSet() const
{
    return timeIsSet_;
}

void AttackTrendRespBody::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


