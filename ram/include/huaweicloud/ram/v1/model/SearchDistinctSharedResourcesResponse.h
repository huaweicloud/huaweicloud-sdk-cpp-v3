
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/DistinctSharedResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchDistinctSharedResourcesResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchDistinctSharedResourcesResponse();
    virtual ~SearchDistinctSharedResourcesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDistinctSharedResourcesResponse members

    /// <summary>
    /// 不同资源的信息列表。
    /// </summary>

    std::vector<DistinctSharedResource>& getDistinctSharedResources();
    bool distinctSharedResourcesIsSet() const;
    void unsetdistinctSharedResources();
    void setDistinctSharedResources(const std::vector<DistinctSharedResource>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<DistinctSharedResource> distinctSharedResources_;
    bool distinctSharedResourcesIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctSharedResourcesResponse_H_
