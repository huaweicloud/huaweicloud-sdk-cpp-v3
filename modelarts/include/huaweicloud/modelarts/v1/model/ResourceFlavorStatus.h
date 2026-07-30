
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源规格状态信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceFlavorStatus
    : public ModelBase
{
public:
    ResourceFlavorStatus();
    virtual ~ResourceFlavorStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceFlavorStatus members

    /// <summary>
    /// **参数解释**：资源规格的容量状态，格式为key/value键值对。其中，key为az编码，value为对应az资源的状态，可选值如下： - normal：正常。 - soldout：售罄
    /// </summary>

    std::map<std::string, std::string>& getPhase();
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> phase_;
    bool phaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceFlavorStatus_H_
