

#include "huaweicloud/tics/v1/model/ShowJobInstanceDagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowJobInstanceDagResponse::ShowJobInstanceDagResponse()
{
    bodyIsSet_ = false;
}

ShowJobInstanceDagResponse::~ShowJobInstanceDagResponse() = default;

void ShowJobInstanceDagResponse::validate()
{
}

web::json::value ShowJobInstanceDagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowJobInstanceDagResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<DeployVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<DeployVo>& ShowJobInstanceDagResponse::getBody()
{
    return body_;
}

void ShowJobInstanceDagResponse::setBody(const std::vector<DeployVo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowJobInstanceDagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowJobInstanceDagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


