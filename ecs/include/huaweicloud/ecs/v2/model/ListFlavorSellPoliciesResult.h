
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResult_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResult_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/FlavorSpotOptions.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListFlavorSellPoliciesResult
    : public ModelBase
{
public:
    ListFlavorSellPoliciesResult();
    virtual ~ListFlavorSellPoliciesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlavorSellPoliciesResult members

    /// <summary>
    /// 云服务器规格的索引。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 云服务器规格的ID。
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 云服务器规格的售卖状态。  sellout：售罄。 available：可用。
    /// </summary>

    std::string getSellStatus() const;
    bool sellStatusIsSet() const;
    void unsetsellStatus();
    void setSellStatus(const std::string& value);

    /// <summary>
    /// 云服务器规格的可用区。
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);

    /// <summary>
    /// 云服务器规格的付费模式。  - postPaid：按需计费实例。 - prePaid：包年/包月计费实例。 - spot：竞价实例。 - ri：预留实例。
    /// </summary>

    std::string getSellMode() const;
    bool sellModeIsSet() const;
    void unsetsellMode();
    void setSellMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorSpotOptions getSpotOptions() const;
    bool spotOptionsIsSet() const;
    void unsetspotOptions();
    void setSpotOptions(const FlavorSpotOptions& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string sellStatus_;
    bool sellStatusIsSet_;
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;
    std::string sellMode_;
    bool sellModeIsSet_;
    FlavorSpotOptions spotOptions_;
    bool spotOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesResult_H_
