

#include "huaweicloud/codeartsrepo/v4/model/ListPipelineJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListPipelineJobsResponse::ListPipelineJobsResponse()
{
    bodyIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ListPipelineJobsResponse::~ListPipelineJobsResponse() = default;

void ListPipelineJobsResponse::validate()
{
}

web::json::value ListPipelineJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ListPipelineJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<JobWithStageDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::vector<JobWithStageDto>& ListPipelineJobsResponse::getBody()
{
    return body_;
}

void ListPipelineJobsResponse::setBody(const std::vector<JobWithStageDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListPipelineJobsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListPipelineJobsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

std::string ListPipelineJobsResponse::getXTotal() const
{
    return xTotal_;
}

void ListPipelineJobsResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ListPipelineJobsResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ListPipelineJobsResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


