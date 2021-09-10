

#include "huaweicloud/frs/v2/model/FaceSearchBase64Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceSearchBase64Req::FaceSearchBase64Req()
{
    filter_ = "";
    filterIsSet_ = false;
    topN_ = 0;
    topNIsSet_ = false;
    imageBase64_ = "";
    imageBase64IsSet_ = false;
    returnFieldsIsSet_ = false;
    threshold_ = 0.0;
    thresholdIsSet_ = false;
    sortIsSet_ = false;
}

FaceSearchBase64Req::~FaceSearchBase64Req() = default;

void FaceSearchBase64Req::validate()
{
}

web::json::value FaceSearchBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(topNIsSet_) {
        val[utility::conversions::to_string_t("top_n")] = ModelBase::toJson(topN_);
    }
    if(imageBase64IsSet_) {
        val[utility::conversions::to_string_t("image_base64")] = ModelBase::toJson(imageBase64_);
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

bool FaceSearchBase64Req::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("image_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageBase64(refVal);
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


std::string FaceSearchBase64Req::getFilter() const
{
    return filter_;
}

void FaceSearchBase64Req::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool FaceSearchBase64Req::filterIsSet() const
{
    return filterIsSet_;
}

void FaceSearchBase64Req::unsetfilter()
{
    filterIsSet_ = false;
}

int32_t FaceSearchBase64Req::getTopN() const
{
    return topN_;
}

void FaceSearchBase64Req::setTopN(int32_t value)
{
    topN_ = value;
    topNIsSet_ = true;
}

bool FaceSearchBase64Req::topNIsSet() const
{
    return topNIsSet_;
}

void FaceSearchBase64Req::unsettopN()
{
    topNIsSet_ = false;
}

std::string FaceSearchBase64Req::getImageBase64() const
{
    return imageBase64_;
}

void FaceSearchBase64Req::setImageBase64(const std::string& value)
{
    imageBase64_ = value;
    imageBase64IsSet_ = true;
}

bool FaceSearchBase64Req::imageBase64IsSet() const
{
    return imageBase64IsSet_;
}

void FaceSearchBase64Req::unsetimageBase64()
{
    imageBase64IsSet_ = false;
}

std::vector<std::string>& FaceSearchBase64Req::getReturnFields()
{
    return returnFields_;
}

void FaceSearchBase64Req::setReturnFields(const std::vector<std::string>& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool FaceSearchBase64Req::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void FaceSearchBase64Req::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

double FaceSearchBase64Req::getThreshold() const
{
    return threshold_;
}

void FaceSearchBase64Req::setThreshold(double value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool FaceSearchBase64Req::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void FaceSearchBase64Req::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& FaceSearchBase64Req::getSort()
{
    return sort_;
}

void FaceSearchBase64Req::setSort(const std::vector<std::map<std::string, std::string>>& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool FaceSearchBase64Req::sortIsSet() const
{
    return sortIsSet_;
}

void FaceSearchBase64Req::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


