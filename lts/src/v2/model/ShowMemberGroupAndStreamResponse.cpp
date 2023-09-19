

#include "huaweicloud/lts/v2/model/ShowMemberGroupAndStreamResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowMemberGroupAndStreamResponse::ShowMemberGroupAndStreamResponse()
{
    resultsIsSet_ = false;
}

ShowMemberGroupAndStreamResponse::~ShowMemberGroupAndStreamResponse() = default;

void ShowMemberGroupAndStreamResponse::validate()
{
}

web::json::value ShowMemberGroupAndStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ShowMemberGroupAndStreamResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<MemberGroupandStream_results> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

std::vector<MemberGroupandStream_results>& ShowMemberGroupAndStreamResponse::getResults()
{
    return results_;
}

void ShowMemberGroupAndStreamResponse::setResults(const std::vector<MemberGroupandStream_results>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ShowMemberGroupAndStreamResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ShowMemberGroupAndStreamResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


