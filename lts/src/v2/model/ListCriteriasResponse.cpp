

#include "huaweicloud/lts/v2/model/ListCriteriasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListCriteriasResponse::ListCriteriasResponse()
{
    searchCriteriasIsSet_ = false;
}

ListCriteriasResponse::~ListCriteriasResponse() = default;

void ListCriteriasResponse::validate()
{
}

web::json::value ListCriteriasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchCriteriasIsSet_) {
        val[utility::conversions::to_string_t("search_criterias")] = ModelBase::toJson(searchCriterias_);
    }

    return val;
}

bool ListCriteriasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_criterias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_criterias"));
        if(!fieldValue.is_null())
        {
            std::vector<GetQuerySearchCriteriasBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchCriterias(refVal);
        }
    }
    return ok;
}

std::vector<GetQuerySearchCriteriasBody>& ListCriteriasResponse::getSearchCriterias()
{
    return searchCriterias_;
}

void ListCriteriasResponse::setSearchCriterias(const std::vector<GetQuerySearchCriteriasBody>& value)
{
    searchCriterias_ = value;
    searchCriteriasIsSet_ = true;
}

bool ListCriteriasResponse::searchCriteriasIsSet() const
{
    return searchCriteriasIsSet_;
}

void ListCriteriasResponse::unsetsearchCriterias()
{
    searchCriteriasIsSet_ = false;
}

}
}
}
}
}


