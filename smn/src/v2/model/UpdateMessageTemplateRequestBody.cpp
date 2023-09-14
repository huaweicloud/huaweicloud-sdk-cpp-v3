

#include "huaweicloud/smn/v2/model/UpdateMessageTemplateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




UpdateMessageTemplateRequestBody::UpdateMessageTemplateRequestBody()
{
    content_ = "";
    contentIsSet_ = false;
}

UpdateMessageTemplateRequestBody::~UpdateMessageTemplateRequestBody() = default;

void UpdateMessageTemplateRequestBody::validate()
{
}

web::json::value UpdateMessageTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}

bool UpdateMessageTemplateRequestBody::fromJson(const web::json::value& val)
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

std::string UpdateMessageTemplateRequestBody::getContent() const
{
    return content_;
}

void UpdateMessageTemplateRequestBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool UpdateMessageTemplateRequestBody::contentIsSet() const
{
    return contentIsSet_;
}

void UpdateMessageTemplateRequestBody::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


