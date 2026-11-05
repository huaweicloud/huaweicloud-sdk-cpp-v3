
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreateServiceOpensResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreateServiceOpensResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServiceStatusItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchCreateServiceOpensResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateServiceOpensResponse();
    virtual ~BatchCreateServiceOpensResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateServiceOpensResponse members

    /// <summary>
    /// **参数解释**：服务开通状态。 **取值范围**：数组元素个数限制为16个
    /// </summary>

    std::vector<ServiceStatusItem>& getServiceList();
    bool serviceListIsSet() const;
    void unsetserviceList();
    void setServiceList(const std::vector<ServiceStatusItem>& value);


protected:
    std::vector<ServiceStatusItem> serviceList_;
    bool serviceListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchCreateServiceOpensResponse_H_
