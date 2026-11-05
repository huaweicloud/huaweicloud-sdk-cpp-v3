
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceBatchOpenRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceBatchOpenRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServiceOpenItem.h>
#include <vector>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceBatchOpenRequest
    : public ModelBase
{
public:
    ServiceBatchOpenRequest();
    virtual ~ServiceBatchOpenRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceBatchOpenRequest members

    /// <summary>
    /// **参数解释**：需要开通的服务列表。 **取值范围**：数组元素个数限制为16个。
    /// </summary>

    std::vector<ServiceOpenItem>& getServiceList();
    bool serviceListIsSet() const;
    void unsetserviceList();
    void setServiceList(const std::vector<ServiceOpenItem>& value);


protected:
    std::vector<ServiceOpenItem> serviceList_;
    bool serviceListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceBatchOpenRequest_H_
