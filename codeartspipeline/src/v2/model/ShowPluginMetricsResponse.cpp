

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginMetricsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginMetricsResponse::ShowPluginMetricsResponse()
{
    bodyIsSet_ = false;
}

ShowPluginMetricsResponse::~ShowPluginMetricsResponse() = default;

void ShowPluginMetricsResponse::validate()
{
}

web::json::value ShowPluginMetricsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPluginMetricsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginPartQueryVOListAgentPluginOutputVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PluginPartQueryVOListAgentPluginOutputVO>& ShowPluginMetricsResponse::getBody()
{
    return body_;
}

void ShowPluginMetricsResponse::setBody(const std::vector<PluginPartQueryVOListAgentPluginOutputVO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginMetricsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginMetricsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


