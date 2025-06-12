

#include "huaweicloud/metastudio/v1/model/ListPictureModelingJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListPictureModelingJobsResponse::ListPictureModelingJobsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    pictureModelingJobsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListPictureModelingJobsResponse::~ListPictureModelingJobsResponse() = default;

void ListPictureModelingJobsResponse::validate()
{
}

web::json::value ListPictureModelingJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(pictureModelingJobsIsSet_) {
        val[utility::conversions::to_string_t("picture_modeling_jobs")] = ModelBase::toJson(pictureModelingJobs_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListPictureModelingJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picture_modeling_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture_modeling_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<PictureModelingInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPictureModelingJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


int32_t ListPictureModelingJobsResponse::getCount() const
{
    return count_;
}

void ListPictureModelingJobsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListPictureModelingJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListPictureModelingJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<PictureModelingInfo>& ListPictureModelingJobsResponse::getPictureModelingJobs()
{
    return pictureModelingJobs_;
}

void ListPictureModelingJobsResponse::setPictureModelingJobs(const std::vector<PictureModelingInfo>& value)
{
    pictureModelingJobs_ = value;
    pictureModelingJobsIsSet_ = true;
}

bool ListPictureModelingJobsResponse::pictureModelingJobsIsSet() const
{
    return pictureModelingJobsIsSet_;
}

void ListPictureModelingJobsResponse::unsetpictureModelingJobs()
{
    pictureModelingJobsIsSet_ = false;
}

std::string ListPictureModelingJobsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListPictureModelingJobsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListPictureModelingJobsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListPictureModelingJobsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


