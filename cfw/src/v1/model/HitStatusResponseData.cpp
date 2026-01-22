

#include "huaweicloud/cfw/v1/model/HitStatusResponseData.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HitStatusResponseData::HitStatusResponseData()
{
    recordsIsSet_ = false;
}

HitStatusResponseData::~HitStatusResponseData() = default;

void HitStatusResponseData::validate()
{
}

web::json::value HitStatusResponseData::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }

    return val;
}
bool HitStatusResponseData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleHitStatusListVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    return ok;
}


std::vector<RuleHitStatusListVO>& HitStatusResponseData::getRecords()
{
    return records_;
}

void HitStatusResponseData::setRecords(const std::vector<RuleHitStatusListVO>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool HitStatusResponseData::recordsIsSet() const
{
    return recordsIsSet_;
}

void HitStatusResponseData::unsetrecords()
{
    recordsIsSet_ = false;
}

}
}
}
}
}


