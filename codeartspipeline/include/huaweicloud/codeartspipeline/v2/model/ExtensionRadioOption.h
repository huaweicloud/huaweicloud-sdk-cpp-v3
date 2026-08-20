
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionRadioOption_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionRadioOption_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单选选项
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionRadioOption
    : public ModelBase
{
public:
    ExtensionRadioOption();
    virtual ~ExtensionRadioOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionRadioOption members

    /// <summary>
    /// 选项显示名
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 选项值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionRadioOption_H_
