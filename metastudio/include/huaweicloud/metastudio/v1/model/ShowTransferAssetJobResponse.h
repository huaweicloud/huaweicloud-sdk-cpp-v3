
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTransferAssetJobResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTransferAssetJobResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/DigitalAssetSummary.h>
#include <huaweicloud/metastudio/v1/model/TransferTypeEnum.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTransferAssetJobResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTransferAssetJobResponse();
    virtual ~ShowTransferAssetJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTransferAssetJobResponse members

    /// <summary>
    /// 转移资产任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TransferTypeEnum getTransferType() const;
    bool transferTypeIsSet() const;
    void unsettransferType();
    void setTransferType(const TransferTypeEnum& value);

    /// <summary>
    /// 转移资产列表
    /// </summary>

    std::vector<DigitalAssetSummary>& getTransferAssets();
    bool transferAssetsIsSet() const;
    void unsettransferAssets();
    void setTransferAssets(const std::vector<DigitalAssetSummary>& value);

    /// <summary>
    /// 任务状态 - PROCESSING: 处理过程中 - ACCEPT： 接受 - REJECT： 拒绝 - CANCEL：取消 - FAIL: 失败
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 源用户ID
    /// </summary>

    std::string getSrcProjectId() const;
    bool srcProjectIdIsSet() const;
    void unsetsrcProjectId();
    void setSrcProjectId(const std::string& value);

    /// <summary>
    /// 目标用户ID
    /// </summary>

    std::string getDestProjectId() const;
    bool destProjectIdIsSet() const;
    void unsetdestProjectId();
    void setDestProjectId(const std::string& value);

    /// <summary>
    /// 备注信息
    /// </summary>

    std::string getMemo() const;
    bool memoIsSet() const;
    void unsetmemo();
    void setMemo(const std::string& value);

    /// <summary>
    /// 冻结/解冻原因。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 资产转移开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 资产转移完成时间
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// 资产转移过期时间
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 资产转移时，是否需要从接收方扣减资源（产生计费话单）
    /// </summary>

    bool isIsNeedBilling() const;
    bool isNeedBillingIsSet() const;
    void unsetisNeedBilling();
    void setIsNeedBilling(bool value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    TransferTypeEnum transferType_;
    bool transferTypeIsSet_;
    std::vector<DigitalAssetSummary> transferAssets_;
    bool transferAssetsIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string srcProjectId_;
    bool srcProjectIdIsSet_;
    std::string destProjectId_;
    bool destProjectIdIsSet_;
    std::string memo_;
    bool memoIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    bool isNeedBilling_;
    bool isNeedBillingIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTransferAssetJobResponse_H_
