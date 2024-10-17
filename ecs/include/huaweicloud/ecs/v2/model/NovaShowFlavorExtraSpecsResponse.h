
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaShowFlavorExtraSpecsResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaShowFlavorExtraSpecsResponse();
    virtual ~NovaShowFlavorExtraSpecsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NovaShowFlavorExtraSpecsResponse members

    /// <summary>
    /// 描述弹性云服务器规格的键值对。
    /// </summary>

    std::map<std::string, std::string>& getExtraSpecs();
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> extraSpecs_;
    bool extraSpecsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowFlavorExtraSpecsResponse_H_
