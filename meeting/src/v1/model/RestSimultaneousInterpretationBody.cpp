

#include "huaweicloud/meeting/v1/model/RestSimultaneousInterpretationBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestSimultaneousInterpretationBody::RestSimultaneousInterpretationBody()
{
    simultaneousInterpretation_ = 0;
    simultaneousInterpretationIsSet_ = false;
}

RestSimultaneousInterpretationBody::~RestSimultaneousInterpretationBody() = default;

void RestSimultaneousInterpretationBody::validate()
{
}

web::json::value RestSimultaneousInterpretationBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(simultaneousInterpretationIsSet_) {
        val[utility::conversions::to_string_t("simultaneousInterpretation")] = ModelBase::toJson(simultaneousInterpretation_);
    }

    return val;
}
bool RestSimultaneousInterpretationBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("simultaneousInterpretation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("simultaneousInterpretation"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSimultaneousInterpretation(refVal);
        }
    }
    return ok;
}


int32_t RestSimultaneousInterpretationBody::getSimultaneousInterpretation() const
{
    return simultaneousInterpretation_;
}

void RestSimultaneousInterpretationBody::setSimultaneousInterpretation(int32_t value)
{
    simultaneousInterpretation_ = value;
    simultaneousInterpretationIsSet_ = true;
}

bool RestSimultaneousInterpretationBody::simultaneousInterpretationIsSet() const
{
    return simultaneousInterpretationIsSet_;
}

void RestSimultaneousInterpretationBody::unsetsimultaneousInterpretation()
{
    simultaneousInterpretationIsSet_ = false;
}

}
}
}
}
}


