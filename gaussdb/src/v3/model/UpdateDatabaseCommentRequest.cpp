

#include "huaweicloud/gaussdb/v3/model/UpdateDatabaseCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDatabaseCommentRequest::UpdateDatabaseCommentRequest()
{
    databasesIsSet_ = false;
}

UpdateDatabaseCommentRequest::~UpdateDatabaseCommentRequest() = default;

void UpdateDatabaseCommentRequest::validate()
{
}

web::json::value UpdateDatabaseCommentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool UpdateDatabaseCommentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDatabaseComment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::vector<UpdateDatabaseComment>& UpdateDatabaseCommentRequest::getDatabases()
{
    return databases_;
}

void UpdateDatabaseCommentRequest::setDatabases(const std::vector<UpdateDatabaseComment>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UpdateDatabaseCommentRequest::databasesIsSet() const
{
    return databasesIsSet_;
}

void UpdateDatabaseCommentRequest::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


