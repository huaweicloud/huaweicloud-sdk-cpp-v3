
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceOpenItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceOpenItem_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ServiceOpenItem
    : public ModelBase
{
public:
    ServiceOpenItem();
    virtual ~ServiceOpenItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceOpenItem members

    /// <summary>
    /// **参数解释**：服务编码。 **约束限制**：不涉及。 **取值范围**：长度限制64个字符。 **默认取值**：不涉及。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ServiceOpenItem_H_
