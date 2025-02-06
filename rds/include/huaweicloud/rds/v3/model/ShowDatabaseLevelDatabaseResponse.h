
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDatabaseLevelDatabaseResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDatabaseLevelDatabaseResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DatabaseBackupInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowDatabaseLevelDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDatabaseLevelDatabaseResponse();
    virtual ~ShowDatabaseLevelDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDatabaseLevelDatabaseResponse members

    /// <summary>
    /// 库信息列表
    /// </summary>

    std::vector<DatabaseBackupInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DatabaseBackupInfo>& value);

    /// <summary>
    /// 可恢复库的个数
    /// </summary>

    int32_t getDatabaseLimit() const;
    bool databaseLimitIsSet() const;
    void unsetdatabaseLimit();
    void setDatabaseLimit(int32_t value);

    /// <summary>
    /// obs桶名
    /// </summary>

    std::string getBucketName() const;
    bool bucketNameIsSet() const;
    void unsetbucketName();
    void setBucketName(const std::string& value);


protected:
    std::vector<DatabaseBackupInfo> databases_;
    bool databasesIsSet_;
    int32_t databaseLimit_;
    bool databaseLimitIsSet_;
    std::string bucketName_;
    bool bucketNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDatabaseLevelDatabaseResponse_H_
