

#include "huaweicloud/codeartsrepo/v4/model/ListDefaultReviewCategoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListDefaultReviewCategoriesResponse::ListDefaultReviewCategoriesResponse()
{
    codehubDefaultCategoriesIsSet_ = false;
    hicodeDefaultCategoriesIsSet_ = false;
}

ListDefaultReviewCategoriesResponse::~ListDefaultReviewCategoriesResponse() = default;

void ListDefaultReviewCategoriesResponse::validate()
{
}

web::json::value ListDefaultReviewCategoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codehubDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("codehub_default_categories")] = ModelBase::toJson(codehubDefaultCategories_);
    }
    if(hicodeDefaultCategoriesIsSet_) {
        val[utility::conversions::to_string_t("hicode_default_categories")] = ModelBase::toJson(hicodeDefaultCategories_);
    }

    return val;
}
bool ListDefaultReviewCategoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("codehub_default_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codehub_default_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodehubDefaultCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hicode_default_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hicode_default_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<CategoryDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHicodeDefaultCategories(refVal);
        }
    }
    return ok;
}


std::vector<CategoryDto>& ListDefaultReviewCategoriesResponse::getCodehubDefaultCategories()
{
    return codehubDefaultCategories_;
}

void ListDefaultReviewCategoriesResponse::setCodehubDefaultCategories(const std::vector<CategoryDto>& value)
{
    codehubDefaultCategories_ = value;
    codehubDefaultCategoriesIsSet_ = true;
}

bool ListDefaultReviewCategoriesResponse::codehubDefaultCategoriesIsSet() const
{
    return codehubDefaultCategoriesIsSet_;
}

void ListDefaultReviewCategoriesResponse::unsetcodehubDefaultCategories()
{
    codehubDefaultCategoriesIsSet_ = false;
}

std::vector<CategoryDto>& ListDefaultReviewCategoriesResponse::getHicodeDefaultCategories()
{
    return hicodeDefaultCategories_;
}

void ListDefaultReviewCategoriesResponse::setHicodeDefaultCategories(const std::vector<CategoryDto>& value)
{
    hicodeDefaultCategories_ = value;
    hicodeDefaultCategoriesIsSet_ = true;
}

bool ListDefaultReviewCategoriesResponse::hicodeDefaultCategoriesIsSet() const
{
    return hicodeDefaultCategoriesIsSet_;
}

void ListDefaultReviewCategoriesResponse::unsethicodeDefaultCategories()
{
    hicodeDefaultCategoriesIsSet_ = false;
}

}
}
}
}
}


