
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAppliedInstancesRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAppliedInstancesRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  ListAppliedInstancesRequest
    : public ModelBase
{
public:
    ListAppliedInstancesRequest();
    virtual ~ListAppliedInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAppliedInstancesRequest members

    /// <summary>
    /// **参数解释：** 参数模板ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getConfigId() const;
    bool configIdIsSet() const;
    void unsetconfigId();
    void setConfigId(const std::string& value);

    /// <summary>
    /// **参数解释：** 索引位置，偏移量。 **约束限制：** 必须为整数数字。 **取值范围：** &gt;&#x3D;0。 **默认取值：** 0。偏移0条数据，表示从第一条数据开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 查询记录数。 **约束限制：** 正整数。 **取值范围：** 1~100。 **默认取值：** 100。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string configId_;
    bool configIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAppliedInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListAppliedInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAppliedInstancesRequest_H_
