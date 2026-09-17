
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanListResponse_page_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanListResponse_page_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 计划列表分页信息。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  PlanListResponse_page
    : public ModelBase
{
public:
    PlanListResponse_page();
    virtual ~PlanListResponse_page();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PlanListResponse_page members

    /// <summary>
    /// **参数解释：** 页码 **取值范围：** 不涉及
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// **参数解释：** 分页数量 **取值范围：** 不涉及
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// **参数解释：** 当前页数量 **取值范围：** 不涉及
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    int32_t page_;
    bool pageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_PlanListResponse_page_H_
