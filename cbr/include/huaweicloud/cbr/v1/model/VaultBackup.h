
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackup_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackup_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/CheckpointParam.h>
#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  VaultBackup
    : public ModelBase
{
public:
    VaultBackup();
    virtual ~VaultBackup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VaultBackup members

    /// <summary>
    /// 
    /// </summary>

    CheckpointParam getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const CheckpointParam& value);

    /// <summary>
    /// 存储库ID
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);


protected:
    CheckpointParam parameters_;
    bool parametersIsSet_;
    std::string vaultId_;
    bool vaultIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultBackup_H_
