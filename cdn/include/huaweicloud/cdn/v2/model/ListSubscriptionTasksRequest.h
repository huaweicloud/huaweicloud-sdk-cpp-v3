
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListSubscriptionTasksRequest
    : public ModelBase
{
public:
    ListSubscriptionTasksRequest();
    virtual ~ListSubscriptionTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubscriptionTasksRequest members

    /// <summary>
    /// **参数解释：** 每页显示的条目数量 **约束限制：** 不涉及 **取值范围：** 0-100 **默认取值：** 5 &gt; 传入空或0时，会按默认处理
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 偏移量 &gt; 表示从此偏移量开始查询  **约束限制：** 不涉及 **取值范围：** offset大于等于0 **默认取值：** 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSubscriptionTasksRequest& dereference_from_shared_ptr(std::shared_ptr<ListSubscriptionTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListSubscriptionTasksRequest_H_
