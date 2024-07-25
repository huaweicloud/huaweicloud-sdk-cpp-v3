
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceLtsConfigResp_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceLtsConfigResp_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstanceLtsConfigDetailResp.h>
#include <huaweicloud/rds/v3/model/InstanceLtsBasicInfoResp.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceLtsConfigResp
    : public ModelBase
{
public:
    InstanceLtsConfigResp();
    virtual ~InstanceLtsConfigResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceLtsConfigResp members

    /// <summary>
    /// LTS配置信息
    /// </summary>

    std::vector<InstanceLtsConfigDetailResp>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<InstanceLtsConfigDetailResp>& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceLtsBasicInfoResp getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const InstanceLtsBasicInfoResp& value);


protected:
    std::vector<InstanceLtsConfigDetailResp> ltsConfigs_;
    bool ltsConfigsIsSet_;
    InstanceLtsBasicInfoResp instance_;
    bool instanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceLtsConfigResp_H_
