
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainJobTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainJobTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TmsTagResp.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateTrainJobTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTrainJobTagsResponse();
    virtual ~CreateTrainJobTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrainJobTagsResponse members

    /// <summary>
    /// **参数解释**：TMS标签列表。
    /// </summary>

    std::vector<TmsTagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTagResp>& value);


protected:
    std::vector<TmsTagResp> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTrainJobTagsResponse_H_
