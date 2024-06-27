

#include "huaweicloud/cfw/v1/model/DeleteTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteTagResponse::DeleteTagResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteTagResponse::~DeleteTagResponse() = default;

void DeleteTagResponse::validate()
{
}

web::json::value DeleteTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteTagResponse::fromJson(const web::json::value& val)
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


std::string DeleteTagResponse::getBody() const
{
    return body_;
}

void DeleteTagResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


