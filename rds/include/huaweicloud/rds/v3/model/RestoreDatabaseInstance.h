
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInstance_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInstance_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestoreDatabaseInfo.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreDatabaseInstance
    : public ModelBase
{
public:
    RestoreDatabaseInstance();
    virtual ~RestoreDatabaseInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreDatabaseInstance members

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
    /// 是否使用极速恢复，可先根据”获取实例是否能使用极速恢复“接口判断本次恢复是否能使用极速恢复。 如果实例使用了XA事务，采用极速恢复的方式会导致恢复失败！
    /// </summary>

    bool isIsFastRestore() const;
    bool isFastRestoreIsSet() const;
    void unsetisFastRestore();
    void setIsFastRestore(bool value);

    /// <summary>
    /// 库信息
    /// </summary>

    std::vector<RestoreDatabaseInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<RestoreDatabaseInfo>& value);


protected:
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    bool isFastRestore_;
    bool isFastRestoreIsSet_;
    std::vector<RestoreDatabaseInfo> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreDatabaseInstance_H_
