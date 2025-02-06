
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoUpgradePolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoUpgradePolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAutoUpgradePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoUpgradePolicyResponse();
    virtual ~ShowAutoUpgradePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoUpgradePolicyResponse members

    /// <summary>
    /// 自动小版本升级开关选项 true：打开自动小版本升级 false：关闭自动小版本升级
    /// </summary>

    bool isSwitchOption() const;
    bool switchOptionIsSet() const;
    void unsetswitchOption();
    void setSwitchOption(bool value);


protected:
    bool switchOption_;
    bool switchOptionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAutoUpgradePolicyResponse_H_
