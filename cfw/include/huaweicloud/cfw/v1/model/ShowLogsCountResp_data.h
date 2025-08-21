
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 聚合时间点 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowLogsCountResp_data
    : public ModelBase
{
public:
    ShowLogsCountResp_data();
    virtual ~ShowLogsCountResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowLogsCountResp_data members

    /// <summary>
    /// **参数解释**： 聚合时间点 **取值范围**： 不涉及
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);


protected:
    int64_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowLogsCountResp_data_H_
