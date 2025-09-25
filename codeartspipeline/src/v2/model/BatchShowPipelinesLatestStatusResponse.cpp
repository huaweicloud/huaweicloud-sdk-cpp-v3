

#include "huaweicloud/codeartspipeline/v2/model/BatchShowPipelinesLatestStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




BatchShowPipelinesLatestStatusResponse::BatchShowPipelinesLatestStatusResponse()
{
    bodyIsSet_ = false;
}

BatchShowPipelinesLatestStatusResponse::~BatchShowPipelinesLatestStatusResponse() = default;

void BatchShowPipelinesLatestStatusResponse::validate()
{
}

web::json::value BatchShowPipelinesLatestStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchShowPipelinesLatestStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineLatestRun> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PipelineLatestRun>& BatchShowPipelinesLatestStatusResponse::getBody()
{
    return body_;
}

void BatchShowPipelinesLatestStatusResponse::setBody(const std::vector<PipelineLatestRun>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchShowPipelinesLatestStatusResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchShowPipelinesLatestStatusResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


