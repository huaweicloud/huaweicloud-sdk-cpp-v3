
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLHistoryTableInstance.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlListHistoryTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlListHistoryTablesResponse();
    virtual ~ListPostgresqlListHistoryTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPostgresqlListHistoryTablesResponse members

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

    std::vector<PostgreSQLHistoryTableInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<PostgreSQLHistoryTableInstance>& value);


protected:
    int32_t tableLimit_;
    bool tableLimitIsSet_;
    std::vector<PostgreSQLHistoryTableInstance> instances_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesResponse_H_
