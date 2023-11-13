
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 查询可恢复库的请求信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLHistoryDatabaseRequest
    : public ModelBase
{
public:
    PostgreSQLHistoryDatabaseRequest();
    virtual ~PostgreSQLHistoryDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLHistoryDatabaseRequest members

    /// <summary>
    /// 实例ID集合
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 恢复时间点
    /// </summary>

    int64_t getRestoreTime() const;
    bool restoreTimeIsSet() const;
    void unsetrestoreTime();
    void setRestoreTime(int64_t value);

    /// <summary>
    /// 数据库名，模糊查询
    /// </summary>

    std::string getDatabaseNameLike() const;
    bool databaseNameLikeIsSet() const;
    void unsetdatabaseNameLike();
    void setDatabaseNameLike(const std::string& value);

    /// <summary>
    /// 实例名称，模糊查询
    /// </summary>

    std::string getInstanceNameLike() const;
    bool instanceNameLikeIsSet() const;
    void unsetinstanceNameLike();
    void setInstanceNameLike(const std::string& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    int64_t restoreTime_;
    bool restoreTimeIsSet_;
    std::string databaseNameLike_;
    bool databaseNameLikeIsSet_;
    std::string instanceNameLike_;
    bool instanceNameLikeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLHistoryDatabaseRequest_H_
