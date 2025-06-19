
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableTheJobRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableTheJobRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 禁用构建任务请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DisableTheJobRequestBody
    : public ModelBase
{
public:
    DisableTheJobRequestBody();
    virtual ~DisableTheJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisableTheJobRequestBody members

    /// <summary>
    /// 禁用原因
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 是否禁用
    /// </summary>

    bool isDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(bool value);


protected:
    std::string reason_;
    bool reasonIsSet_;
    bool disabled_;
    bool disabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DisableTheJobRequestBody_H_
