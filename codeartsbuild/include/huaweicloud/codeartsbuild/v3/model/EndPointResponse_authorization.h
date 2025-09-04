
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_authorization_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_authorization_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 授权
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  EndPointResponse_authorization
    : public ModelBase
{
public:
    EndPointResponse_authorization();
    virtual ~EndPointResponse_authorization();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EndPointResponse_authorization members

    /// <summary>
    /// 参数
    /// </summary>

    Object getParameters() const;
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const Object& value);

    /// <summary>
    /// 计划
    /// </summary>

    Object getScheme() const;
    bool schemeIsSet() const;
    void unsetscheme();
    void setScheme(const Object& value);


protected:
    Object parameters_;
    bool parametersIsSet_;
    Object scheme_;
    bool schemeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_EndPointResponse_authorization_H_
