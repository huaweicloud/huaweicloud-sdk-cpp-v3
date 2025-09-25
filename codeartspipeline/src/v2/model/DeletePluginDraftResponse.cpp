

#include "huaweicloud/codeartspipeline/v2/model/DeletePluginDraftResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePluginDraftResponse::DeletePluginDraftResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeletePluginDraftResponse::~DeletePluginDraftResponse() = default;

void DeletePluginDraftResponse::validate()
{
}

web::json::value DeletePluginDraftResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeletePluginDraftResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeletePluginDraftResponse::getBody() const
{
    return body_;
}

void DeletePluginDraftResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeletePluginDraftResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeletePluginDraftResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


