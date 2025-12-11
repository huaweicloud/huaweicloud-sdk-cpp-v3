
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdb/v3/model/AutoSqlLimitingLog.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowAutoSqlLimitingLogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoSqlLimitingLogResponse();
    virtual ~ShowAutoSqlLimitingLogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSqlLimitingLogResponse members

    /// <summary>
    /// **参数解释**：  查询自治限流执行记录列表。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<AutoSqlLimitingLog>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<AutoSqlLimitingLog>& value);


protected:
    std::vector<AutoSqlLimitingLog> logs_;
    bool logsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowAutoSqlLimitingLogResponse_H_
