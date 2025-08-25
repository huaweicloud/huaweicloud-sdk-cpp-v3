
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_existingNodeCount_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_existingNodeCount_H_


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
/// 伸缩组存量节点统计信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ScaleGroupStatus_existingNodeCount
    : public ModelBase
{
public:
    ScaleGroupStatus_existingNodeCount();
    virtual ~ScaleGroupStatus_existingNodeCount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ScaleGroupStatus_existingNodeCount members

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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ScaleGroupStatus_existingNodeCount_H_
