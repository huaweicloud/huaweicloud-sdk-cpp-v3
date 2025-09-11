
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowInstanceMonitorInfoResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowInstanceMonitorInfoResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/TrafficInfo.h>
#include <huaweicloud/dbss/v1/model/SystemInfo.h>
#include <huaweicloud/dbss/v1/model/DiskInfo.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ShowInstanceMonitorInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInstanceMonitorInfoResponse();
    virtual ~ShowInstanceMonitorInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceMonitorInfoResponse members

    /// <summary>
    /// 
    /// </summary>

    DiskInfo getDiskInfos() const;
    bool diskInfosIsSet() const;
    void unsetdiskInfos();
    void setDiskInfos(const DiskInfo& value);

    /// <summary>
    /// 系统信息
    /// </summary>

    std::vector<SystemInfo>& getSystemInfos();
    bool systemInfosIsSet() const;
    void unsetsystemInfos();
    void setSystemInfos(const std::vector<SystemInfo>& value);

    /// <summary>
    /// 流量统计
    /// </summary>

    std::vector<TrafficInfo>& getTrafficInfos();
    bool trafficInfosIsSet() const;
    void unsettrafficInfos();
    void setTrafficInfos(const std::vector<TrafficInfo>& value);


protected:
    DiskInfo diskInfos_;
    bool diskInfosIsSet_;
    std::vector<SystemInfo> systemInfos_;
    bool systemInfosIsSet_;
    std::vector<TrafficInfo> trafficInfos_;
    bool trafficInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ShowInstanceMonitorInfoResponse_H_
