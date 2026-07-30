
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTagRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTagRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Tag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：给资源添加标签请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateTagRequest
    : public ModelBase
{
public:
    CreateTagRequest();
    virtual ~CreateTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagRequest members

    /// <summary>
    /// **参数解释**：待添加的标签列表。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateTagRequest_H_
