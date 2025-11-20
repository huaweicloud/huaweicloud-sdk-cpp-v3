
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransferAssetReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransferAssetReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TransferTypeEnum.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资产转移请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TransferAssetReq
    : public ModelBase
{
public:
    TransferAssetReq();
    virtual ~TransferAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferAssetReq members

    /// <summary>
    /// 
    /// </summary>

    TransferTypeEnum getTransferType() const;
    bool transferTypeIsSet() const;
    void unsettransferType();
    void setTransferType(const TransferTypeEnum& value);

    /// <summary>
    /// 资产ID列表
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);

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
    /// 是否自动接收,管理员可用
    /// </summary>

    bool isAutoAccept() const;
    bool autoAcceptIsSet() const;
    void unsetautoAccept();
    void setAutoAccept(bool value);

    /// <summary>
    /// 是否自动激活,管理员可用
    /// </summary>

    bool isAutoActive() const;
    bool autoActiveIsSet() const;
    void unsetautoActive();
    void setAutoActive(bool value);

    /// <summary>
    /// 资产转移时，是否需要从接收方扣减资源（产生计费话单）
    /// </summary>

    bool isIsNeedBilling() const;
    bool isNeedBillingIsSet() const;
    void unsetisNeedBilling();
    void setIsNeedBilling(bool value);

    /// <summary>
    /// 转移任务ID，仅在transfer_type&#x3D;TRANSFER_BACK时需要填写。
    /// </summary>

    std::string getTransferJobId() const;
    bool transferJobIdIsSet() const;
    void unsettransferJobId();
    void setTransferJobId(const std::string& value);


protected:
    TransferTypeEnum transferType_;
    bool transferTypeIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;
    std::string destProjectId_;
    bool destProjectIdIsSet_;
    std::string memo_;
    bool memoIsSet_;
    bool autoAccept_;
    bool autoAcceptIsSet_;
    bool autoActive_;
    bool autoActiveIsSet_;
    bool isNeedBilling_;
    bool isNeedBillingIsSet_;
    std::string transferJobId_;
    bool transferJobIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TransferAssetReq_H_
