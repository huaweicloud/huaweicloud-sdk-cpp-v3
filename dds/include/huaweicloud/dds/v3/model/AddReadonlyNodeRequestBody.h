
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  AddReadonlyNodeRequestBody
    : public ModelBase
{
public:
    AddReadonlyNodeRequestBody();
    virtual ~AddReadonlyNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddReadonlyNodeRequestBody members

    /// <summary>
    /// **参数解释：** 资源规格编码。获取方法请参见查询数据库规格中参数的值。示例：dds.mongodb.c6.large.4.rr。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释：** 待新增只读节点个数。 **约束限制：** 不涉及。 **取值范围：** [1, 5]。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// **参数解释：** 同步延迟时间。 **约束限制：** 集群不支持设置。 **取值范围：** 0~1200秒。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int32_t value);

    /// <summary>
    /// **参数解释：** 新增包年包月实例的只读节点时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 **约束限制：** 不涉及。 **取值范围：** - true，表示自动从账户中支付。 - false，表示手动从账户中支付，默认为该方式。 **默认取值：** false。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);

    /// <summary>
    /// **参数解释：** 目标Shard组ID。集群实例添加只读节点时传入目标Shard组ID。 **约束限制：** 副本集实例不支持设置。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// **参数解释：** 新增只读节点的可用区ID。可根据“查询实例列表和详情”接口响应参数获取。 **约束限制：** 该参数仅对多可用区部署的实例生效。仅支持传入一个可用区且必须属于当前实例的多个可用区内的其中一个。 **取值范围：** 不涉及。 **默认取值：** 若不传此参数，新增的只读节点将相对均匀分布在主备节点所在可用区。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    int32_t num_;
    bool numIsSet_;
    int32_t delay_;
    bool delayIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;
    std::string groupId_;
    bool groupIdIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequestBody_H_
