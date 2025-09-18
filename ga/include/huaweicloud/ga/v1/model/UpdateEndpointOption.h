
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointOption_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointOption_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新终端节点的详细信息。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointOption
    : public ModelBase
{
public:
    UpdateEndpointOption();
    virtual ~UpdateEndpointOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointOption members

    /// <summary>
    /// 终端节点权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointOption_H_
