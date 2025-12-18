
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QosSendReceiveInfo.h>
#include <string>
#include <huaweicloud/meeting/v1/model/QosCpuInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// QoS数据。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosInfo
    : public ModelBase
{
public:
    QosInfo();
    virtual ~QosInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosInfo members

    /// <summary>
    /// Qos类型 - aduio：音频 - video：视频 - screen：屏幕共享 - cpu：cpu
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QosSendReceiveInfo getSend() const;
    bool sendIsSet() const;
    void unsetsend();
    void setSend(const QosSendReceiveInfo& value);

    /// <summary>
    /// 
    /// </summary>

    QosSendReceiveInfo getReceive() const;
    bool receiveIsSet() const;
    void unsetreceive();
    void setReceive(const QosSendReceiveInfo& value);

    /// <summary>
    /// 
    /// </summary>

    QosCpuInfo getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const QosCpuInfo& value);


protected:
    std::string type_;
    bool typeIsSet_;
    QosSendReceiveInfo send_;
    bool sendIsSet_;
    QosSendReceiveInfo receive_;
    bool receiveIsSet_;
    QosCpuInfo cpu_;
    bool cpuIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosInfo_H_
