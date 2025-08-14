
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ProvisioningTenant_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ProvisioningTenant_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ProvisioningTenant
    : public ModelBase
{
public:
    ProvisioningTenant();
    virtual ~ProvisioningTenant();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProvisioningTenant members

    /// <summary>
    /// 创建时间
    /// </summary>

    double getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(double value);

    /// <summary>
    /// SCIM终端节点
    /// </summary>

    std::string getScimEndpoint() const;
    bool scimEndpointIsSet() const;
    void unsetscimEndpoint();
    void setScimEndpoint(const std::string& value);

    /// <summary>
    /// 开启自动预配后生成的全局唯一标识符（ID）
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);


protected:
    double creationTime_;
    bool creationTimeIsSet_;
    std::string scimEndpoint_;
    bool scimEndpointIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ProvisioningTenant_H_
