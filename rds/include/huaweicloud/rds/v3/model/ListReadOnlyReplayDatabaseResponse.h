
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReadOnlyReplayDatabaseResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReadOnlyReplayDatabaseResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DelayRestoreDatabase.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListReadOnlyReplayDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    ListReadOnlyReplayDatabaseResponse();
    virtual ~ListReadOnlyReplayDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListReadOnlyReplayDatabaseResponse members

    /// <summary>
    /// 每次返回的库上限数量
    /// </summary>

    int32_t getDatabaseLimit() const;
    bool databaseLimitIsSet() const;
    void unsetdatabaseLimit();
    void setDatabaseLimit(int32_t value);

    /// <summary>
    /// 返回的总表数量
    /// </summary>

    int32_t getTotalTables() const;
    bool totalTablesIsSet() const;
    void unsettotalTables();
    void setTotalTables(int32_t value);

    /// <summary>
    /// 每次返回的表上限数量
    /// </summary>

    int32_t getTableLimit() const;
    bool tableLimitIsSet() const;
    void unsettableLimit();
    void setTableLimit(int32_t value);

    /// <summary>
    /// 可恢复到主实例的数据库列表
    /// </summary>

    std::vector<DelayRestoreDatabase>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<DelayRestoreDatabase>& value);


protected:
    int32_t databaseLimit_;
    bool databaseLimitIsSet_;
    int32_t totalTables_;
    bool totalTablesIsSet_;
    int32_t tableLimit_;
    bool tableLimitIsSet_;
    std::vector<DelayRestoreDatabase> databases_;
    bool databasesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListReadOnlyReplayDatabaseResponse_H_
