
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStep_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStep_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  BuildStep
    : public ModelBase
{
public:
    BuildStep();
    virtual ~BuildStep();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BuildStep members

    /// <summary>
    /// 步骤名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 步骤状态,可选值（running运行中，success成功，error失败，未运行为空字符串）
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 步骤执行时长，单位ms
    /// </summary>

    int32_t getBuildTime() const;
    bool buildTimeIsSet() const;
    void unsetbuildTime();
    void setBuildTime(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t buildTime_;
    bool buildTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_BuildStep_H_
