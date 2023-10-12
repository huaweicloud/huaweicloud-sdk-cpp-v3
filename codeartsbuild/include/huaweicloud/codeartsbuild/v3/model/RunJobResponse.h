
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  RunJobResponse
    : public ModelBase, public HttpResponse
{
public:
    RunJobResponse();
    virtual ~RunJobResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunJobResponse members

    /// <summary>
    /// 临时任务名称
    /// </summary>

    std::string getOctopusJobName() const;
    bool octopusJobNameIsSet() const;
    void unsetoctopusJobName();
    void setOctopusJobName(const std::string& value);

    /// <summary>
    /// 实际构建次数
    /// </summary>

    std::string getActualBuildNumber() const;
    bool actualBuildNumberIsSet() const;
    void unsetactualBuildNumber();
    void setActualBuildNumber(const std::string& value);

    /// <summary>
    /// 构建每日编号
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);


protected:
    std::string octopusJobName_;
    bool octopusJobNameIsSet_;
    std::string actualBuildNumber_;
    bool actualBuildNumberIsSet_;
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_RunJobResponse_H_
