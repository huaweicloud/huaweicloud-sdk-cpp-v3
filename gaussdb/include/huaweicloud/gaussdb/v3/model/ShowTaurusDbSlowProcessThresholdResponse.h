
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbSlowProcessThresholdResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbSlowProcessThresholdResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowTaurusDbSlowProcessThresholdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTaurusDbSlowProcessThresholdResponse();
    virtual ~ShowTaurusDbSlowProcessThresholdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTaurusDbSlowProcessThresholdResponse members

    /// <summary>
    /// **参数解释**:  慢会话阈值，单位为秒。  **取值范围**：  1-86400。 
    /// </summary>

    int32_t getSlowProcessThreshold() const;
    bool slowProcessThresholdIsSet() const;
    void unsetslowProcessThreshold();
    void setSlowProcessThreshold(int32_t value);


protected:
    int32_t slowProcessThreshold_;
    bool slowProcessThresholdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowTaurusDbSlowProcessThresholdResponse_H_
