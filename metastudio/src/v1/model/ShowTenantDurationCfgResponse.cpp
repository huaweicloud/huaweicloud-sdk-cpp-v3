

#include "huaweicloud/metastudio/v1/model/ShowTenantDurationCfgResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantDurationCfgResponse::ShowTenantDurationCfgResponse()
{
    tenantId_ = "";
    tenantIdIsSet_ = false;
    basicMin_ = 0;
    basicMinIsSet_ = false;
    basicMax_ = 0;
    basicMaxIsSet_ = false;
    basicAdviceValue_ = 0;
    basicAdviceValueIsSet_ = false;
    middleMin_ = 0;
    middleMinIsSet_ = false;
    middleMax_ = 0;
    middleMaxIsSet_ = false;
    middleAdviceValue_ = 0;
    middleAdviceValueIsSet_ = false;
    advanceMin_ = 0;
    advanceMinIsSet_ = false;
    advanceMax_ = 0;
    advanceMaxIsSet_ = false;
    advanceAdviceValue_ = 0;
    advanceAdviceValueIsSet_ = false;
    flexusMin_ = 0;
    flexusMinIsSet_ = false;
    flexusMax_ = 0;
    flexusMaxIsSet_ = false;
    flexusAdviceValue_ = 0;
    flexusAdviceValueIsSet_ = false;
    cmwwMin_ = 0;
    cmwwMinIsSet_ = false;
    cmwwMax_ = 0;
    cmwwMaxIsSet_ = false;
    cmwwAdviceValue_ = 0;
    cmwwAdviceValueIsSet_ = false;
    ljznMin_ = 0;
    ljznMinIsSet_ = false;
    ljznMax_ = 0;
    ljznMaxIsSet_ = false;
    ljznAdviceValue_ = 0;
    ljznAdviceValueIsSet_ = false;
}

ShowTenantDurationCfgResponse::~ShowTenantDurationCfgResponse() = default;

void ShowTenantDurationCfgResponse::validate()
{
}

web::json::value ShowTenantDurationCfgResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(basicMinIsSet_) {
        val[utility::conversions::to_string_t("basic_min")] = ModelBase::toJson(basicMin_);
    }
    if(basicMaxIsSet_) {
        val[utility::conversions::to_string_t("basic_max")] = ModelBase::toJson(basicMax_);
    }
    if(basicAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("basic_advice_value")] = ModelBase::toJson(basicAdviceValue_);
    }
    if(middleMinIsSet_) {
        val[utility::conversions::to_string_t("middle_min")] = ModelBase::toJson(middleMin_);
    }
    if(middleMaxIsSet_) {
        val[utility::conversions::to_string_t("middle_max")] = ModelBase::toJson(middleMax_);
    }
    if(middleAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("middle_advice_value")] = ModelBase::toJson(middleAdviceValue_);
    }
    if(advanceMinIsSet_) {
        val[utility::conversions::to_string_t("advance_min")] = ModelBase::toJson(advanceMin_);
    }
    if(advanceMaxIsSet_) {
        val[utility::conversions::to_string_t("advance_max")] = ModelBase::toJson(advanceMax_);
    }
    if(advanceAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("advance_advice_value")] = ModelBase::toJson(advanceAdviceValue_);
    }
    if(flexusMinIsSet_) {
        val[utility::conversions::to_string_t("flexus_min")] = ModelBase::toJson(flexusMin_);
    }
    if(flexusMaxIsSet_) {
        val[utility::conversions::to_string_t("flexus_max")] = ModelBase::toJson(flexusMax_);
    }
    if(flexusAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("flexus_advice_value")] = ModelBase::toJson(flexusAdviceValue_);
    }
    if(cmwwMinIsSet_) {
        val[utility::conversions::to_string_t("cmww_min")] = ModelBase::toJson(cmwwMin_);
    }
    if(cmwwMaxIsSet_) {
        val[utility::conversions::to_string_t("cmww_max")] = ModelBase::toJson(cmwwMax_);
    }
    if(cmwwAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("cmww_advice_value")] = ModelBase::toJson(cmwwAdviceValue_);
    }
    if(ljznMinIsSet_) {
        val[utility::conversions::to_string_t("ljzn_min")] = ModelBase::toJson(ljznMin_);
    }
    if(ljznMaxIsSet_) {
        val[utility::conversions::to_string_t("ljzn_max")] = ModelBase::toJson(ljznMax_);
    }
    if(ljznAdviceValueIsSet_) {
        val[utility::conversions::to_string_t("ljzn_advice_value")] = ModelBase::toJson(ljznAdviceValue_);
    }

    return val;
}
bool ShowTenantDurationCfgResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("basic_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("basic_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBasicAdviceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("middle_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("middle_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMiddleAdviceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advance_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advance_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvanceMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advance_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advance_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvanceMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("advance_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advance_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvanceAdviceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flexus_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexus_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexusMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flexus_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexus_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexusMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flexus_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flexus_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlexusAdviceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmww_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmww_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmwwMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmww_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmww_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmwwMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cmww_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cmww_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCmwwAdviceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ljzn_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ljzn_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLjznMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ljzn_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ljzn_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLjznMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ljzn_advice_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ljzn_advice_value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLjznAdviceValue(refVal);
        }
    }
    return ok;
}


std::string ShowTenantDurationCfgResponse::getTenantId() const
{
    return tenantId_;
}

void ShowTenantDurationCfgResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowTenantDurationCfgResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getBasicMin() const
{
    return basicMin_;
}

void ShowTenantDurationCfgResponse::setBasicMin(int32_t value)
{
    basicMin_ = value;
    basicMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::basicMinIsSet() const
{
    return basicMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetbasicMin()
{
    basicMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getBasicMax() const
{
    return basicMax_;
}

void ShowTenantDurationCfgResponse::setBasicMax(int32_t value)
{
    basicMax_ = value;
    basicMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::basicMaxIsSet() const
{
    return basicMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetbasicMax()
{
    basicMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getBasicAdviceValue() const
{
    return basicAdviceValue_;
}

void ShowTenantDurationCfgResponse::setBasicAdviceValue(int32_t value)
{
    basicAdviceValue_ = value;
    basicAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::basicAdviceValueIsSet() const
{
    return basicAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetbasicAdviceValue()
{
    basicAdviceValueIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getMiddleMin() const
{
    return middleMin_;
}

void ShowTenantDurationCfgResponse::setMiddleMin(int32_t value)
{
    middleMin_ = value;
    middleMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::middleMinIsSet() const
{
    return middleMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetmiddleMin()
{
    middleMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getMiddleMax() const
{
    return middleMax_;
}

void ShowTenantDurationCfgResponse::setMiddleMax(int32_t value)
{
    middleMax_ = value;
    middleMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::middleMaxIsSet() const
{
    return middleMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetmiddleMax()
{
    middleMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getMiddleAdviceValue() const
{
    return middleAdviceValue_;
}

void ShowTenantDurationCfgResponse::setMiddleAdviceValue(int32_t value)
{
    middleAdviceValue_ = value;
    middleAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::middleAdviceValueIsSet() const
{
    return middleAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetmiddleAdviceValue()
{
    middleAdviceValueIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getAdvanceMin() const
{
    return advanceMin_;
}

void ShowTenantDurationCfgResponse::setAdvanceMin(int32_t value)
{
    advanceMin_ = value;
    advanceMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::advanceMinIsSet() const
{
    return advanceMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetadvanceMin()
{
    advanceMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getAdvanceMax() const
{
    return advanceMax_;
}

void ShowTenantDurationCfgResponse::setAdvanceMax(int32_t value)
{
    advanceMax_ = value;
    advanceMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::advanceMaxIsSet() const
{
    return advanceMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetadvanceMax()
{
    advanceMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getAdvanceAdviceValue() const
{
    return advanceAdviceValue_;
}

void ShowTenantDurationCfgResponse::setAdvanceAdviceValue(int32_t value)
{
    advanceAdviceValue_ = value;
    advanceAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::advanceAdviceValueIsSet() const
{
    return advanceAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetadvanceAdviceValue()
{
    advanceAdviceValueIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getFlexusMin() const
{
    return flexusMin_;
}

void ShowTenantDurationCfgResponse::setFlexusMin(int32_t value)
{
    flexusMin_ = value;
    flexusMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::flexusMinIsSet() const
{
    return flexusMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetflexusMin()
{
    flexusMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getFlexusMax() const
{
    return flexusMax_;
}

void ShowTenantDurationCfgResponse::setFlexusMax(int32_t value)
{
    flexusMax_ = value;
    flexusMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::flexusMaxIsSet() const
{
    return flexusMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetflexusMax()
{
    flexusMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getFlexusAdviceValue() const
{
    return flexusAdviceValue_;
}

void ShowTenantDurationCfgResponse::setFlexusAdviceValue(int32_t value)
{
    flexusAdviceValue_ = value;
    flexusAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::flexusAdviceValueIsSet() const
{
    return flexusAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetflexusAdviceValue()
{
    flexusAdviceValueIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getCmwwMin() const
{
    return cmwwMin_;
}

void ShowTenantDurationCfgResponse::setCmwwMin(int32_t value)
{
    cmwwMin_ = value;
    cmwwMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::cmwwMinIsSet() const
{
    return cmwwMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetcmwwMin()
{
    cmwwMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getCmwwMax() const
{
    return cmwwMax_;
}

void ShowTenantDurationCfgResponse::setCmwwMax(int32_t value)
{
    cmwwMax_ = value;
    cmwwMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::cmwwMaxIsSet() const
{
    return cmwwMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetcmwwMax()
{
    cmwwMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getCmwwAdviceValue() const
{
    return cmwwAdviceValue_;
}

void ShowTenantDurationCfgResponse::setCmwwAdviceValue(int32_t value)
{
    cmwwAdviceValue_ = value;
    cmwwAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::cmwwAdviceValueIsSet() const
{
    return cmwwAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetcmwwAdviceValue()
{
    cmwwAdviceValueIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getLjznMin() const
{
    return ljznMin_;
}

void ShowTenantDurationCfgResponse::setLjznMin(int32_t value)
{
    ljznMin_ = value;
    ljznMinIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::ljznMinIsSet() const
{
    return ljznMinIsSet_;
}

void ShowTenantDurationCfgResponse::unsetljznMin()
{
    ljznMinIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getLjznMax() const
{
    return ljznMax_;
}

void ShowTenantDurationCfgResponse::setLjznMax(int32_t value)
{
    ljznMax_ = value;
    ljznMaxIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::ljznMaxIsSet() const
{
    return ljznMaxIsSet_;
}

void ShowTenantDurationCfgResponse::unsetljznMax()
{
    ljznMaxIsSet_ = false;
}

int32_t ShowTenantDurationCfgResponse::getLjznAdviceValue() const
{
    return ljznAdviceValue_;
}

void ShowTenantDurationCfgResponse::setLjznAdviceValue(int32_t value)
{
    ljznAdviceValue_ = value;
    ljznAdviceValueIsSet_ = true;
}

bool ShowTenantDurationCfgResponse::ljznAdviceValueIsSet() const
{
    return ljznAdviceValueIsSet_;
}

void ShowTenantDurationCfgResponse::unsetljznAdviceValue()
{
    ljznAdviceValueIsSet_ = false;
}

}
}
}
}
}


