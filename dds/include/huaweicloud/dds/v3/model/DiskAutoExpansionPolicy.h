
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DiskAutoExpansionPolicy_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DiskAutoExpansionPolicy_H_


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
class HUAWEICLOUD_DDS_V3_EXPORT  DiskAutoExpansionPolicy
    : public ModelBase
{
public:
    DiskAutoExpansionPolicy();
    virtual ~DiskAutoExpansionPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiskAutoExpansionPolicy members

    /// <summary>
    /// **参数解释：** 实例ID。 **取值范围：** 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 触发自动扩容阈值，只支持输入80、85和90。默认阈值为90，即当已使用存储空间达到总存储空间的90%时就会触发扩容。集群实例的自动扩容阈值指的是每个shard。 **取值范围：** 只支持输入80、85和90。
    /// </summary>

    int32_t getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(int32_t value);

    /// <summary>
    /// **参数解释：** 扩容步长（s%），默认为10，支持输入10、15和20。当触发自动扩容的时候，自动扩容当前存储空间的s%（非10倍数向上取整。小数点后四舍五入，默认一次最小10G，账户余额不足时，会导致包年包月实例扩容失败）。 **取值范围：** 10、15和20。
    /// </summary>

    int32_t getStep() const;
    bool stepIsSet() const;
    void unsetstep();
    void setStep(int32_t value);

    /// <summary>
    /// **参数解释：** 最大扩容上限，即当自动扩容达到上限后不再触发自动扩容。 **取值范围：** 实例规格小于8U时，自动扩容上限为5000GB；大于等于8U时，自动扩容上限为10000GB。
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t threshold_;
    bool thresholdIsSet_;
    int32_t step_;
    bool stepIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DiskAutoExpansionPolicy_H_
