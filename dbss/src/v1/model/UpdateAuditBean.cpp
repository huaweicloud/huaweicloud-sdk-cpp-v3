

#include "huaweicloud/dbss/v1/model/UpdateAuditBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditBean::UpdateAuditBean()
{
    name_ = "";
    nameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

UpdateAuditBean::~UpdateAuditBean() = default;

void UpdateAuditBean::validate()
{
}

web::json::value UpdateAuditBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}
bool UpdateAuditBean::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditBean::getName() const
{
    return name_;
}

void UpdateAuditBean::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAuditBean::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAuditBean::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAuditBean::getComment() const
{
    return comment_;
}

void UpdateAuditBean::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateAuditBean::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateAuditBean::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


