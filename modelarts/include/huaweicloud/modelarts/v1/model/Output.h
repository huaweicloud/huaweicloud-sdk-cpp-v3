
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Output_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Output_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Remote.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Output
    : public ModelBase
{
public:
    Output();
    virtual ~Output();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Output members

    /// <summary>
    /// 数据输出通道名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据输出通道描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据输出通道映射的容器本地路径。
    /// </summary>

    std::string getLocalDir() const;
    bool localDirIsSet() const;
    void unsetlocalDir();
    void setLocalDir(const std::string& value);

    /// <summary>
    /// **参数解释**：数据输出通道路径（local_dir）的下发方式。 **约束限制**：不涉及。 **取值范围**： - parameter：超参形式 - env：环境变量形式  **默认取值**：默认超参形式。
    /// </summary>

    std::string getAccessMethod() const;
    bool accessMethodIsSet() const;
    void unsetaccessMethod();
    void setAccessMethod(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Remote getRemote() const;
    bool remoteIsSet() const;
    void unsetremote();
    void setRemote(const Remote& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string localDir_;
    bool localDirIsSet_;
    std::string accessMethod_;
    bool accessMethodIsSet_;
    Remote remote_;
    bool remoteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Output_H_
