

#include "huaweicloud/projectman/v4/model/CommentUpdateVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CommentUpdateVO::CommentUpdateVO()
{
    description_ = "";
    descriptionIsSet_ = false;
    at_ = "";
    atIsSet_ = false;
}

CommentUpdateVO::~CommentUpdateVO() = default;

void CommentUpdateVO::validate()
{
}

web::json::value CommentUpdateVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(atIsSet_) {
        val[utility::conversions::to_string_t("at")] = ModelBase::toJson(at_);
    }

    return val;
}
bool CommentUpdateVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAt(refVal);
        }
    }
    return ok;
}


std::string CommentUpdateVO::getDescription() const
{
    return description_;
}

void CommentUpdateVO::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CommentUpdateVO::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CommentUpdateVO::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CommentUpdateVO::getAt() const
{
    return at_;
}

void CommentUpdateVO::setAt(const std::string& value)
{
    at_ = value;
    atIsSet_ = true;
}

bool CommentUpdateVO::atIsSet() const
{
    return atIsSet_;
}

void CommentUpdateVO::unsetat()
{
    atIsSet_ = false;
}

}
}
}
}
}


