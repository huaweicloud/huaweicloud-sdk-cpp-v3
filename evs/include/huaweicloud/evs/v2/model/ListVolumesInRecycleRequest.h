
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  ListVolumesInRecycleRequest
    : public ModelBase
{
public:
    ListVolumesInRecycleRequest();
    virtual ~ListVolumesInRecycleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVolumesInRecycleRequest members

    /// <summary>
    /// **参数解释** 云硬盘名称。 可通过[查询所有云硬盘详情](evs_04_2006.xml)获取云硬盘名称。 **约束限制** 最大支持64个字符。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释** 云硬盘状态，取值可参考：\&quot;[云硬盘状态](evs_04_0040.xml)\&quot;。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释** 返回结果个数限制。 **约束限制** 不涉及。 **取值范围** 1-1000 **默认取值** 1000
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释** 可用区信息。 可通过接口[查询所有的可用分区信息](evs_04_2081.xml)获取，也可参考[地区和终端节点](https://console.huaweicloud.com/apiexplorer/#/endpoint)获取。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// **参数解释** 服务类型。 **约束限制** 不涉及。 **取值范围** - EVS：云硬盘。 - DSS：专属分布式存储服务。 **默认取值** 不涉及。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// **参数解释** 分页查询时的偏移量。 **约束限制** 不涉及。 **取值范围** 取值为一个大于0小于磁盘总个数的整数。 **默认取值** 0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVolumesInRecycleRequest& dereference_from_shared_ptr(std::shared_ptr<ListVolumesInRecycleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ListVolumesInRecycleRequest_H_
