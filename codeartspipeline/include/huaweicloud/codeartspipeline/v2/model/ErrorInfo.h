
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ErrorInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ErrorInfo_H_


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
/// **参数解释**： 报错详情。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ErrorInfo
    : public ModelBase
{
public:
    ErrorInfo();
    virtual ~ErrorInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ErrorInfo members

    /// <summary>
    /// **参数解释**： 错误码。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 错误信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::string message_;
    bool messageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ErrorInfo_H_
