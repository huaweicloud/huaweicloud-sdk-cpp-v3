

#include "huaweicloud/modelarts/v1/model/ShowAssetExtendMessageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowAssetExtendMessageResponse::ShowAssetExtendMessageResponse()
{
    bodyIsSet_ = false;
}

ShowAssetExtendMessageResponse::~ShowAssetExtendMessageResponse() = default;

void ShowAssetExtendMessageResponse::validate()
{
}

web::json::value ShowAssetExtendMessageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowAssetExtendMessageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::map<std::string, Object>& ShowAssetExtendMessageResponse::getBody()
{
    return body_;
}

void ShowAssetExtendMessageResponse::setBody(const std::map<std::string, Object>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAssetExtendMessageResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAssetExtendMessageResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


