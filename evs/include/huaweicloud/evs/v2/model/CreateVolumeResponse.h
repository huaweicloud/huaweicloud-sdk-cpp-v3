
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateVolumeResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateVolumeResponse();
    virtual ~CreateVolumeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateVolumeResponse members

    /// <summary>
    /// 任务ID，云硬盘为按需计费时返回该参数。 &gt; 说明： &gt;  &gt; 如果需要查询job的状态，请参考：\&quot;[查询job的状态](https://support.huaweicloud.com/api-evs/evs_04_0054.html)\&quot;。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 订单ID，云硬盘为包周期计费时返回该参数。 &gt; 说明： &gt; 直接在包周期云服务器上新增云硬盘，系统会自动将云硬盘挂载到包周期云服务器上。该情形下也会返回该参数。  &gt; - 如果您需要支付订单，请参考：\&quot;[支付包周期产品订单](https://support.huaweicloud.com/api-oce/zh-cn_topic_0075746561.html)\&quot;。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 待创建的云硬盘ID列表。 &gt; 说明： &gt; 通过云硬盘ID查询云硬盘详情 ，若返回404 可能云硬盘正在创建中或者已经创建失败。 &gt; 通过JobId查询云硬盘创建任务是否完成[查询job的状态](https://support.huaweicloud.com/api-evs/evs_04_0054.html)。
    /// </summary>

    std::vector<std::string>& getVolumeIds();
    bool volumeIdsIsSet() const;
    void unsetvolumeIds();
    void setVolumeIds(const std::vector<std::string>& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::vector<std::string> volumeIds_;
    bool volumeIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateVolumeResponse_H_
