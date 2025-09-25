

#include "huaweicloud/codeartspipeline/v2/model/DeleteBasicPluginResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteBasicPluginResponse::DeleteBasicPluginResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteBasicPluginResponse::~DeleteBasicPluginResponse() = default;

void DeleteBasicPluginResponse::validate()
{
}

web::json::value DeleteBasicPluginResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteBasicPluginResponse::fromJson(const web::json::value& val)
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


std::string DeleteBasicPluginResponse::getBody() const
{
    return body_;
}

void DeleteBasicPluginResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteBasicPluginResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteBasicPluginResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


