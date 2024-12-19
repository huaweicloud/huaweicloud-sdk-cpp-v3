

#include "huaweicloud/evs/v2/model/UnsubscribeVolumeResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UnsubscribeVolumeResponseBody::UnsubscribeVolumeResponseBody()
{
    resultsIsSet_ = false;
}

UnsubscribeVolumeResponseBody::~UnsubscribeVolumeResponseBody() = default;

void UnsubscribeVolumeResponseBody::validate()
{
}

web::json::value UnsubscribeVolumeResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool UnsubscribeVolumeResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<UnsubscribeVolume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<UnsubscribeVolume>& UnsubscribeVolumeResponseBody::getResults()
{
    return results_;
}

void UnsubscribeVolumeResponseBody::setResults(const std::vector<UnsubscribeVolume>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool UnsubscribeVolumeResponseBody::resultsIsSet() const
{
    return resultsIsSet_;
}

void UnsubscribeVolumeResponseBody::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


