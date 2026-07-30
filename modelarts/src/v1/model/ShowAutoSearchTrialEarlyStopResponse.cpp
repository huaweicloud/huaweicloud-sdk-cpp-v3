

#include "huaweicloud/modelarts/v1/model/ShowAutoSearchTrialEarlyStopResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAutoSearchTrialEarlyStopResponse::ShowAutoSearchTrialEarlyStopResponse()
{
    earlystopTrial_ = "";
    earlystopTrialIsSet_ = false;
}

ShowAutoSearchTrialEarlyStopResponse::~ShowAutoSearchTrialEarlyStopResponse() = default;

void ShowAutoSearchTrialEarlyStopResponse::validate()
{
}

web::json::value ShowAutoSearchTrialEarlyStopResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(earlystopTrialIsSet_) {
        val[utility::conversions::to_string_t("earlystop_trial")] = ModelBase::toJson(earlystopTrial_);
    }

    return val;
}
bool ShowAutoSearchTrialEarlyStopResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("earlystop_trial"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("earlystop_trial"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEarlystopTrial(refVal);
        }
    }
    return ok;
}


std::string ShowAutoSearchTrialEarlyStopResponse::getEarlystopTrial() const
{
    return earlystopTrial_;
}

void ShowAutoSearchTrialEarlyStopResponse::setEarlystopTrial(const std::string& value)
{
    earlystopTrial_ = value;
    earlystopTrialIsSet_ = true;
}

bool ShowAutoSearchTrialEarlyStopResponse::earlystopTrialIsSet() const
{
    return earlystopTrialIsSet_;
}

void ShowAutoSearchTrialEarlyStopResponse::unsetearlystopTrial()
{
    earlystopTrialIsSet_ = false;
}

}
}
}
}
}


