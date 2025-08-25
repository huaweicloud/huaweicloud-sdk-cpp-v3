
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterCheckStatus.h>
#include <huaweicloud/cce/v3/model/AddonCheckStatus.h>
#include <huaweicloud/cce/v3/model/NodeCheckStatus.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级前检查状态
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PrecheckStatus
    : public ModelBase
{
public:
    PrecheckStatus();
    virtual ~PrecheckStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckStatus members

    /// <summary>
    /// 状态，取值如下 - Init: 初始化 - Running 运行中 - Success 成功 - Failed 失败 - Error 错误
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 检查结果过期时间
    /// </summary>

    std::string getExpireTimeStamp() const;
    bool expireTimeStampIsSet() const;
    void unsetexpireTimeStamp();
    void setExpireTimeStamp(const std::string& value);

    /// <summary>
    /// 信息，一般是执行错误的日志信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ClusterCheckStatus getClusterCheckStatus() const;
    bool clusterCheckStatusIsSet() const;
    void unsetclusterCheckStatus();
    void setClusterCheckStatus(const ClusterCheckStatus& value);

    /// <summary>
    /// 
    /// </summary>

    AddonCheckStatus getAddonCheckStatus() const;
    bool addonCheckStatusIsSet() const;
    void unsetaddonCheckStatus();
    void setAddonCheckStatus(const AddonCheckStatus& value);

    /// <summary>
    /// 
    /// </summary>

    NodeCheckStatus getNodeCheckStatus() const;
    bool nodeCheckStatusIsSet() const;
    void unsetnodeCheckStatus();
    void setNodeCheckStatus(const NodeCheckStatus& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string expireTimeStamp_;
    bool expireTimeStampIsSet_;
    std::string message_;
    bool messageIsSet_;
    ClusterCheckStatus clusterCheckStatus_;
    bool clusterCheckStatusIsSet_;
    AddonCheckStatus addonCheckStatus_;
    bool addonCheckStatusIsSet_;
    NodeCheckStatus nodeCheckStatus_;
    bool nodeCheckStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PrecheckStatus_H_
