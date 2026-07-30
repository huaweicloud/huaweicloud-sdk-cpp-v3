

#include "huaweicloud/modelarts/v1/model/PreferredSchedulingTerm.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PreferredSchedulingTerm::PreferredSchedulingTerm()
{
    weight_ = 0;
    weightIsSet_ = false;
    preferenceIsSet_ = false;
}

PreferredSchedulingTerm::~PreferredSchedulingTerm() = default;

void PreferredSchedulingTerm::validate()
{
}

web::json::value PreferredSchedulingTerm::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(preferenceIsSet_) {
        val[utility::conversions::to_string_t("preference")] = ModelBase::toJson(preference_);
    }

    return val;
}
bool PreferredSchedulingTerm::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preference"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preference"));
        if(!fieldValue.is_null())
        {
            NodeSelectorTerm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreference(refVal);
        }
    }
    return ok;
}


int32_t PreferredSchedulingTerm::getWeight() const
{
    return weight_;
}

void PreferredSchedulingTerm::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool PreferredSchedulingTerm::weightIsSet() const
{
    return weightIsSet_;
}

void PreferredSchedulingTerm::unsetweight()
{
    weightIsSet_ = false;
}

NodeSelectorTerm PreferredSchedulingTerm::getPreference() const
{
    return preference_;
}

void PreferredSchedulingTerm::setPreference(const NodeSelectorTerm& value)
{
    preference_ = value;
    preferenceIsSet_ = true;
}

bool PreferredSchedulingTerm::preferenceIsSet() const
{
    return preferenceIsSet_;
}

void PreferredSchedulingTerm::unsetpreference()
{
    preferenceIsSet_ = false;
}

}
}
}
}
}


