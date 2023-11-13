
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseInstance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLRestoreDatabaseInfo.h>
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
/// 查询可恢复库的响应信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLRestoreDatabaseInstance
    : public ModelBase
{
public:
    PostgreSQLRestoreDatabaseInstance();
    virtual ~PostgreSQLRestoreDatabaseInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLRestoreDatabaseInstance members

    /// <summary>
    /// 恢复时间
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 库信息
    /// </summary>

    std::vector<PostgreSQLRestoreDatabaseInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<PostgreSQLRestoreDatabaseInfo>& value);


protected:
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::vector<PostgreSQLRestoreDatabaseInfo> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseInstance_H_
