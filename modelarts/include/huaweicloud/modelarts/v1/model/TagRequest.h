
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagRequest_H_


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
/// Lite Server超节点创建以及删除的标签列表。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  TagRequest
    : public ModelBase
{
public:
    TagRequest();
    virtual ~TagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagRequest members

    /// <summary>
    /// **参数解释**：标签列表。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_TagRequest_H_
