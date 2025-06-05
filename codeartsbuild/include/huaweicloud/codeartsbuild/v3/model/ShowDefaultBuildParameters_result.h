
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultBuildParameters_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultBuildParameters_result_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParameters_params.h>

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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  ShowDefaultBuildParameters_result
    : public ModelBase
{
public:
    ShowDefaultBuildParameters_result();
    virtual ~ShowDefaultBuildParameters_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDefaultBuildParameters_result members

    /// <summary>
    /// 参数定义
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数元数据列表
    /// </summary>

    std::vector<ShowDefaultBuildParameters_params>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<ShowDefaultBuildParameters_params>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<ShowDefaultBuildParameters_params> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_ShowDefaultBuildParameters_result_H_
