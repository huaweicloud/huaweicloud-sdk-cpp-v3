

#include "huaweicloud/projectman/v4/model/ListSpecIssueStayTimesResponseBody_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListSpecIssueStayTimesResponseBody_data::ListSpecIssueStayTimesResponseBody_data()
{
    id_ = "";
    idIsSet_ = false;
    stayTime_ = 0L;
    stayTimeIsSet_ = false;
}

ListSpecIssueStayTimesResponseBody_data::~ListSpecIssueStayTimesResponseBody_data() = default;

void ListSpecIssueStayTimesResponseBody_data::validate()
{
}

web::json::value ListSpecIssueStayTimesResponseBody_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stayTimeIsSet_) {
        val[utility::conversions::to_string_t("stay_time")] = ModelBase::toJson(stayTime_);
    }

    return val;
}
bool ListSpecIssueStayTimesResponseBody_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stay_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stay_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStayTime(refVal);
        }
    }
    return ok;
}


std::string ListSpecIssueStayTimesResponseBody_data::getId() const
{
    return id_;
}

void ListSpecIssueStayTimesResponseBody_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSpecIssueStayTimesResponseBody_data::idIsSet() const
{
    return idIsSet_;
}

void ListSpecIssueStayTimesResponseBody_data::unsetid()
{
    idIsSet_ = false;
}

int64_t ListSpecIssueStayTimesResponseBody_data::getStayTime() const
{
    return stayTime_;
}

void ListSpecIssueStayTimesResponseBody_data::setStayTime(int64_t value)
{
    stayTime_ = value;
    stayTimeIsSet_ = true;
}

bool ListSpecIssueStayTimesResponseBody_data::stayTimeIsSet() const
{
    return stayTimeIsSet_;
}

void ListSpecIssueStayTimesResponseBody_data::unsetstayTime()
{
    stayTimeIsSet_ = false;
}

}
}
}
}
}


