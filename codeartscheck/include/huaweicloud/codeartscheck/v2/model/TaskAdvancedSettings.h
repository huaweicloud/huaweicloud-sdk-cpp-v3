
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskAdvancedSettings_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskAdvancedSettings_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  TaskAdvancedSettings
    : public ModelBase
{
public:
    TaskAdvancedSettings();
    virtual ~TaskAdvancedSettings();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskAdvancedSettings members

    /// <summary>
    /// 高级选项对应的名称
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 高级选项对应的取值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 高级选项对应的可选项
    /// </summary>

    std::string getOptionValue() const;
    bool optionValueIsSet() const;
    void unsetoptionValue();
    void setOptionValue(const std::string& value);

    /// <summary>
    /// 高级选项对应的中文描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string optionValue_;
    bool optionValueIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_TaskAdvancedSettings_H_
