

#include "huaweicloud/lts/v2/model/ListQueryAllSearchCriteriasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListQueryAllSearchCriteriasResponse::ListQueryAllSearchCriteriasResponse()
{
    searchCriteriasIsSet_ = false;
}

ListQueryAllSearchCriteriasResponse::~ListQueryAllSearchCriteriasResponse() = default;

void ListQueryAllSearchCriteriasResponse::validate()
{
}

web::json::value ListQueryAllSearchCriteriasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchCriteriasIsSet_) {
        val[utility::conversions::to_string_t("search_criterias")] = ModelBase::toJson(searchCriterias_);
    }

    return val;
}

bool ListQueryAllSearchCriteriasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_criterias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_criterias"));
        if(!fieldValue.is_null())
        {
            std::vector<Search_criteriasBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchCriterias(refVal);
        }
    }
    return ok;
}


std::vector<Search_criteriasBody>& ListQueryAllSearchCriteriasResponse::getSearchCriterias()
{
    return searchCriterias_;
}

void ListQueryAllSearchCriteriasResponse::setSearchCriterias(const std::vector<Search_criteriasBody>& value)
{
    searchCriterias_ = value;
    searchCriteriasIsSet_ = true;
}

bool ListQueryAllSearchCriteriasResponse::searchCriteriasIsSet() const
{
    return searchCriteriasIsSet_;
}

void ListQueryAllSearchCriteriasResponse::unsetsearchCriterias()
{
    searchCriteriasIsSet_ = false;
}

}
}
}
}
}


