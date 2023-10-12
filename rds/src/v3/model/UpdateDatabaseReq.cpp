

#include "huaweicloud/rds/v3/model/UpdateDatabaseReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDatabaseReq::UpdateDatabaseReq()
{
    name_ = "";
    nameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

UpdateDatabaseReq::~UpdateDatabaseReq() = default;

void UpdateDatabaseReq::validate()
{
}

web::json::value UpdateDatabaseReq::toJson() const
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
bool UpdateDatabaseReq::fromJson(const web::json::value& val)
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


std::string UpdateDatabaseReq::getName() const
{
    return name_;
}

void UpdateDatabaseReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDatabaseReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDatabaseReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDatabaseReq::getComment() const
{
    return comment_;
}

void UpdateDatabaseReq::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateDatabaseReq::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateDatabaseReq::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


