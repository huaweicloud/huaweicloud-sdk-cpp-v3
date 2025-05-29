
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParams_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParams_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsbuild/v3/model/Params.h>
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
/// 构建参数约束列表
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildParams
    : public ModelBase
{
public:
    BuildParams();
    virtual ~BuildParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildParams members

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 简要构建信息列表
    /// </summary>

    std::vector<Params>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<Params>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::vector<Params> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildParams_H_
