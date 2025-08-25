
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_upcomingNodeCount_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_upcomingNodeCount_H_


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
/// 伸缩组将要创建的节点统计信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleGroupStatus_upcomingNodeCount
    : public ModelBase
{
public:
    ScaleGroupStatus_upcomingNodeCount();
    virtual ~ScaleGroupStatus_upcomingNodeCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleGroupStatus_upcomingNodeCount members

    /// <summary>
    /// 按需计费节点个数
    /// </summary>

    int32_t getPostPaid() const;
    bool postPaidIsSet() const;
    void unsetpostPaid();
    void setPostPaid(int32_t value);

    /// <summary>
    /// 包年包月节点个数
    /// </summary>

    int32_t getPrePaid() const;
    bool prePaidIsSet() const;
    void unsetprePaid();
    void setPrePaid(int32_t value);

    /// <summary>
    /// 按需计费和包年包月节点总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    int32_t postPaid_;
    bool postPaidIsSet_;
    int32_t prePaid_;
    bool prePaidIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_upcomingNodeCount_H_
