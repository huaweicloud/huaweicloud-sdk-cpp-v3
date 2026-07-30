
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTagRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTagRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/DeleteTagItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：删除资源标签结构体，支持批量删除。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteTagRequest
    : public ModelBase
{
public:
    DeleteTagRequest();
    virtual ~DeleteTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTagRequest members

    /// <summary>
    /// **参数解释**：要删除的标签列表。 **约束限制**：不涉及。
    /// </summary>

    std::vector<DeleteTagItem>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteTagItem>& value);


protected:
    std::vector<DeleteTagItem> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteTagRequest_H_
