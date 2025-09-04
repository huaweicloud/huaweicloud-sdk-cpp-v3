

#include "huaweicloud/codeartsbuild/v3/model/CountdownList_tips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CountdownList_tips::CountdownList_tips()
{
    summaryIsSet_ = false;
}

CountdownList_tips::~CountdownList_tips() = default;

void CountdownList_tips::validate()
{
}

web::json::value CountdownList_tips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(summaryIsSet_) {
        val[utility::conversions::to_string_t("summary")] = ModelBase::toJson(summary_);
    }

    return val;
}
bool CountdownList_tips::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary"));
        if(!fieldValue.is_null())
        {
            Tips refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummary(refVal);
        }
    }
    return ok;
}


Tips CountdownList_tips::getSummary() const
{
    return summary_;
}

void CountdownList_tips::setSummary(const Tips& value)
{
    summary_ = value;
    summaryIsSet_ = true;
}

bool CountdownList_tips::summaryIsSet() const
{
    return summaryIsSet_;
}

void CountdownList_tips::unsetsummary()
{
    summaryIsSet_ = false;
}

}
}
}
}
}


