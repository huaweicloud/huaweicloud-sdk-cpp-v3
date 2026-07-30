
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PFSSummaryResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PFSSummaryResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// obs并行文件系统输出。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PFSSummaryResp
    : public ModelBase
{
public:
    PFSSummaryResp();
    virtual ~PFSSummaryResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PFSSummaryResp members

    /// <summary>
    /// **参数解释**：obs并行文件系统路径url。 **取值范围**：不涉及。
    /// </summary>

    std::string getPfsPath() const;
    bool pfsPathIsSet() const;
    void unsetpfsPath();
    void setPfsPath(const std::string& value);


protected:
    std::string pfsPath_;
    bool pfsPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PFSSummaryResp_H_
