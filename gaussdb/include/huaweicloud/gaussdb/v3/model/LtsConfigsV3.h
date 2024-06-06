
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LtsConfigsV3_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LtsConfigsV3_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/LtsConfig.h>
#include <huaweicloud/gaussdb/v3/model/InstanceLtsBasicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  LtsConfigsV3
    : public ModelBase
{
public:
    LtsConfigsV3();
    virtual ~LtsConfigsV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsConfigsV3 members

    /// <summary>
    /// LTS配置列表
    /// </summary>

    std::vector<LtsConfig>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<LtsConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceLtsBasicInfo getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const InstanceLtsBasicInfo& value);


protected:
    std::vector<LtsConfig> ltsConfigs_;
    bool ltsConfigsIsSet_;
    InstanceLtsBasicInfo instance_;
    bool instanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_LtsConfigsV3_H_
