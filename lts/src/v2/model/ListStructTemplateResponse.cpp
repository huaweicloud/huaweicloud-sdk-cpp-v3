

#include "huaweicloud/lts/v2/model/ListStructTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructTemplateResponse::ListStructTemplateResponse()
{
    resultsIsSet_ = false;
}

ListStructTemplateResponse::~ListStructTemplateResponse() = default;

void ListStructTemplateResponse::validate()
{
}

web::json::value ListStructTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}

bool ListStructTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<StructTemplateModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}

std::vector<StructTemplateModel>& ListStructTemplateResponse::getResults()
{
    return results_;
}

void ListStructTemplateResponse::setResults(const std::vector<StructTemplateModel>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ListStructTemplateResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ListStructTemplateResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


