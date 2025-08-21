
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ErInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询VPC间防火墙使用的企业路由器信息返回体 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowEwAssociatedErResp_data
    : public ModelBase
{
public:
    ShowEwAssociatedErResp_data();
    virtual ~ShowEwAssociatedErResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEwAssociatedErResp_data members

    /// <summary>
    /// **参数解释**： 企业路由器列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<ErInfo>& getErList();
    bool erListIsSet() const;
    void unseterList();
    void setErList(const std::vector<ErInfo>& value);


protected:
    std::vector<ErInfo> erList_;
    bool erListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResp_data_H_
