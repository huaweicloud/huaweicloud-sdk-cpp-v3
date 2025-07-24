

#include "huaweicloud/cloudtest/v1/model/SearchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SearchRequest::SearchRequest()
{
    searchType_ = "";
    searchTypeIsSet_ = false;
    searchValue_ = "";
    searchValueIsSet_ = false;
}

SearchRequest::~SearchRequest() = default;

void SearchRequest::validate()
{
}

web::json::value SearchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(searchValueIsSet_) {
        val[utility::conversions::to_string_t("search_value")] = ModelBase::toJson(searchValue_);
    }

    return val;
}
bool SearchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchValue(refVal);
        }
    }
    return ok;
}


std::string SearchRequest::getSearchType() const
{
    return searchType_;
}

void SearchRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool SearchRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void SearchRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string SearchRequest::getSearchValue() const
{
    return searchValue_;
}

void SearchRequest::setSearchValue(const std::string& value)
{
    searchValue_ = value;
    searchValueIsSet_ = true;
}

bool SearchRequest::searchValueIsSet() const
{
    return searchValueIsSet_;
}

void SearchRequest::unsetsearchValue()
{
    searchValueIsSet_ = false;
}

}
}
}
}
}


