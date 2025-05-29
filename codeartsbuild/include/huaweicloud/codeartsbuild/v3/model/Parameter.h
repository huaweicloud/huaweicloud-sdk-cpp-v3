
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Parameter_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Parameter_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameterParam.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 构建作业参数
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  Parameter
    : public ModelBase
{
public:
    Parameter();
    virtual ~Parameter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Parameter members

    /// <summary>
    /// 参数定义名，默认为hudson.model.StringParameterDefinition
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 构建执行参数子参数
    /// </summary>

    std::vector<CreateBuildJobParameterParam>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<CreateBuildJobParameterParam>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<CreateBuildJobParameterParam> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_Parameter_H_
