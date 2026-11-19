

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlInstanceRequestBody::DeleteGaussMySqlInstanceRequestBody()
{
    backupRetentionStrategy_ = "";
    backupRetentionStrategyIsSet_ = false;
}

DeleteGaussMySqlInstanceRequestBody::~DeleteGaussMySqlInstanceRequestBody() = default;

void DeleteGaussMySqlInstanceRequestBody::validate()
{
}

web::json::value DeleteGaussMySqlInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupRetentionStrategyIsSet_) {
        val[utility::conversions::to_string_t("backup_retention_strategy")] = ModelBase::toJson(backupRetentionStrategy_);
    }

    return val;
}
bool DeleteGaussMySqlInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_retention_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_retention_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupRetentionStrategy(refVal);
        }
    }
    return ok;
}


std::string DeleteGaussMySqlInstanceRequestBody::getBackupRetentionStrategy() const
{
    return backupRetentionStrategy_;
}

void DeleteGaussMySqlInstanceRequestBody::setBackupRetentionStrategy(const std::string& value)
{
    backupRetentionStrategy_ = value;
    backupRetentionStrategyIsSet_ = true;
}

bool DeleteGaussMySqlInstanceRequestBody::backupRetentionStrategyIsSet() const
{
    return backupRetentionStrategyIsSet_;
}

void DeleteGaussMySqlInstanceRequestBody::unsetbackupRetentionStrategy()
{
    backupRetentionStrategyIsSet_ = false;
}

}
}
}
}
}


