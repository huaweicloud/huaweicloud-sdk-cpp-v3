

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateDatabasesRequestBody::UpdateDatabasesRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    dbId_ = 0;
    dbIdIsSet_ = false;
}

UpdateDatabasesRequestBody::~UpdateDatabasesRequestBody() = default;

void UpdateDatabasesRequestBody::validate()
{
}

web::json::value UpdateDatabasesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }

    return val;
}
bool UpdateDatabasesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    return ok;
}


std::string UpdateDatabasesRequestBody::getAction() const
{
    return action_;
}

void UpdateDatabasesRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool UpdateDatabasesRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void UpdateDatabasesRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

int32_t UpdateDatabasesRequestBody::getDbId() const
{
    return dbId_;
}

void UpdateDatabasesRequestBody::setDbId(int32_t value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool UpdateDatabasesRequestBody::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void UpdateDatabasesRequestBody::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


