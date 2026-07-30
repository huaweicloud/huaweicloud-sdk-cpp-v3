
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_network_info_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_network_info_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperCluster_network_info
    : public ModelBase
{
public:
    HyperCluster_network_info();
    virtual ~HyperCluster_network_info();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperCluster_network_info members

    /// <summary>
    /// **参数解释**：hyper cluster的子网名称。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getHyperClusterSubnetId() const;
    bool hyperClusterSubnetIdIsSet() const;
    void unsethyperClusterSubnetId();
    void setHyperClusterSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否默认。 **约束限制**：不涉及。 **取值范围**： - true：默认网络 - false：非默认网络
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);


protected:
    std::string hyperClusterSubnetId_;
    bool hyperClusterSubnetIdIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperCluster_network_info_H_
