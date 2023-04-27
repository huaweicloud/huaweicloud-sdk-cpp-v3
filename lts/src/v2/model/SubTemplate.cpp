

#include "huaweicloud/lts/v2/model/SubTemplate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SubTemplate::SubTemplate()
{
    subType_ = "";
    subTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

SubTemplate::~SubTemplate() = default;

void SubTemplate::validate()
{
}

web::json::value SubTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_type")] = ModelBase::toJson(subType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}

bool SubTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sub_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubType(refVal);
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


std::string SubTemplate::getSubType() const
{
    return subType_;
}

void SubTemplate::setSubType(const std::string& value)
{
    subType_ = value;
    subTypeIsSet_ = true;
}

bool SubTemplate::subTypeIsSet() const
{
    return subTypeIsSet_;
}

void SubTemplate::unsetsubType()
{
    subTypeIsSet_ = false;
}

std::string SubTemplate::getContent() const
{
    return content_;
}

void SubTemplate::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool SubTemplate::contentIsSet() const
{
    return contentIsSet_;
}

void SubTemplate::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


