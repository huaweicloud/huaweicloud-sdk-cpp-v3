
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Trigger_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Trigger_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/ParameterItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 定时任务触发器
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Trigger
    : public ModelBase
{
public:
    Trigger();
    virtual ~Trigger();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Trigger members

    /// <summary>
    /// 自定义参数
    /// </summary>

    std::vector<ParameterItem>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<ParameterItem>& value);

    /// <summary>
    /// 触发器类型
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::vector<ParameterItem> parameters_;
    bool parametersIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Trigger_H_
