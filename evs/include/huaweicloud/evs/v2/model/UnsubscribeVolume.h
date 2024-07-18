
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 包周期云硬盘退订的结果
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UnsubscribeVolume
    : public ModelBase
{
public:
    UnsubscribeVolume();
    virtual ~UnsubscribeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnsubscribeVolume members

    /// <summary>
    /// 卷id对应的结果
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);

    /// <summary>
    /// 卷id对应的退订订单id，如果是已到期的云硬盘退订，则不显示此字段。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// volume_id对应的退订结果，只有SUCCESS 和 FAIL两种结果。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 当result为FAIL时，此字段显示具体的失败原因。 result为SUCCESS时，不显示此字段。
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);


protected:
    std::string volumeId_;
    bool volumeIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UnsubscribeVolume_H_
