

#include "huaweicloud/gaussdb/v3/model/UpdateDatabaseComment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDatabaseComment::UpdateDatabaseComment()
{
    name_ = "";
    nameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

UpdateDatabaseComment::~UpdateDatabaseComment() = default;

void UpdateDatabaseComment::validate()
{
}

web::json::value UpdateDatabaseComment::toJson() const
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

bool UpdateDatabaseComment::fromJson(const web::json::value& val)
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

std::string UpdateDatabaseComment::getName() const
{
    return name_;
}

void UpdateDatabaseComment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDatabaseComment::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDatabaseComment::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDatabaseComment::getComment() const
{
    return comment_;
}

void UpdateDatabaseComment::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateDatabaseComment::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateDatabaseComment::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


