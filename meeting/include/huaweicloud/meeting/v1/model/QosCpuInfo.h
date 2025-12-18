
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosCpuInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosCpuInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QosDataElement.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议与会者CPU QoS数据，当qosType &#x3D; cpu 时有效。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosCpuInfo
    : public ModelBase
{
public:
    QosCpuInfo();
    virtual ~QosCpuInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosCpuInfo members

    /// <summary>
    /// App最大CPU使用率。
    /// </summary>

    std::vector<QosDataElement>& getClientCpuMax();
    bool clientCpuMaxIsSet() const;
    void unsetclientCpuMax();
    void setClientCpuMax(const std::vector<QosDataElement>& value);

    /// <summary>
    /// 系统最大CPU使用率。
    /// </summary>

    std::vector<QosDataElement>& getSystemCpuMax();
    bool systemCpuMaxIsSet() const;
    void unsetsystemCpuMax();
    void setSystemCpuMax(const std::vector<QosDataElement>& value);


protected:
    std::vector<QosDataElement> clientCpuMax_;
    bool clientCpuMaxIsSet_;
    std::vector<QosDataElement> systemCpuMax_;
    bool systemCpuMaxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosCpuInfo_H_
