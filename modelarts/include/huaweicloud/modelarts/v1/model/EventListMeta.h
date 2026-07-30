
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventListMeta_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventListMeta_H_


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
/// 事件列表元信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EventListMeta
    : public ModelBase
{
public:
    EventListMeta();
    virtual ~EventListMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventListMeta members

    /// <summary>
    /// **参数描述**：分页标记。 **取值范围**：不涉及。
    /// </summary>

    std::string getContinue() const;
    bool continueIsSet() const;
    void unsetcontinue();
    void setContinue(const std::string& value);

    /// <summary>
    /// **参数描述**：分页剩余数量。 **取值范围**：不涉及。
    /// </summary>

    int32_t getRemainingItemCount() const;
    bool remainingItemCountIsSet() const;
    void unsetremainingItemCount();
    void setRemainingItemCount(int32_t value);


protected:
    std::string continue_;
    bool continueIsSet_;
    int32_t remainingItemCount_;
    bool remainingItemCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventListMeta_H_
