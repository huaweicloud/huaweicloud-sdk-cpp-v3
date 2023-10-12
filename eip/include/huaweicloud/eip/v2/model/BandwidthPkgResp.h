
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BandwidthPkgResp_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BandwidthPkgResp_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BandwidthPkgResp
    : public ModelBase
{
public:
    BandwidthPkgResp();
    virtual ~BandwidthPkgResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BandwidthPkgResp members

    /// <summary>
    /// - 功能说明：加油包ID - 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// - 功能说明：资源创建时间，UTC时间格式：2016-03-28T00:00:00Z
    /// </summary>

    std::string getProcessedTime() const;
    bool processedTimeIsSet() const;
    void unsetprocessedTime();
    void setProcessedTime(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包绑定的原带宽ID
    /// </summary>

    std::string getBandwidthId() const;
    bool bandwidthIdIsSet() const;
    void unsetbandwidthId();
    void setBandwidthId(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包的大小，即在原始带宽之上提升的带宽大小 - 取值范围：&gt;1M，pkgSize+原始带宽大小 &lt; 云服务带宽接口限制的带宽上限
    /// </summary>

    int32_t getPkgSize() const;
    bool pkgSizeIsSet() const;
    void unsetpkgSize();
    void setPkgSize(int32_t value);

    /// <summary>
    /// - 功能说明：租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包订单相关信息格式：非空时值为&#39;&#39;orderId:productId&#39;&#39;
    /// </summary>

    std::string getBillingInfo() const;
    bool billingInfoIsSet() const;
    void unsetbillingInfo();
    void setBillingInfo(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包起始生效时间，UTC时间格式：2016-03-28T00:00:00Z - 取值范围：startTime &gt;&#x3D; 服务处理请求的时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包结束时间UTC时间格式：2016-03-28T00:00:00Z - 取值范围：startTime &lt; endTime
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// - 功能说明：加油包资源状态，仅管理员权限可以变更状态 - 取值范围：&#39;&#39;pending&#39;&#39;, &#39;&#39;active&#39;&#39;, &#39;&#39;completed&#39;&#39;, &#39;&#39;error&#39;&#39;
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string processedTime_;
    bool processedTimeIsSet_;
    std::string bandwidthId_;
    bool bandwidthIdIsSet_;
    int32_t pkgSize_;
    bool pkgSizeIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string billingInfo_;
    bool billingInfoIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BandwidthPkgResp_H_
