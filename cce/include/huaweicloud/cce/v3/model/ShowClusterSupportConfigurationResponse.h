
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PackageOptions.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ShowClusterSupportConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClusterSupportConfigurationResponse();
    virtual ~ShowClusterSupportConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClusterSupportConfigurationResponse members

    /// <summary>
    /// **参数解释**： 集群支持的配置项详情
    /// </summary>

    std::map<std::string, std::vector<PackageOptions>>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::map<std::string, std::vector<PackageOptions>>& value);


protected:
    std::map<std::string, std::vector<PackageOptions>> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowClusterSupportConfigurationResponse_H_
