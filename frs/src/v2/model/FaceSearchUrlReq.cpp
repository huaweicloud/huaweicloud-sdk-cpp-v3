

#include "huaweicloud/frs/v2/model/FaceSearchUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceSearchUrlReq::FaceSearchUrlReq()
{
    filter_ = "";
    filterIsSet_ = false;
    topN_ = 0;
    topNIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    returnFieldsIsSet_ = false;
    threshold_ = 0.0;
    thresholdIsSet_ = false;
    sortIsSet_ = false;
}

FaceSearchUrlReq::~FaceSearchUrlReq() = default;

void FaceSearchUrlReq::validate()
{
}

web::json::value FaceSearchUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(topNIsSet_) {
        val[utility::conversions::to_string_t("top_n")] = ModelBase::toJson(topN_);
    }
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(returnFieldsIsSet_) {
        val[utility::conversions::to_string_t("return_fields")] = ModelBase::toJson(returnFields_);
    }
    if(thresholdIsSet_) {
        val[utility::conversions::to_string_t("threshold")] = ModelBase::toJson(threshold_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}

bool FaceSearchUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_n"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_n"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopN(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnFields(refVal);
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
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}

std::string FaceSearchUrlReq::getFilter() const
{
    return filter_;
}

void FaceSearchUrlReq::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool FaceSearchUrlReq::filterIsSet() const
{
    return filterIsSet_;
}

void FaceSearchUrlReq::unsetfilter()
{
    filterIsSet_ = false;
}

int32_t FaceSearchUrlReq::getTopN() const
{
    return topN_;
}

void FaceSearchUrlReq::setTopN(int32_t value)
{
    topN_ = value;
    topNIsSet_ = true;
}

bool FaceSearchUrlReq::topNIsSet() const
{
    return topNIsSet_;
}

void FaceSearchUrlReq::unsettopN()
{
    topNIsSet_ = false;
}

std::string FaceSearchUrlReq::getImageUrl() const
{
    return imageUrl_;
}

void FaceSearchUrlReq::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool FaceSearchUrlReq::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void FaceSearchUrlReq::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

std::vector<std::string>& FaceSearchUrlReq::getReturnFields()
{
    return returnFields_;
}

void FaceSearchUrlReq::setReturnFields(const std::vector<std::string>& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool FaceSearchUrlReq::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void FaceSearchUrlReq::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

double FaceSearchUrlReq::getThreshold() const
{
    return threshold_;
}

void FaceSearchUrlReq::setThreshold(double value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool FaceSearchUrlReq::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void FaceSearchUrlReq::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& FaceSearchUrlReq::getSort()
{
    return sort_;
}

void FaceSearchUrlReq::setSort(const std::vector<std::map<std::string, std::string>>& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool FaceSearchUrlReq::sortIsSet() const
{
    return sortIsSet_;
}

void FaceSearchUrlReq::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


