
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesRequest_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListFlavorSellPoliciesRequest
    : public ModelBase
{
public:
    ListFlavorSellPoliciesRequest();
    virtual ~ListFlavorSellPoliciesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFlavorSellPoliciesRequest members

    /// <summary>
    /// 云服务器的系统规格的ID
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 云服务器的系统规格销售状态。  取值范围：  - available：正常售卖 - sellout：售罄
    /// </summary>

    std::string getSellStatus() const;
    bool sellStatusIsSet() const;
    void unsetsellStatus();
    void setSellStatus(const std::string& value);

    /// <summary>
    /// 计费模式。  key的取值范围：  - postPaid：按需计费实例。 - prePaid：包年/包月计费实例。 - spot：竞价实例。 - ri：预留实例。
    /// </summary>

    std::string getSellMode() const;
    bool sellModeIsSet() const;
    void unsetsellMode();
    void setSellMode(const std::string& value);

    /// <summary>
    /// 可用区，需要指定可用区（AZ）
    /// </summary>

    std::string getAvailabilityZoneId() const;
    bool availabilityZoneIdIsSet() const;
    void unsetavailabilityZoneId();
    void setAvailabilityZoneId(const std::string& value);

    /// <summary>
    /// 查询竞价实例时长大于设置值的策略
    /// </summary>

    int32_t getLongestSpotDurationHoursGt() const;
    bool longestSpotDurationHoursGtIsSet() const;
    void unsetlongestSpotDurationHoursGt();
    void setLongestSpotDurationHoursGt(int32_t value);

    /// <summary>
    /// 查询“竞价实例时长”的个数大于设置值的策略
    /// </summary>

    int32_t getLargestSpotDurationCountGt() const;
    bool largestSpotDurationCountGtIsSet() const;
    void unsetlargestSpotDurationCountGt();
    void setLargestSpotDurationCountGt(int32_t value);

    /// <summary>
    /// 查询竞价实例时长等于设置值的策略
    /// </summary>

    int32_t getLongestSpotDurationHours() const;
    bool longestSpotDurationHoursIsSet() const;
    void unsetlongestSpotDurationHours();
    void setLongestSpotDurationHours(int32_t value);

    /// <summary>
    /// 查询“竞价实例时长”的个数等于设置值的策略
    /// </summary>

    int32_t getLargestSpotDurationCount() const;
    bool largestSpotDurationCountIsSet() const;
    void unsetlargestSpotDurationCount();
    void setLargestSpotDurationCount(int32_t value);

    /// <summary>
    /// 中断策略。  取值范围：  - immediate：立即释放 - delay：延迟释放
    /// </summary>

    std::string getInterruptionPolicy() const;
    bool interruptionPolicyIsSet() const;
    void unsetinterruptionPolicy();
    void setInterruptionPolicy(const std::string& value);

    /// <summary>
    /// 单页面可显示的flavor条数最大值，默认是1000。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 以单页最后一条flavor的ID作为分页标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string flavorId_;
    bool flavorIdIsSet_;
    std::string sellStatus_;
    bool sellStatusIsSet_;
    std::string sellMode_;
    bool sellModeIsSet_;
    std::string availabilityZoneId_;
    bool availabilityZoneIdIsSet_;
    int32_t longestSpotDurationHoursGt_;
    bool longestSpotDurationHoursGtIsSet_;
    int32_t largestSpotDurationCountGt_;
    bool largestSpotDurationCountGtIsSet_;
    int32_t longestSpotDurationHours_;
    bool longestSpotDurationHoursIsSet_;
    int32_t largestSpotDurationCount_;
    bool largestSpotDurationCountIsSet_;
    std::string interruptionPolicy_;
    bool interruptionPolicyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFlavorSellPoliciesRequest& dereference_from_shared_ptr(std::shared_ptr<ListFlavorSellPoliciesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListFlavorSellPoliciesRequest_H_
