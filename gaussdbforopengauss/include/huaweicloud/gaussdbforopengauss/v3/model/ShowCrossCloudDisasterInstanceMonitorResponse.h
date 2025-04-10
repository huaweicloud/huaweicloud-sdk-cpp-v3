
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterInstanceMonitorResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterInstanceMonitorResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ShowCrossCloudDisasterInstanceMonitorResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowCrossCloudDisasterInstanceMonitorResponse();
    virtual ~ShowCrossCloudDisasterInstanceMonitorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCrossCloudDisasterInstanceMonitorResponse members

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 容灾状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 数据恢复点目标。
    /// </summary>

    std::string getRpo() const;
    bool rpoIsSet() const;
    void unsetrpo();
    void setRpo(const std::string& value);

    /// <summary>
    /// 数据恢复时间目标。
    /// </summary>

    std::string getRto() const;
    bool rtoIsSet() const;
    void unsetrto();
    void setRto(const std::string& value);

    /// <summary>
    /// rpo阈值。
    /// </summary>

    std::string getRpoThreshold() const;
    bool rpoThresholdIsSet() const;
    void unsetrpoThreshold();
    void setRpoThreshold(const std::string& value);

    /// <summary>
    /// rto阈值。
    /// </summary>

    std::string getRtoThreshold() const;
    bool rtoThresholdIsSet() const;
    void unsetrtoThreshold();
    void setRtoThreshold(const std::string& value);

    /// <summary>
    /// 主从切换进度。该值为一个百分数。例如：40%。
    /// </summary>

    std::string getSwitchoverProgress() const;
    bool switchoverProgressIsSet() const;
    void unsetswitchoverProgress();
    void setSwitchoverProgress(const std::string& value);

    /// <summary>
    /// 容灾升主进度。该值为一个百分数。例如：40%。
    /// </summary>

    std::string getFailoverProgress() const;
    bool failoverProgressIsSet() const;
    void unsetfailoverProgress();
    void setFailoverProgress(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string rpo_;
    bool rpoIsSet_;
    std::string rto_;
    bool rtoIsSet_;
    std::string rpoThreshold_;
    bool rpoThresholdIsSet_;
    std::string rtoThreshold_;
    bool rtoThresholdIsSet_;
    std::string switchoverProgress_;
    bool switchoverProgressIsSet_;
    std::string failoverProgress_;
    bool failoverProgressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ShowCrossCloudDisasterInstanceMonitorResponse_H_
