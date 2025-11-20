
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  DeleteStatus
    : public ModelBase
{
public:
    DeleteStatus();
    virtual ~DeleteStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteStatus members

    /// <summary>
    /// **参数解释**： 集群删除时已经存在的集群资源记录总数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getPreviousTotal() const;
    bool previousTotalIsSet() const;
    void unsetpreviousTotal();
    void setPreviousTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 基于当前集群资源记录信息，生成实际最新资源记录总数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getCurrentTotal() const;
    bool currentTotalIsSet() const;
    void unsetcurrentTotal();
    void setCurrentTotal(int32_t value);

    /// <summary>
    /// **参数解释**： 集群删除时更新的资源记录总数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(int32_t value);

    /// <summary>
    /// **参数解释**： 集群删除时更新的资源记录总数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getAdded() const;
    bool addedIsSet() const;
    void unsetadded();
    void setAdded(int32_t value);

    /// <summary>
    /// **参数解释**： 集群删除时删除的资源记录总数 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    int32_t getDeleted() const;
    bool deletedIsSet() const;
    void unsetdeleted();
    void setDeleted(int32_t value);


protected:
    int32_t previousTotal_;
    bool previousTotalIsSet_;
    int32_t currentTotal_;
    bool currentTotalIsSet_;
    int32_t updated_;
    bool updatedIsSet_;
    int32_t added_;
    bool addedIsSet_;
    int32_t deleted_;
    bool deletedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_DeleteStatus_H_
