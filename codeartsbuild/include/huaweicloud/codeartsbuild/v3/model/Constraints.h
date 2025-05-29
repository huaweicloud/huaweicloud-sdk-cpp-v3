
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Constraints_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Constraints_H_


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
/// 约束
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Constraints
    : public ModelBase
{
public:
    Constraints();
    virtual ~Constraints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Constraints members

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrormsg() const;
    bool errormsgIsSet() const;
    void unseterrormsg();
    void setErrormsg(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 参考值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string errormsg_;
    bool errormsgIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Constraints_H_
