
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobOutputResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobOutputResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 作业输出。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobOutputResp
    : public ModelBase
{
public:
    JobOutputResp();
    virtual ~JobOutputResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobOutputResp members

    /// <summary>
    /// **参数解释**：输出数据的名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：输出项类型。 **取值范围**：枚举值如下： - obs：OBS - model：AI应用元模型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：输出配置。
    /// </summary>

    std::map<std::string, Object>& getConfig();
    bool configIsSet() const;
    void unsetconfig();
    void setConfig(const std::map<std::string, Object>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::map<std::string, Object> config_;
    bool configIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobOutputResp_H_
