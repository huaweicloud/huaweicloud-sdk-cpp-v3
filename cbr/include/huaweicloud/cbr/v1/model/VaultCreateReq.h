
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultCreate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  VaultCreateReq
    : public ModelBase
{
public:
    VaultCreateReq();
    virtual ~VaultCreateReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultCreateReq members

    /// <summary>
    /// 
    /// </summary>

    VaultCreate getVault() const;
    bool vaultIsSet() const;
    void unsetvault();
    void setVault(const VaultCreate& value);


protected:
    VaultCreate vault_;
    bool vaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultCreateReq_H_
