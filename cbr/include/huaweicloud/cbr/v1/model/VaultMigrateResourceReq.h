
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultMigrateResourceReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultMigrateResourceReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CBR_V1_EXPORT  VaultMigrateResourceReq
    : public ModelBase
{
public:
    VaultMigrateResourceReq();
    virtual ~VaultMigrateResourceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VaultMigrateResourceReq members

    /// <summary>
    /// 目标存储库
    /// </summary>

    std::string getDestinationVaultId() const;
    bool destinationVaultIdIsSet() const;
    void unsetdestinationVaultId();
    void setDestinationVaultId(const std::string& value);

    /// <summary>
    /// 待迁移的资源ID
    /// </summary>

    std::vector<std::string>& getResourceIds();
    bool resourceIdsIsSet() const;
    void unsetresourceIds();
    void setResourceIds(const std::vector<std::string>& value);


protected:
    std::string destinationVaultId_;
    bool destinationVaultIdIsSet_;
    std::vector<std::string> resourceIds_;
    bool resourceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_VaultMigrateResourceReq_H_
