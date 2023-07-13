
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrderCreateReqs_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrderCreateReqs_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultOrder.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建包周期存储库请求体
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultOrderCreateReqs
    : public ModelBase
{
public:
    VaultOrderCreateReqs();
    virtual ~VaultOrderCreateReqs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultOrderCreateReqs members

    /// <summary>
    /// 
    /// </summary>

    VaultOrder getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultOrder& value);


protected:
    VaultOrder vault_;
    bool vaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultOrderCreateReqs_H_
