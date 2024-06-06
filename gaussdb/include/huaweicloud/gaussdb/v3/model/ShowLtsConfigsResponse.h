
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowLtsConfigsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowLtsConfigsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/LtsConfigsV3.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowLtsConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowLtsConfigsResponse();
    virtual ~ShowLtsConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLtsConfigsResponse members

    /// <summary>
    /// 实例LTS日志配置列表
    /// </summary>

    std::vector<LtsConfigsV3>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<LtsConfigsV3>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<LtsConfigsV3> instanceLtsConfigs_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowLtsConfigsResponse_H_
