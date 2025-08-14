
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPConfigurationsForDirectoryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPConfigurationsForDirectoryResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/ExternalIdpConfigurationDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ListExternalIdPConfigurationsForDirectoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListExternalIdPConfigurationsForDirectoryResponse();
    virtual ~ListExternalIdPConfigurationsForDirectoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListExternalIdPConfigurationsForDirectoryResponse members

    /// <summary>
    /// 外部身份提供商配置信息
    /// </summary>

    std::vector<ExternalIdpConfigurationDto>& getAssociations();
    bool associationsIsSet() const;
    void unsetassociations();
    void setAssociations(const std::vector<ExternalIdpConfigurationDto>& value);


protected:
    std::vector<ExternalIdpConfigurationDto> associations_;
    bool associationsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ListExternalIdPConfigurationsForDirectoryResponse_H_
