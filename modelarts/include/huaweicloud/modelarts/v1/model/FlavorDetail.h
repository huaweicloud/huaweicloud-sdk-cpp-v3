
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorDetail_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorDetail_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/BillingInfo.h>
#include <huaweicloud/modelarts/v1/model/FlavorInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业、算法的规格信息（该字段只有公共资源池存在）。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  FlavorDetail
    : public ModelBase
{
public:
    FlavorDetail();
    virtual ~FlavorDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorDetail members

    /// <summary>
    /// 资源规格的类型。可选值如下： - CPU - GPU - [Ascend](tag:hc,hk,fcs_super)
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BillingInfo getBilling() const;
    bool billingIsSet() const;
    void unsetbilling();
    void setBilling(const BillingInfo& value);

    /// <summary>
    /// 
    /// </summary>

    FlavorInfo getFlavorInfo() const;
    bool flavorInfoIsSet() const;
    void unsetflavorInfo();
    void setFlavorInfo(const FlavorInfo& value);


protected:
    std::string flavorType_;
    bool flavorTypeIsSet_;
    BillingInfo billing_;
    bool billingIsSet_;
    FlavorInfo flavorInfo_;
    bool flavorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_FlavorDetail_H_
