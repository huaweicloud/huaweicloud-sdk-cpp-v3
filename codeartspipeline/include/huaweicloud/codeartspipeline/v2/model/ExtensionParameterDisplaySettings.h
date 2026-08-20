
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterDisplaySettings_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterDisplaySettings_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/ExtensionRadioOption.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// UI控件配置
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionParameterDisplaySettings
    : public ModelBase
{
public:
    ExtensionParameterDisplaySettings();
    virtual ~ExtensionParameterDisplaySettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionParameterDisplaySettings members

    /// <summary>
    /// 控件类型，如 Select/CodeText/Radio/SingleLineText/Hidden
    /// </summary>

    std::string getDevCloudControlType() const;
    bool devCloudControlTypeIsSet() const;
    void unsetdevCloudControlType();
    void setDevCloudControlType(const std::string& value);

    /// <summary>
    /// 默认选中值。可能为字符串，也可能为对象(如 {displayName, value})。
    /// </summary>

    std::string getDevCloudControlTypeDefault() const;
    bool devCloudControlTypeDefaultIsSet() const;
    void unsetdevCloudControlTypeDefault();
    void setDevCloudControlTypeDefault(const std::string& value);

    /// <summary>
    /// 下拉选项(Select类型)。
    /// </summary>

    std::vector<std::string>& getDevCloudControlTypeSelect();
    bool devCloudControlTypeSelectIsSet() const;
    void unsetdevCloudControlTypeSelect();
    void setDevCloudControlTypeSelect(const std::vector<std::string>& value);

    /// <summary>
    /// 单选选项(Radio类型)。
    /// </summary>

    std::vector<ExtensionRadioOption>& getDevCloudControlTypeRadio();
    bool devCloudControlTypeRadioIsSet() const;
    void unsetdevCloudControlTypeRadio();
    void setDevCloudControlTypeRadio(const std::vector<ExtensionRadioOption>& value);


protected:
    std::string devCloudControlType_;
    bool devCloudControlTypeIsSet_;
    std::string devCloudControlTypeDefault_;
    bool devCloudControlTypeDefaultIsSet_;
    std::vector<std::string> devCloudControlTypeSelect_;
    bool devCloudControlTypeSelectIsSet_;
    std::vector<ExtensionRadioOption> devCloudControlTypeRadio_;
    bool devCloudControlTypeRadioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterDisplaySettings_H_
