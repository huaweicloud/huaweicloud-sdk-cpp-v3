
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeListMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeListMetadata_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 节点的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeListMetadata
    : public ModelBase
{
public:
    NodeListMetadata();
    virtual ~NodeListMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeListMetadata members

    /// <summary>
    /// **参数解释**：分页查询的偏移标志。 **取值范围**：取值来自用户上一次分页查询响应结果中metadata.continue中的值，值为空默认无偏移。
    /// </summary>

    std::string getContinue() const;
    bool continueIsSet() const;
    void unsetcontinue();
    void setContinue(const std::string& value);

    /// <summary>
    /// **参数解释**：分页查询中剩余资源的数量。 **默认取值**：不涉及。
    /// </summary>

    int64_t getRemainingItemCount() const;
    bool remainingItemCountIsSet() const;
    void unsetremainingItemCount();
    void setRemainingItemCount(int64_t value);


protected:
    std::string continue_;
    bool continueIsSet_;
    int64_t remainingItemCount_;
    bool remainingItemCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeListMetadata_H_
