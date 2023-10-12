
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdateReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 存储库修改参数体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultUpdateReq
    : public ModelBase
{
public:
    VaultUpdateReq();
    virtual ~VaultUpdateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultUpdateReq members

    /// <summary>
    /// 
    /// </summary>

    VaultUpdate getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultUpdate& value);


protected:
    VaultUpdate vault_;
    bool vaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultUpdateReq_H_
