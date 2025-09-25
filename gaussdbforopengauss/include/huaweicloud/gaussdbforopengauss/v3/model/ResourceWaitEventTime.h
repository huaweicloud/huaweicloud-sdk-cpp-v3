
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEventTime_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEventTime_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceWaitEvenTimeDetails.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ResourceWaitEventTime
    : public ModelBase
{
public:
    ResourceWaitEventTime();
    virtual ~ResourceWaitEventTime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceWaitEventTime members

    /// <summary>
    /// **参数解释**: 总耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAllTime() const;
    bool allTimeIsSet() const;
    void unsetallTime();
    void setAllTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    ResourceWaitEvenTimeDetails getResourceWaitEventTimeDetails() const;
    bool resourceWaitEventTimeDetailsIsSet() const;
    void unsetresourceWaitEventTimeDetails();
    void setResourceWaitEventTimeDetails(const ResourceWaitEvenTimeDetails& value);

    /// <summary>
    /// **参数解释**: 资源类等待事件外耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getOtherTime() const;
    bool otherTimeIsSet() const;
    void unsetotherTime();
    void setOtherTime(int64_t value);


protected:
    int64_t allTime_;
    bool allTimeIsSet_;
    ResourceWaitEvenTimeDetails resourceWaitEventTimeDetails_;
    bool resourceWaitEventTimeDetailsIsSet_;
    int64_t otherTime_;
    bool otherTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ResourceWaitEventTime_H_
