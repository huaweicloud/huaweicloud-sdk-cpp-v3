
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForListSchema_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForListSchema_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库schema信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgresqlDatabaseForListSchema
    : public ModelBase
{
public:
    PostgresqlDatabaseForListSchema();
    virtual ~PostgresqlDatabaseForListSchema();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostgresqlDatabaseForListSchema members

    /// <summary>
    /// schema名称。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// schema所属用户。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);


protected:
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string owner_;
    bool ownerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgresqlDatabaseForListSchema_H_
