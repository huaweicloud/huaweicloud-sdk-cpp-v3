
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusResultResponseBody_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusResultResponseBody_result_H_


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
/// 结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobStatusResultResponseBody_result
    : public ModelBase
{
public:
    JobStatusResultResponseBody_result();
    virtual ~JobStatusResultResponseBody_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobStatusResultResponseBody_result members

    /// <summary>
    /// 是否构建中
    /// </summary>

    bool isBuilding() const;
    bool buildingIsSet() const;
    void unsetbuilding();
    void setBuilding(bool value);

    /// <summary>
    /// 构建结果
    /// </summary>

    std::string getBuildResult() const;
    bool buildResultIsSet() const;
    void unsetbuildResult();
    void setBuildResult(const std::string& value);

    /// <summary>
    /// region
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);


protected:
    bool building_;
    bool buildingIsSet_;
    std::string buildResult_;
    bool buildResultIsSet_;
    std::string region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusResultResponseBody_result_H_
