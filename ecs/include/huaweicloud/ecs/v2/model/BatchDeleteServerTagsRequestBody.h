
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequestBody_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerTag.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  BatchDeleteServerTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteServerTagsRequestBody();
    virtual ~BatchDeleteServerTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteServerTagsRequestBody members

    /// <summary>
    /// 操作标识（仅支持小写）：delete（删除）。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ServerTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ServerTag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<ServerTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_BatchDeleteServerTagsRequestBody_H_
