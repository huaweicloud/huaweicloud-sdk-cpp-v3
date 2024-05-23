
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/ResourceShare.h>
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
class HUAWEICLOUD_RAM_V1_EXPORT  SearchResourceSharesResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchResourceSharesResponse();
    virtual ~SearchResourceSharesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchResourceSharesResponse members

    /// <summary>
    /// 资源共享实例的详细信息列表。
    /// </summary>

    std::vector<ResourceShare>& getResourceShares();
    bool resourceSharesIsSet() const;
    void unsetresourceShares();
    void setResourceShares(const std::vector<ResourceShare>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<ResourceShare> resourceShares_;
    bool resourceSharesIsSet_;
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

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchResourceSharesResponse_H_
