

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginInputsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginInputsResponse::ShowPluginInputsResponse()
{
    bodyIsSet_ = false;
}

ShowPluginInputsResponse::~ShowPluginInputsResponse() = default;

void ShowPluginInputsResponse::validate()
{
}

web::json::value ShowPluginInputsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPluginInputsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<PluginPartQueryVOListAgentPluginInputVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<PluginPartQueryVOListAgentPluginInputVO>& ShowPluginInputsResponse::getBody()
{
    return body_;
}

void ShowPluginInputsResponse::setBody(const std::vector<PluginPartQueryVOListAgentPluginInputVO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginInputsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginInputsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


