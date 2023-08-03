

#include "huaweicloud/rds/v3/model/UpdateDbUserReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDbUserReq::UpdateDbUserReq()
{
    comment_ = "";
    commentIsSet_ = false;
}

UpdateDbUserReq::~UpdateDbUserReq() = default;

void UpdateDbUserReq::validate()
{
}

web::json::value UpdateDbUserReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}

bool UpdateDbUserReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

std::string UpdateDbUserReq::getComment() const
{
    return comment_;
}

void UpdateDbUserReq::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateDbUserReq::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateDbUserReq::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


