
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceConfigurationsOption_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceConfigurationsOption_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数组配置信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreNewInstanceConfigurationsOption
    : public ModelBase
{
public:
    RestoreNewInstanceConfigurationsOption();
    virtual ~RestoreNewInstanceConfigurationsOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreNewInstanceConfigurationsOption members

    /// <summary>
    /// 节点类型。 取值：   - 集群实例包含mongos、shard和config节点，各节点下该参数取值分别为“mongos”、“shard”和“config”。   - 副本集实例下该参数取值为“replica”。   - 单节点实例下该参数取值为“single”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参数组id。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceConfigurationsOption_H_
