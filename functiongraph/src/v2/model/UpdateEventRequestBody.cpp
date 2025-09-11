

#include "huaweicloud/functiongraph/v2/model/UpdateEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




UpdateEventRequestBody::UpdateEventRequestBody()
{
    content_ = "";
    contentIsSet_ = false;
}

UpdateEventRequestBody::~UpdateEventRequestBody() = default;

void UpdateEventRequestBody::validate()
{
}

web::json::value UpdateEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool UpdateEventRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string UpdateEventRequestBody::getContent() const
{
    return content_;
}

void UpdateEventRequestBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateEventRequestBody::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateEventRequestBody::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


