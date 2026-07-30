
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferTmsTagsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferTmsTagsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/TmsTagForDeletion.h>
#include <string>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  DeleteInferTmsTagsRequest
    : public ModelBase
{
public:
    DeleteInferTmsTagsRequest();
    virtual ~DeleteInferTmsTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInferTmsTagsRequest members

    /// <summary>
    /// **参数解释：** 要删除的标签列表。
    /// </summary>

    std::vector<TmsTagForDeletion>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTagForDeletion>& value);

    /// <summary>
    /// **参数解释：** 待删除标签的资源ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);


protected:
    std::vector<TmsTagForDeletion> tags_;
    bool tagsIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_DeleteInferTmsTagsRequest_H_
