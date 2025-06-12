
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMetaStudioOrdersReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMetaStudioOrdersReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/PublicCloudServiceOrder.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 下单请求体
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateMetaStudioOrdersReq
    : public ModelBase
{
public:
    CreateMetaStudioOrdersReq();
    virtual ~CreateMetaStudioOrdersReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateMetaStudioOrdersReq members

    /// <summary>
    /// 云服务信息列表
    /// </summary>

    std::vector<PublicCloudServiceOrder>& getCloudServices();
    bool cloudServicesIsSet() const;
    void unsetcloudServices();
    void setCloudServices(const std::vector<PublicCloudServiceOrder>& value);


protected:
    std::vector<PublicCloudServiceOrder> cloudServices_;
    bool cloudServicesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateMetaStudioOrdersReq_H_
