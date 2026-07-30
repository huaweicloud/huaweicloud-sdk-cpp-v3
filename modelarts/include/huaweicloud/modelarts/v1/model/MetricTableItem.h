
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricTableItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricTableItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/Allocated.h>
#include <huaweicloud/modelarts/v1/model/Capacity.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  MetricTableItem
    : public ModelBase
{
public:
    MetricTableItem();
    virtual ~MetricTableItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MetricTableItem members

    /// <summary>
    /// 
    /// </summary>

    Allocated getAllocated() const;
    bool allocatedIsSet() const;
    void unsetallocated();
    void setAllocated(const Allocated& value);

    /// <summary>
    /// 
    /// </summary>

    Capacity getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(const Capacity& value);


protected:
    Allocated allocated_;
    bool allocatedIsSet_;
    Capacity capacity_;
    bool capacityIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_MetricTableItem_H_
