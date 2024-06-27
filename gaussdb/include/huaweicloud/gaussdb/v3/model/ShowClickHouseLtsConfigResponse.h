
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseLtsConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseLtsConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ChInstanceLtsConfigs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowClickHouseLtsConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClickHouseLtsConfigResponse();
    virtual ~ShowClickHouseLtsConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowClickHouseLtsConfigResponse members

    /// <summary>
    /// 实例LTS配置信息。
    /// </summary>

    std::vector<ChInstanceLtsConfigs>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<ChInstanceLtsConfigs>& value);

    /// <summary>
    /// 实例总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ChInstanceLtsConfigs> instanceLtsConfigs_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowClickHouseLtsConfigResponse_H_
