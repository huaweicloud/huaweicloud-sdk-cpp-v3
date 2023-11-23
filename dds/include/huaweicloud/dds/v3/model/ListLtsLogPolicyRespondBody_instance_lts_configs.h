
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_lts_configs_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_lts_configs_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance.h>
#include <vector>
#include <huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_lts_configs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// LTS日志配置信息只会出现已经配置过的日志类型。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsLogPolicyRespondBody_instance_lts_configs
    : public ModelBase
{
public:
    ListLtsLogPolicyRespondBody_instance_lts_configs();
    virtual ~ListLtsLogPolicyRespondBody_instance_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsLogPolicyRespondBody_instance_lts_configs members

    /// <summary>
    /// 
    /// </summary>

    ListLtsLogPolicyRespondBody_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const ListLtsLogPolicyRespondBody_instance& value);

    /// <summary>
    /// LTS日志配置明细。从未设置LTS日志流，不返回该字段。
    /// </summary>

    std::vector<ListLtsLogPolicyRespondBody_lts_configs>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<ListLtsLogPolicyRespondBody_lts_configs>& value);


protected:
    ListLtsLogPolicyRespondBody_instance instance_;
    bool instanceIsSet_;
    std::vector<ListLtsLogPolicyRespondBody_lts_configs> ltsConfigs_;
    bool ltsConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsLogPolicyRespondBody_instance_lts_configs_H_
