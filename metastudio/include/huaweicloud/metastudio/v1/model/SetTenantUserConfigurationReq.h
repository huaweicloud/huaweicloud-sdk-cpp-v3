
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantUserConfigurationReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantUserConfigurationReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CollectionInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置租户个性化配置请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SetTenantUserConfigurationReq
    : public ModelBase
{
public:
    SetTenantUserConfigurationReq();
    virtual ~SetTenantUserConfigurationReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetTenantUserConfigurationReq members

    /// <summary>
    /// 我的收藏列表
    /// </summary>

    std::vector<CollectionInfo>& getMyCollections();
    bool myCollectionsIsSet() const;
    void unsetmyCollections();
    void setMyCollections(const std::vector<CollectionInfo>& value);


protected:
    std::vector<CollectionInfo> myCollections_;
    bool myCollectionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SetTenantUserConfigurationReq_H_
