
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_parameters_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_parameters_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildRecord_parameters
    : public ModelBase
{
public:
    BuildRecord_parameters();
    virtual ~BuildRecord_parameters();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildRecord_parameters members

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否为私密参数
    /// </summary>

    bool isSecret() const;
    bool secretIsSet() const;
    void unsetsecret();
    void setSecret(bool value);

    /// <summary>
    /// 参数值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool secret_;
    bool secretIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildRecord_parameters_H_
