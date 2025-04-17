

#include "huaweicloud/antiddos/v2/model/CleanLimitDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




CleanLimitDict::CleanLimitDict()
{
    cleaningAccessPosId_ = 0L;
    cleaningAccessPosIdIsSet_ = false;
    newConnectionLimited_ = 0L;
    newConnectionLimitedIsSet_ = false;
    totalConnectionLimited_ = 0L;
    totalConnectionLimitedIsSet_ = false;
}

CleanLimitDict::~CleanLimitDict() = default;

void CleanLimitDict::validate()
{
}

web::json::value CleanLimitDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cleaningAccessPosIdIsSet_) {
        val[utility::conversions::to_string_t("cleaning_access_pos_id")] = ModelBase::toJson(cleaningAccessPosId_);
    }
    if(newConnectionLimitedIsSet_) {
        val[utility::conversions::to_string_t("new_connection_limited")] = ModelBase::toJson(newConnectionLimited_);
    }
    if(totalConnectionLimitedIsSet_) {
        val[utility::conversions::to_string_t("total_connection_limited")] = ModelBase::toJson(totalConnectionLimited_);
    }

    return val;
}
bool CleanLimitDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cleaning_access_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cleaning_access_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCleaningAccessPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_connection_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_connection_limited"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewConnectionLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_connection_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_connection_limited"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalConnectionLimited(refVal);
        }
    }
    return ok;
}


int64_t CleanLimitDict::getCleaningAccessPosId() const
{
    return cleaningAccessPosId_;
}

void CleanLimitDict::setCleaningAccessPosId(int64_t value)
{
    cleaningAccessPosId_ = value;
    cleaningAccessPosIdIsSet_ = true;
}

bool CleanLimitDict::cleaningAccessPosIdIsSet() const
{
    return cleaningAccessPosIdIsSet_;
}

void CleanLimitDict::unsetcleaningAccessPosId()
{
    cleaningAccessPosIdIsSet_ = false;
}

int64_t CleanLimitDict::getNewConnectionLimited() const
{
    return newConnectionLimited_;
}

void CleanLimitDict::setNewConnectionLimited(int64_t value)
{
    newConnectionLimited_ = value;
    newConnectionLimitedIsSet_ = true;
}

bool CleanLimitDict::newConnectionLimitedIsSet() const
{
    return newConnectionLimitedIsSet_;
}

void CleanLimitDict::unsetnewConnectionLimited()
{
    newConnectionLimitedIsSet_ = false;
}

int64_t CleanLimitDict::getTotalConnectionLimited() const
{
    return totalConnectionLimited_;
}

void CleanLimitDict::setTotalConnectionLimited(int64_t value)
{
    totalConnectionLimited_ = value;
    totalConnectionLimitedIsSet_ = true;
}

bool CleanLimitDict::totalConnectionLimitedIsSet() const
{
    return totalConnectionLimitedIsSet_;
}

void CleanLimitDict::unsettotalConnectionLimited()
{
    totalConnectionLimitedIsSet_ = false;
}

}
}
}
}
}


