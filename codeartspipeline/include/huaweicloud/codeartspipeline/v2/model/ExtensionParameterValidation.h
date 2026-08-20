
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterValidation_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterValidation_H_


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
/// 参数校验规则
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ExtensionParameterValidation
    : public ModelBase
{
public:
    ExtensionParameterValidation();
    virtual ~ExtensionParameterValidation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExtensionParameterValidation members

    /// <summary>
    /// 是否必填
    /// </summary>

    bool isIsRequired() const;
    bool isRequiredIsSet() const;
    void unsetisRequired();
    void setIsRequired(bool value);

    /// <summary>
    /// 正则校验
    /// </summary>

    std::string getPattern() const;
    bool patternIsSet() const;
    void unsetpattern();
    void setPattern(const std::string& value);

    /// <summary>
    /// 校验说明
    /// </summary>

    std::string getPatternDescription() const;
    bool patternDescriptionIsSet() const;
    void unsetpatternDescription();
    void setPatternDescription(const std::string& value);


protected:
    bool isRequired_;
    bool isRequiredIsSet_;
    std::string pattern_;
    bool patternIsSet_;
    std::string patternDescription_;
    bool patternDescriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ExtensionParameterValidation_H_
