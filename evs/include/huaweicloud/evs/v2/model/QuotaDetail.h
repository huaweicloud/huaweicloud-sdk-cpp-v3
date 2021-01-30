
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetail_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetail_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 配额详细信息。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  QuotaDetail
    : public ModelBase
{
public:
    QuotaDetail();
    virtual ~QuotaDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QuotaDetail members

    /// <summary>
    /// 已使用的数量。
    /// </summary>

    int32_t getInUse() const;
    bool inUseIsSet() const;
    void unsetinUse();
    void setInUse(int32_t value);

    /// <summary>
    /// 最大的数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    int32_t getReserved() const;
    bool reservedIsSet() const;
    void unsetreserved();
    void setReserved(int32_t value);

    /// <summary>
    /// 预留属性。
    /// </summary>

    int32_t getAllocated() const;
    bool allocatedIsSet() const;
    void unsetallocated();
    void setAllocated(int32_t value);


protected:
    int32_t inUse_;
    bool inUseIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t reserved_;
    bool reservedIsSet_;
    int32_t allocated_;
    bool allocatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_QuotaDetail_H_
