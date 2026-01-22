
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListConfigurationsRequest
    : public ModelBase
{
public:
    ListConfigurationsRequest();
    virtual ~ListConfigurationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationsRequest members

    /// <summary>
    /// **参数解释：** 索引位置，偏移量。 **约束限制：** 必须为数字。 **取值范围：** 不能为负数。 **默认取值：** 0。偏移0条数据，表示从第一条数据开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 每页显示的数量。 **约束限制：** 不涉及。 **取值范围：** 1~100。 **默认取值：** 100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListConfigurationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListConfigurationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListConfigurationsRequest_H_
