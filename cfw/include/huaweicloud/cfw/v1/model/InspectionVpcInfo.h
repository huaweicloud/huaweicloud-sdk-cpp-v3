
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_InspectionVpcInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_InspectionVpcInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  InspectionVpcInfo
    : public ModelBase
{
public:
    InspectionVpcInfo();
    virtual ~InspectionVpcInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InspectionVpcInfo members

    /// <summary>
    /// **参数解释**： 引流VPC  **取值范围**： 不涉及
    /// </summary>

    std::string getInspectionVpcId() const;
    bool inspectionVpcIdIsSet() const;
    void unsetinspectionVpcId();
    void setInspectionVpcId(const std::string& value);

    /// <summary>
    /// **参数解释**： 引流VPC  **取值范围**： 不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string inspectionVpcId_;
    bool inspectionVpcIdIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_InspectionVpcInfo_H_
