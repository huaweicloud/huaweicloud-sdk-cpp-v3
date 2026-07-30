
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputResp_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputResp_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/RemoteResp.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OutputResp
    : public ModelBase
{
public:
    OutputResp();
    virtual ~OutputResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputResp members

    /// <summary>
    /// **参数解释**：数据输出通道名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：数据输出通道描述信息。 **取值范围**：不涉及。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：数据输出通道映射的容器本地路径。 **取值范围**：不涉及。
    /// </summary>

    std::string getLocalDir() const;
    bool localDirIsSet() const;
    void unsetlocalDir();
    void setLocalDir(const std::string& value);

    /// <summary>
    /// **参数解释**：数据输入通道路径（local_dir）的下发方式。 **取值范围**： - parameter：超参形式 - env：环境变量形式
    /// </summary>

    std::string getAccessMethod() const;
    bool accessMethodIsSet() const;
    void unsetaccessMethod();
    void setAccessMethod(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RemoteResp getRemote() const;
    bool remoteIsSet() const;
    void unsetremote();
    void setRemote(const RemoteResp& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string localDir_;
    bool localDirIsSet_;
    std::string accessMethod_;
    bool accessMethodIsSet_;
    RemoteResp remote_;
    bool remoteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OutputResp_H_
