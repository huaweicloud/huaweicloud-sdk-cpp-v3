
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessPolicy_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessPolicy_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AccessPolicy
    : public ModelBase
{
public:
    AccessPolicy();
    virtual ~AccessPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessPolicy members

    /// <summary>
    /// **参数解释**： 变化数量 **取值范围**： 不涉及
    /// </summary>

    int32_t getChanged() const;
    bool changedIsSet() const;
    void unsetchanged();
    void setChanged(int32_t value);

    /// <summary>
    /// **参数解释**： EIP访问控制策略 **取值范围**： 不涉及
    /// </summary>

    int32_t getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(int32_t value);

    /// <summary>
    /// **参数解释**： NAT访问控制策略 **取值范围**： 不涉及
    /// </summary>

    int32_t getNat() const;
    bool natIsSet() const;
    void unsetnat();
    void setNat(int32_t value);

    /// <summary>
    /// **参数解释**： 总数 **取值范围**： 不涉及
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t changed_;
    bool changedIsSet_;
    int32_t eip_;
    bool eipIsSet_;
    int32_t nat_;
    bool natIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessPolicy_H_
