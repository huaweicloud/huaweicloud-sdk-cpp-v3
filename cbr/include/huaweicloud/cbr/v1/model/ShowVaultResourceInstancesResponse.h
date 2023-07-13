
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesResponse_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/TagResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultResourceInstancesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVaultResourceInstancesResponse();
    virtual ~ShowVaultResourceInstancesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVaultResourceInstancesResponse members

    /// <summary>
    /// 符合查询条件的资源列表（action为count时无此参数）。
    /// </summary>

    std::vector<TagResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<TagResource>& value);

    /// <summary>
    /// 符合查询条件的资源总个数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<TagResource> resources_;
    bool resourcesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesResponse_H_
