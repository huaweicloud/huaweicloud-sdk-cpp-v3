
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListLogLtsConfigsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListLogLtsConfigsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstanceLtsConfigResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListLogLtsConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListLogLtsConfigsResponse();
    virtual ~ListLogLtsConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListLogLtsConfigsResponse members

    /// <summary>
    /// 实例的LTS配置
    /// </summary>

    std::vector<InstanceLtsConfigResp>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<InstanceLtsConfigResp>& value);

    /// <summary>
    /// 结果集大小
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<InstanceLtsConfigResp> instanceLtsConfigs_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListLogLtsConfigsResponse_H_
