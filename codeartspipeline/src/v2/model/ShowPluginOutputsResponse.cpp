

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginOutputsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginOutputsResponse::ShowPluginOutputsResponse()
{
    bodyIsSet_ = false;
}

ShowPluginOutputsResponse::~ShowPluginOutputsResponse() = default;

void ShowPluginOutputsResponse::validate()
{
}

web::json::value ShowPluginOutputsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPluginOutputsResponse::fromJson(const web::json::value& val)
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


std::vector<PluginPartQueryVOListAgentPluginOutputVO>& ShowPluginOutputsResponse::getBody()
{
    return body_;
}

void ShowPluginOutputsResponse::setBody(const std::vector<PluginPartQueryVOListAgentPluginOutputVO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginOutputsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginOutputsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


