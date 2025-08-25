
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeStrategy_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeStrategy_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/InPlaceRollingUpdate.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 升级配置
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  UpgradeStrategy
    : public ModelBase
{
public:
    UpgradeStrategy();
    virtual ~UpgradeStrategy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeStrategy members

    /// <summary>
    /// 升级策略类型，当前仅支持原地升级类型\&quot;inPlaceRollingUpdate\&quot;
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InPlaceRollingUpdate getInPlaceRollingUpdate() const;
    bool inPlaceRollingUpdateIsSet() const;
    void unsetinPlaceRollingUpdate();
    void setInPlaceRollingUpdate(const InPlaceRollingUpdate& value);


protected:
    std::string type_;
    bool typeIsSet_;
    InPlaceRollingUpdate inPlaceRollingUpdate_;
    bool inPlaceRollingUpdateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpgradeStrategy_H_
