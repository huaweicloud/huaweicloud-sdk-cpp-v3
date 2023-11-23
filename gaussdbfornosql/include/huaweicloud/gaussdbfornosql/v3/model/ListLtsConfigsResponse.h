
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListLtsConfigsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListLtsConfigsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/InstanceLogConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListLtsConfigsResponse
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
    /// 实例总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 实例-LTS日志配置信息列表。
    /// </summary>

    std::vector<InstanceLogConfig>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<InstanceLogConfig>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<InstanceLogConfig> instanceLtsConfigs_;
    bool instanceLtsConfigsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListLtsConfigsResponse_H_
