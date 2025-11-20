
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_spec_hostNetwork_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_spec_hostNetwork_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 分区子网 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  Partition_spec_hostNetwork
    : public ModelBase
{
public:
    Partition_spec_hostNetwork();
    virtual ~Partition_spec_hostNetwork();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Partition_spec_hostNetwork members

    /// <summary>
    /// **参数解释**： 子网ID **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getSubnetID() const;
    bool subnetIDIsSet() const;
    void unsetsubnetID();
    void setSubnetID(const std::string& value);


protected:
    std::string subnetID_;
    bool subnetIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_Partition_spec_hostNetwork_H_
