
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsResponse_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ResourceParams.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListProtectedInstancesByTagsResponse();
    virtual ~ListProtectedInstancesByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListProtectedInstancesByTagsResponse members

    /// <summary>
    /// 返回的保护实例列表。
    /// </summary>

    std::vector<ResourceParams>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ResourceParams>& value);

    /// <summary>
    /// 总记录数。该值不受过滤条件的影响。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ResourceParams> resources_;
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

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsResponse_H_
