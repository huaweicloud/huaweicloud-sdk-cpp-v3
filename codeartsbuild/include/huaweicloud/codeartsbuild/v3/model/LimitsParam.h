
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_LimitsParam_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_LimitsParam_H_


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
/// 枚举类参数限制
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  LimitsParam
    : public ModelBase
{
public:
    LimitsParam();
    virtual ~LimitsParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LimitsParam members

    /// <summary>
    /// 是否生效，默认为\&quot;0\&quot;，为生效状态
    /// </summary>

    std::string getDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(const std::string& value);

    /// <summary>
    /// 参数展示的名字
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 参数名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string disable_;
    bool disableIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_LimitsParam_H_
