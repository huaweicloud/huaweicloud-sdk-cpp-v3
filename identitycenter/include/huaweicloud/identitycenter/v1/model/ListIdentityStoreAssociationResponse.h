
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListIdentityStoreAssociationResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListIdentityStoreAssociationResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/IdentityStoreDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  ListIdentityStoreAssociationResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIdentityStoreAssociationResponse();
    virtual ~ListIdentityStoreAssociationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIdentityStoreAssociationResponse members

    /// <summary>
    /// IAM身份中心服务实例关联的身份源配置信息
    /// </summary>

    std::vector<IdentityStoreDto>& getIdentityStoreAssociations();
    bool identityStoreAssociationsIsSet() const;
    void unsetidentityStoreAssociations();
    void setIdentityStoreAssociations(const std::vector<IdentityStoreDto>& value);


protected:
    std::vector<IdentityStoreDto> identityStoreAssociations_;
    bool identityStoreAssociationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_ListIdentityStoreAssociationResponse_H_
