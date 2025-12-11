
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeReplicasetNodeRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeReplicasetNodeRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  EnlargeReplicasetNodeRequestBody
    : public ModelBase
{
public:
    EnlargeReplicasetNodeRequestBody();
    virtual ~EnlargeReplicasetNodeRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EnlargeReplicasetNodeRequestBody members

    /// <summary>
    /// **参数解释：** 副本集节点扩容个数。 **约束限制：** 副本集有3个节点时，可以扩容2/4个节点，副本集有5个节点时，只能扩容2个。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getNum() const;
    bool numIsSet() const;
    void unsetnum();
    void setNum(int32_t value);

    /// <summary>
    /// **参数解释：** 变更包年包月实例规格时可指定，表示是否自动从账户中支付，此字段不影响自动续订的支付方式。 **约束限制：** - 对于降低规格场景，该字段无效。 - 对于扩大规格场景：   true，表示自动从账户中支付。   false，表示手动从账户中支付，默认为该方式。 **取值范围：** true和false。 **默认取值：** 不涉及。
    /// </summary>

    bool isIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(bool value);


protected:
    int32_t num_;
    bool numIsSet_;
    bool isAutoPay_;
    bool isAutoPayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_EnlargeReplicasetNodeRequestBody_H_
