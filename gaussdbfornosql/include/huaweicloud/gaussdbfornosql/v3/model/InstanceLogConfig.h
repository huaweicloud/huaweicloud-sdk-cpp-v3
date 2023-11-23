
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfig_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfig_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/LogInstanceInfo.h>
#include <huaweicloud/gaussdbfornosql/v3/model/InstanceLogConfigDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  InstanceLogConfig
    : public ModelBase
{
public:
    InstanceLogConfig();
    virtual ~InstanceLogConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceLogConfig members

    /// <summary>
    /// 
    /// </summary>

    LogInstanceInfo getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const LogInstanceInfo& value);

    /// <summary>
    /// LTS日志配置明细。从未设置LTS日志流，不返回该字段。
    /// </summary>

    std::vector<InstanceLogConfigDetail>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<InstanceLogConfigDetail>& value);


protected:
    LogInstanceInfo instance_;
    bool instanceIsSet_;
    std::vector<InstanceLogConfigDetail> ltsConfigs_;
    bool ltsConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_InstanceLogConfig_H_
