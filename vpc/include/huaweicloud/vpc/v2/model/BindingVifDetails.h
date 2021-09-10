
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  BindingVifDetails
    : public ModelBase
{
public:
    BindingVifDetails();
    virtual ~BindingVifDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BindingVifDetails members

    /// <summary>
    /// 功能说明：取值为true，表示是虚拟机的主网卡。
    /// </summary>

    bool isPrimaryInterface() const;
    bool primaryInterfaceIsSet() const;
    void unsetprimaryInterface();
    void setPrimaryInterface(bool value);


protected:
    bool primaryInterface_;
    bool primaryInterfaceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BindingVifDetails_H_
