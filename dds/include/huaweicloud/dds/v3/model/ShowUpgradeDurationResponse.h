
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowUpgradeDurationResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowUpgradeDurationResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DurationStrategies.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ShowUpgradeDurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUpgradeDurationResponse();
    virtual ~ShowUpgradeDurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUpgradeDurationResponse members

    /// <summary>
    /// 升级策略列表
    /// </summary>

    std::vector<DurationStrategies>& getStrategies();
    bool strategiesIsSet() const;
    void unsetstrategies();
    void setStrategies(const std::vector<DurationStrategies>& value);


protected:
    std::vector<DurationStrategies> strategies_;
    bool strategiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ShowUpgradeDurationResponse_H_
