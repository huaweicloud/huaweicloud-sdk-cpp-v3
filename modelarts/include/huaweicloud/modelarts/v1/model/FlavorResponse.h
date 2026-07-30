
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/BillingInfo.h>
#include <map>
#include <huaweicloud/modelarts/v1/model/FlavorInfoResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业、算法的规格信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FlavorResponse
    : public ModelBase
{
public:
    FlavorResponse();
    virtual ~FlavorResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorResponse members

    /// <summary>
    /// **参数解释**：训练作业选择的资源池ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// 资源规格的ID。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 资源规格的名称。
    /// </summary>

    std::string getFlavorName() const;
    bool flavorNameIsSet() const;
    void unsetflavorName();
    void setFlavorName(const std::string& value);

    /// <summary>
    /// 资源规格的最大节点数。
    /// </summary>

    int32_t getMaxNum() const;
    bool maxNumIsSet() const;
    void unsetmaxNum();
    void setMaxNum(int32_t value);

    /// <summary>
    /// 资源规格的类型。可选值如下： - CPU - GPU - [Ascend](tag:hc,hk,fcs_super)
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingInfo getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingInfo& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorInfoResponse getFlavorInfo() const;
    bool flavorInfoIsSet() const;
    void unsetflavorInfo();
    void setFlavorInfo(const FlavorInfoResponse& value);

    /// <summary>
    /// 其他规格属性。
    /// </summary>

    std::map<std::string, std::string>& getAttributes();
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const std::map<std::string, std::string>& value);


protected:
    std::string poolId_;
    bool poolIdIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string flavorName_;
    bool flavorNameIsSet_;
    int32_t maxNum_;
    bool maxNumIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;
    BillingInfo billing_;
    bool billingIsSet_;
    FlavorInfoResponse flavorInfo_;
    bool flavorInfoIsSet_;
    std::map<std::string, std::string> attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorResponse_H_
