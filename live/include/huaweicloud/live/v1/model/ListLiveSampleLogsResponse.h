
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveSampleLogsResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveSampleLogsResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/live/v1/model/LogInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListLiveSampleLogsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLiveSampleLogsResponse();
    virtual ~ListLiveSampleLogsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListLiveSampleLogsResponse members

    /// <summary>
    /// 符合查询条件的总条目数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const std::string& value);

    /// <summary>
    /// 日志信息列表
    /// </summary>

    std::vector<LogInfo>& getLogs();
    bool logsIsSet() const;
    void unsetlogs();
    void setLogs(const std::vector<LogInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::string domain_;
    bool domainIsSet_;
    std::vector<LogInfo> logs_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListLiveSampleLogsResponse_H_
