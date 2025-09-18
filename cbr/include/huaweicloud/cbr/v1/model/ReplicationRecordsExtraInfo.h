
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordsExtraInfo_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordsExtraInfo_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 复制记录额外信息
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ReplicationRecordsExtraInfo
    : public ModelBase
{
public:
    ReplicationRecordsExtraInfo();
    virtual ~ReplicationRecordsExtraInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplicationRecordsExtraInfo members

    /// <summary>
    /// 复制进度
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 失败错误码，成功时为空
    /// </summary>

    std::string getFailCode() const;
    bool failCodeIsSet() const;
    void unsetfailCode();
    void setFailCode(const std::string& value);

    /// <summary>
    /// 错误原因
    /// </summary>

    std::string getFailReason() const;
    bool failReasonIsSet() const;
    void unsetfailReason();
    void setFailReason(const std::string& value);

    /// <summary>
    /// 是否为自动调度复制
    /// </summary>

    bool isAutoTrigger() const;
    bool autoTriggerIsSet() const;
    void unsetautoTrigger();
    void setAutoTrigger(bool value);

    /// <summary>
    /// 目标端的存储库id
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);


protected:
    int32_t progress_;
    bool progressIsSet_;
    std::string failCode_;
    bool failCodeIsSet_;
    std::string failReason_;
    bool failReasonIsSet_;
    bool autoTrigger_;
    bool autoTriggerIsSet_;
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ReplicationRecordsExtraInfo_H_
