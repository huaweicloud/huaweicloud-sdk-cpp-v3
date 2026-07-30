
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTmsTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTmsTagsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TmsTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除资源标签结构体，支持批量删除。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteTmsTagsRequest
    : public ModelBase
{
public:
    DeleteTmsTagsRequest();
    virtual ~DeleteTmsTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTmsTagsRequest members

    /// <summary>
    /// **参数解释**：要删除的标签列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<TmsTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTag>& value);


protected:
    std::vector<TmsTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTmsTagsRequest_H_
