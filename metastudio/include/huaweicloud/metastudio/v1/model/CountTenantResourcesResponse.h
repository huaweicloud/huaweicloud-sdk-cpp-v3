
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/ResourcesCount.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CountTenantResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    CountTenantResourcesResponse();
    virtual ~CountTenantResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountTenantResourcesResponse members

    /// <summary>
    /// 资源总数列表
    /// </summary>

    std::vector<ResourcesCount>& getResourcesCount();
    bool resourcesCountIsSet() const;
    void unsetresourcesCount();
    void setResourcesCount(const std::vector<ResourcesCount>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::vector<ResourcesCount> resourcesCount_;
    bool resourcesCountIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesResponse_H_
