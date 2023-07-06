

#include "huaweicloud/frs/v2/model/SearchFaceByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




SearchFaceByFileRequestBody::SearchFaceByFileRequestBody()
{
    imageFileIsSet_ = false;
    topN_ = 0;
    topNIsSet_ = false;
    threshold_ = 0.0;
    thresholdIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
    returnFields_ = "";
    returnFieldsIsSet_ = false;
}

SearchFaceByFileRequestBody::~SearchFaceByFileRequestBody() = default;

void SearchFaceByFileRequestBody::validate()
{
}

web::json::value SearchFaceByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(topNIsSet_) {
        val[utility::conversions::to_string_t("top_n")] = ModelBase::toJson(topN_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(returnFieldsIsSet_) {
        val[utility::conversions::to_string_t("return_fields")] = ModelBase::toJson(returnFields_);
    }

    return val;
}

bool SearchFaceByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("top_n"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_n"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopN(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnFields(refVal);
        }
    }
    return ok;
}

HttpContent SearchFaceByFileRequestBody::getImageFile() const
{
    return imageFile_;
}

void SearchFaceByFileRequestBody::setImageFile(const HttpContent& value)
{
    imageFile_ = value;
    imageFileIsSet_ = true;
}

bool SearchFaceByFileRequestBody::imageFileIsSet() const
{
    return imageFileIsSet_;
}

void SearchFaceByFileRequestBody::unsetimageFile()
{
    imageFileIsSet_ = false;
}

int32_t SearchFaceByFileRequestBody::getTopN() const
{
    return topN_;
}

void SearchFaceByFileRequestBody::setTopN(int32_t value)
{
    topN_ = value;
    topNIsSet_ = true;
}

bool SearchFaceByFileRequestBody::topNIsSet() const
{
    return topNIsSet_;
}

void SearchFaceByFileRequestBody::unsettopN()
{
    topNIsSet_ = false;
}

double SearchFaceByFileRequestBody::getThreshold() const
{
    return threshold_;
}

void SearchFaceByFileRequestBody::setThreshold(double value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool SearchFaceByFileRequestBody::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void SearchFaceByFileRequestBody::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::string SearchFaceByFileRequestBody::getSort() const
{
    return sort_;
}

void SearchFaceByFileRequestBody::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool SearchFaceByFileRequestBody::sortIsSet() const
{
    return sortIsSet_;
}

void SearchFaceByFileRequestBody::unsetsort()
{
    sortIsSet_ = false;
}

std::string SearchFaceByFileRequestBody::getFilter() const
{
    return filter_;
}

void SearchFaceByFileRequestBody::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool SearchFaceByFileRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void SearchFaceByFileRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

std::string SearchFaceByFileRequestBody::getReturnFields() const
{
    return returnFields_;
}

void SearchFaceByFileRequestBody::setReturnFields(const std::string& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool SearchFaceByFileRequestBody::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void SearchFaceByFileRequestBody::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

}
}
}
}
}


