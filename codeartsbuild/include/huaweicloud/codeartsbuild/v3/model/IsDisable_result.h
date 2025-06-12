
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_IsDisable_result_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_IsDisable_result_H_


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
/// 返回结果
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  IsDisable_result
    : public ModelBase
{
public:
    IsDisable_result();
    virtual ~IsDisable_result();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IsDisable_result members

    /// <summary>
    /// 禁用者
    /// </summary>

    std::string getForbiddener() const;
    bool forbiddenerIsSet() const;
    void unsetforbiddener();
    void setForbiddener(const std::string& value);

    /// <summary>
    /// 禁用描述
    /// </summary>

    std::string getReson() const;
    bool resonIsSet() const;
    void unsetreson();
    void setReson(const std::string& value);

    /// <summary>
    /// 禁用标识
    /// </summary>

    int32_t getDisabled() const;
    bool disabledIsSet() const;
    void unsetdisabled();
    void setDisabled(int32_t value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 明文名称
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 禁用时间
    /// </summary>

    double getForbiddenTime() const;
    bool forbiddenTimeIsSet() const;
    void unsetforbiddenTime();
    void setForbiddenTime(double value);


protected:
    std::string forbiddener_;
    bool forbiddenerIsSet_;
    std::string reson_;
    bool resonIsSet_;
    int32_t disabled_;
    bool disabledIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    double forbiddenTime_;
    bool forbiddenTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_IsDisable_result_H_
