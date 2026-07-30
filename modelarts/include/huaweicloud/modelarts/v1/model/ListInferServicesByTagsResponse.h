
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesByTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesByTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TmsResource.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferServicesByTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInferServicesByTagsResponse();
    virtual ~ListInferServicesByTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferServicesByTagsResponse members

    /// <summary>
    /// **参数解释：** 通过标签反查出来的资源列表。
    /// </summary>

    std::vector<TmsResource>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<TmsResource>& value);

    /// <summary>
    /// **参数解释：** 总记录数。 **取值范围：** 不涉及
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<TmsResource> resources_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServicesByTagsResponse_H_
