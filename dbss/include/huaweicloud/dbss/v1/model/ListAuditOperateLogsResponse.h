
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/OperateLogInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditOperateLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAuditOperateLogsResponse();
    virtual ~ListAuditOperateLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditOperateLogsResponse members

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 操作日志列表
    /// </summary>

    std::vector<OperateLogInfo>& getOperateLog();
    bool operateLogIsSet() const;
    void unsetoperateLog();
    void setOperateLog(const std::vector<OperateLogInfo>& value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    std::vector<OperateLogInfo> operateLog_;
    bool operateLogIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditOperateLogsResponse_H_
