

#include "huaweicloud/functiongraph/v2/model/CreateEventRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




CreateEventRequestBody::CreateEventRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

CreateEventRequestBody::~CreateEventRequestBody() = default;

void CreateEventRequestBody::validate()
{
}

web::json::value CreateEventRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool CreateEventRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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


std::string CreateEventRequestBody::getName() const
{
    return name_;
}

void CreateEventRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateEventRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateEventRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateEventRequestBody::getContent() const
{
    return content_;
}

void CreateEventRequestBody::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool CreateEventRequestBody::contentIsSet() const
{
    return contentIsSet_;
}

void CreateEventRequestBody::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


