
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowDisasterRecoverySettingsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowDisasterRecoverySettingsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchoverRatioInfo.h>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowDisasterRecoverySettingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDisasterRecoverySettingsResponse();
    virtual ~ShowDisasterRecoverySettingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDisasterRecoverySettingsResponse members

    /// <summary>
    /// 容灾切换的故障节点比例列表。
    /// </summary>

    std::vector<SwitchoverRatioInfo>& getDisasterRecoverySettings();
    bool disasterRecoverySettingsIsSet() const;
    void unsetdisasterRecoverySettings();
    void setDisasterRecoverySettings(const std::vector<SwitchoverRatioInfo>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<SwitchoverRatioInfo> disasterRecoverySettings_;
    bool disasterRecoverySettingsIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowDisasterRecoverySettingsResponse_H_
