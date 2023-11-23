
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsConfigsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsConfigsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/ListLtsLogPolicyRespondBody_instance_lts_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListLtsConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLtsConfigsResponse();
    virtual ~ListLtsConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLtsConfigsResponse members

    /// <summary>
    /// 每个实例的LTS日志配置信息和实例简要信息。
    /// </summary>

    std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs>& value);

    /// <summary>
    /// 全部可查询的云服务日志配置结果个数，等于所有DDS实例的个数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs> instanceLtsConfigs_;
    bool instanceLtsConfigsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListLtsConfigsResponse_H_
