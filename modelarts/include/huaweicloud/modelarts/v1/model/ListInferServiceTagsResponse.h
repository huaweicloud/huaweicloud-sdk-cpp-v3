
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CombineInferTmsTags.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferServiceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInferServiceTagsResponse();
    virtual ~ListInferServiceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferServiceTagsResponse members

    /// <summary>
    /// **参数解释：** 标签的融合结构，相同key合并。
    /// </summary>

    std::vector<CombineInferTmsTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CombineInferTmsTags>& value);


protected:
    std::vector<CombineInferTmsTags> tags_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferServiceTagsResponse_H_
