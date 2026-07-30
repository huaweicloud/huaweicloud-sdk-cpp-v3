

#include "huaweicloud/modelarts/v1/model/ShowSearchAlgorithmsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowSearchAlgorithmsResponse::ShowSearchAlgorithmsResponse()
{
    searchAlgoCount_ = 0;
    searchAlgoCountIsSet_ = false;
    searchAlgoListIsSet_ = false;
}

ShowSearchAlgorithmsResponse::~ShowSearchAlgorithmsResponse() = default;

void ShowSearchAlgorithmsResponse::validate()
{
}

web::json::value ShowSearchAlgorithmsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchAlgoCountIsSet_) {
        val[utility::conversions::to_string_t("search_algo_count")] = ModelBase::toJson(searchAlgoCount_);
    }
    if(searchAlgoListIsSet_) {
        val[utility::conversions::to_string_t("search_algo_list")] = ModelBase::toJson(searchAlgoList_);
    }

    return val;
}
bool ShowSearchAlgorithmsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_algo_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_algo_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchAlgoCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_algo_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_algo_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSearchAlgorithms_search_algo_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchAlgoList(refVal);
        }
    }
    return ok;
}


int32_t ShowSearchAlgorithmsResponse::getSearchAlgoCount() const
{
    return searchAlgoCount_;
}

void ShowSearchAlgorithmsResponse::setSearchAlgoCount(int32_t value)
{
    searchAlgoCount_ = value;
    searchAlgoCountIsSet_ = true;
}

bool ShowSearchAlgorithmsResponse::searchAlgoCountIsSet() const
{
    return searchAlgoCountIsSet_;
}

void ShowSearchAlgorithmsResponse::unsetsearchAlgoCount()
{
    searchAlgoCountIsSet_ = false;
}

std::vector<ListSearchAlgorithms_search_algo_list>& ShowSearchAlgorithmsResponse::getSearchAlgoList()
{
    return searchAlgoList_;
}

void ShowSearchAlgorithmsResponse::setSearchAlgoList(const std::vector<ListSearchAlgorithms_search_algo_list>& value)
{
    searchAlgoList_ = value;
    searchAlgoListIsSet_ = true;
}

bool ShowSearchAlgorithmsResponse::searchAlgoListIsSet() const
{
    return searchAlgoListIsSet_;
}

void ShowSearchAlgorithmsResponse::unsetsearchAlgoList()
{
    searchAlgoListIsSet_ = false;
}

}
}
}
}
}


