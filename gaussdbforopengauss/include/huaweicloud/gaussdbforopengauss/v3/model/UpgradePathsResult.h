
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradePathsResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradePathsResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpgradePathsResult
    : public ModelBase
{
public:
    UpgradePathsResult();
    virtual ~UpgradePathsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradePathsResult members

    /// <summary>
    /// **参数解释**: 源引擎版本号。 **取值范围**: 不涉及 
    /// </summary>

    std::string getStartVersion() const;
    bool startVersionIsSet() const;
    void unsetstartVersion();
    void setStartVersion(const std::string& value);

    /// <summary>
    /// **参数解释**: 目标引擎版本号。 **取值范围**: 不涉及 
    /// </summary>

    std::string getEndVersion() const;
    bool endVersionIsSet() const;
    void unsetendVersion();
    void setEndVersion(const std::string& value);


protected:
    std::string startVersion_;
    bool startVersionIsSet_;
    std::string endVersion_;
    bool endVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradePathsResult_H_
