
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedVpcResp_data_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedVpcResp_data_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/InspectionVpcInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 查询VPC间防火墙使用引流VPC返回体 **取值范围**： 不涉及
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowEwAssociatedVpcResp_data
    : public ModelBase
{
public:
    ShowEwAssociatedVpcResp_data();
    virtual ~ShowEwAssociatedVpcResp_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEwAssociatedVpcResp_data members

    /// <summary>
    /// **参数解释**： 使用引流VPC列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<InspectionVpcInfo>& getInspectionVpcList();
    bool inspectionVpcListIsSet() const;
    void unsetinspectionVpcList();
    void setInspectionVpcList(const std::vector<InspectionVpcInfo>& value);


protected:
    std::vector<InspectionVpcInfo> inspectionVpcList_;
    bool inspectionVpcListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedVpcResp_data_H_
