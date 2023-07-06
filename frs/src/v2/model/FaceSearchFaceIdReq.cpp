

#include "huaweicloud/frs/v2/model/FaceSearchFaceIdReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceSearchFaceIdReq::FaceSearchFaceIdReq()
{
    filter_ = "";
    filterIsSet_ = false;
    topN_ = 0;
    topNIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
    returnFieldsIsSet_ = false;
    threshold_ = 0.0;
    thresholdIsSet_ = false;
    sortIsSet_ = false;
}

FaceSearchFaceIdReq::~FaceSearchFaceIdReq() = default;

void FaceSearchFaceIdReq::validate()
{
}

web::json::value FaceSearchFaceIdReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(topNIsSet_) {
        val[utility::conversions::to_string_t("top_n")] = ModelBase::toJson(topN_);
    }
    if(faceIdIsSet_) {
        val[utility::conversions::to_string_t("face_id")] = ModelBase::toJson(faceId_);
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

bool FaceSearchFaceIdReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("face_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceId(refVal);
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

std::string FaceSearchFaceIdReq::getFilter() const
{
    return filter_;
}

void FaceSearchFaceIdReq::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool FaceSearchFaceIdReq::filterIsSet() const
{
    return filterIsSet_;
}

void FaceSearchFaceIdReq::unsetfilter()
{
    filterIsSet_ = false;
}

int32_t FaceSearchFaceIdReq::getTopN() const
{
    return topN_;
}

void FaceSearchFaceIdReq::setTopN(int32_t value)
{
    topN_ = value;
    topNIsSet_ = true;
}

bool FaceSearchFaceIdReq::topNIsSet() const
{
    return topNIsSet_;
}

void FaceSearchFaceIdReq::unsettopN()
{
    topNIsSet_ = false;
}

std::string FaceSearchFaceIdReq::getFaceId() const
{
    return faceId_;
}

void FaceSearchFaceIdReq::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool FaceSearchFaceIdReq::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void FaceSearchFaceIdReq::unsetfaceId()
{
    faceIdIsSet_ = false;
}

std::vector<std::string>& FaceSearchFaceIdReq::getReturnFields()
{
    return returnFields_;
}

void FaceSearchFaceIdReq::setReturnFields(const std::vector<std::string>& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool FaceSearchFaceIdReq::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void FaceSearchFaceIdReq::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

double FaceSearchFaceIdReq::getThreshold() const
{
    return threshold_;
}

void FaceSearchFaceIdReq::setThreshold(double value)
{
    threshold_ = value;
    thresholdIsSet_ = true;
}

bool FaceSearchFaceIdReq::thresholdIsSet() const
{
    return thresholdIsSet_;
}

void FaceSearchFaceIdReq::unsetthreshold()
{
    thresholdIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& FaceSearchFaceIdReq::getSort()
{
    return sort_;
}

void FaceSearchFaceIdReq::setSort(const std::vector<std::map<std::string, std::string>>& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool FaceSearchFaceIdReq::sortIsSet() const
{
    return sortIsSet_;
}

void FaceSearchFaceIdReq::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


