
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterConfigurationsSpec_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterConfigurationsSpec_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ClusterConfigurationsSpec_packages.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Configuration的规格信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterConfigurationsSpec
    : public ModelBase
{
public:
    ClusterConfigurationsSpec();
    virtual ~ClusterConfigurationsSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterConfigurationsSpec members

    /// <summary>
    /// 组件配置项列表
    /// </summary>

    std::vector<ClusterConfigurationsSpec_packages>& getPackages();
    bool packagesIsSet() const;
    void unsetpackages();
    void setPackages(const std::vector<ClusterConfigurationsSpec_packages>& value);


protected:
    std::vector<ClusterConfigurationsSpec_packages> packages_;
    bool packagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterConfigurationsSpec_H_
