
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeletePoolTagsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeletePoolTagsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolTag.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeletePoolTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeletePoolTagsResponse();
    virtual ~BatchDeletePoolTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletePoolTagsResponse members

    /// <summary>
    /// **参数解释**：资源标签的列表。
    /// </summary>

    std::vector<PoolTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<PoolTag>& value);


protected:
    std::vector<PoolTag> tags_;
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeletePoolTagsResponse_H_
