

#include "huaweicloud/lts/v2/model/ListBreifStructTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListBreifStructTemplateResponse::ListBreifStructTemplateResponse()
{
    resultsIsSet_ = false;
}

ListBreifStructTemplateResponse::~ListBreifStructTemplateResponse() = default;

void ListBreifStructTemplateResponse::validate()
{
}

web::json::value ListBreifStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ListBreifStructTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<BriefStructTemplateModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<BriefStructTemplateModel>& ListBreifStructTemplateResponse::getResults()
{
    return results_;
}

void ListBreifStructTemplateResponse::setResults(const std::vector<BriefStructTemplateModel>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListBreifStructTemplateResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListBreifStructTemplateResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


