
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseReplicationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseReplicationResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChDatabaseReplicationInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListClickHouseDataBaseReplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    ListClickHouseDataBaseReplicationResponse();
    virtual ~ListClickHouseDataBaseReplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListClickHouseDataBaseReplicationResponse members

    /// <summary>
    /// 查询数据同步任务数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 数据同步任务信息。
    /// </summary>

    std::vector<ChDatabaseReplicationInfo>& getReplications();
    bool replicationsIsSet() const;
    void unsetreplications();
    void setReplications(const std::vector<ChDatabaseReplicationInfo>& value);

    /// <summary>
    /// taurus操作表示，重启、规格变更、倒换等。
    /// </summary>

    std::string getExtText() const;
    bool extTextIsSet() const;
    void unsetextText();
    void setExtText(const std::string& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ChDatabaseReplicationInfo> replications_;
    bool replicationsIsSet_;
    std::string extText_;
    bool extTextIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListClickHouseDataBaseReplicationResponse_H_
