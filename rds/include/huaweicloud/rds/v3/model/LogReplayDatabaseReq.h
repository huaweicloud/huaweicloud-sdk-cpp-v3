
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_LogReplayDatabaseReq_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_LogReplayDatabaseReq_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestoreInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 库回放请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  LogReplayDatabaseReq
    : public ModelBase
{
public:
    LogReplayDatabaseReq();
    virtual ~LogReplayDatabaseReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogReplayDatabaseReq members

    /// <summary>
    /// 需要恢复的库名列表
    /// </summary>

    std::vector<RestoreInfo>& getDatabases();
    bool databasesIsSet() const;
    void unsetdatabases();
    void setDatabases(const std::vector<RestoreInfo>& value);


protected:
    std::vector<RestoreInfo> databases_;
    bool databasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_LogReplayDatabaseReq_H_
