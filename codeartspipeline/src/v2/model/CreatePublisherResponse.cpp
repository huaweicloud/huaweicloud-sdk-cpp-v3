

#include "huaweicloud/codeartspipeline/v2/model/CreatePublisherResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePublisherResponse::CreatePublisherResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreatePublisherResponse::~CreatePublisherResponse() = default;

void CreatePublisherResponse::validate()
{
}

web::json::value CreatePublisherResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePublisherResponse::fromJson(const web::json::value& val)
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


std::string CreatePublisherResponse::getBody() const
{
    return body_;
}

void CreatePublisherResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePublisherResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePublisherResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


