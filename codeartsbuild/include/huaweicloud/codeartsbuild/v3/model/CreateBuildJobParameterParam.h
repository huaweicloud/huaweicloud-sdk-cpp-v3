
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobParameterParam_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobParameterParam_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsbuild/v3/model/LimitsParam.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建执行参数子参数
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CreateBuildJobParameterParam
    : public ModelBase
{
public:
    CreateBuildJobParameterParam();
    virtual ~CreateBuildJobParameterParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBuildJobParameterParam members

    /// <summary>
    /// 参数字段名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数字段值
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 枚举类参数限制
    /// </summary>

    std::vector<LimitsParam>& getLimits();
    bool limitsIsSet() const;
    void unsetlimits();
    void setLimits(const std::vector<LimitsParam>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::vector<LimitsParam> limits_;
    bool limitsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_CreateBuildJobParameterParam_H_
