
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyProxyWeightRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyProxyWeightRequest_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ProxyReadonlyInstances.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyProxyWeightRequest
    : public ModelBase
{
public:
    ModifyProxyWeightRequest();
    virtual ~ModifyProxyWeightRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyProxyWeightRequest members

    /// <summary>
    /// 主实例权重，取值范围为0~1000。
    /// </summary>

    std::string getMasterWeight() const;
    bool masterWeightIsSet() const;
    void unsetmasterWeight();
    void setMasterWeight(const std::string& value);

    /// <summary>
    /// 只读实例信息。
    /// </summary>

    std::vector<ProxyReadonlyInstances>& getReadonlyInstances();
    bool readonlyInstancesIsSet() const;
    void unsetreadonlyInstances();
    void setReadonlyInstances(const std::vector<ProxyReadonlyInstances>& value);


protected:
    std::string masterWeight_;
    bool masterWeightIsSet_;
    std::vector<ProxyReadonlyInstances> readonlyInstances_;
    bool readonlyInstancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyProxyWeightRequest_H_
