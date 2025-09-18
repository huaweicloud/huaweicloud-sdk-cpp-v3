

#include "huaweicloud/projectman/v4/model/IssueRecordV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IssueRecordV4::IssueRecordV4()
{
    id_ = 0;
    idIsSet_ = false;
    createdTime_ = 0L;
    createdTimeIsSet_ = false;
    userIsSet_ = false;
    detailsIsSet_ = false;
}

IssueRecordV4::~IssueRecordV4() = default;

void IssueRecordV4::validate()
{
}

web::json::value IssueRecordV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }

    return val;
}
bool IssueRecordV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            IssueRecordV4_user refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::vector<IssueRecordV4_details> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    return ok;
}


int32_t IssueRecordV4::getId() const
{
    return id_;
}

void IssueRecordV4::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IssueRecordV4::idIsSet() const
{
    return idIsSet_;
}

void IssueRecordV4::unsetid()
{
    idIsSet_ = false;
}

int64_t IssueRecordV4::getCreatedTime() const
{
    return createdTime_;
}

void IssueRecordV4::setCreatedTime(int64_t value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool IssueRecordV4::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void IssueRecordV4::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

IssueRecordV4_user IssueRecordV4::getUser() const
{
    return user_;
}

void IssueRecordV4::setUser(const IssueRecordV4_user& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool IssueRecordV4::userIsSet() const
{
    return userIsSet_;
}

void IssueRecordV4::unsetuser()
{
    userIsSet_ = false;
}

std::vector<IssueRecordV4_details>& IssueRecordV4::getDetails()
{
    return details_;
}

void IssueRecordV4::setDetails(const std::vector<IssueRecordV4_details>& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool IssueRecordV4::detailsIsSet() const
{
    return detailsIsSet_;
}

void IssueRecordV4::unsetdetails()
{
    detailsIsSet_ = false;
}

}
}
}
}
}


