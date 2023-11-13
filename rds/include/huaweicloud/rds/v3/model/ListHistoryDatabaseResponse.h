
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryDatabaseResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryDatabaseResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseInstance.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListHistoryDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    ListHistoryDatabaseResponse();
    virtual ~ListHistoryDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListHistoryDatabaseResponse members

    /// <summary>
    /// 恢复库数量限制个数
    /// </summary>

    int32_t getDatabaseLimit() const;
    bool databaseLimitIsSet() const;
    void unsetdatabaseLimit();
    void setDatabaseLimit(int32_t value);

    /// <summary>
    /// 恢复表数量限制个数
    /// </summary>

    int32_t getTableLimit() const;
    bool tableLimitIsSet() const;
    void unsettableLimit();
    void setTableLimit(int32_t value);

    /// <summary>
    /// 实例信息
    /// </summary>

    std::vector<PostgreSQLHistoryDatabaseInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<PostgreSQLHistoryDatabaseInstance>& value);


protected:
    int32_t databaseLimit_;
    bool databaseLimitIsSet_;
    int32_t tableLimit_;
    bool tableLimitIsSet_;
    std::vector<PostgreSQLHistoryDatabaseInstance> instances_;
    bool instancesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListHistoryDatabaseResponse_H_
