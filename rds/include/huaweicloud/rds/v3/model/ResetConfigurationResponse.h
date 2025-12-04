
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetConfigurationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ResetConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    ResetConfigurationResponse();
    virtual ~ResetConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResetConfigurationResponse members

    /// <summary>
    /// **参数解释**：  参数组模板名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getConfigName() const;
    bool configNameIsSet() const;
    void unsetconfigName();
    void setConfigName(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否涉及重启。（当前该字段不使用，默认为false）  **约束限制**：  不涉及。
    /// </summary>

    bool isNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(bool value);


protected:
    std::string configName_;
    bool configNameIsSet_;
    bool needRestart_;
    bool needRestartIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResetConfigurationResponse_H_
