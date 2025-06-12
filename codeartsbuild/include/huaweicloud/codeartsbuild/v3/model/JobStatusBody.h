
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusBody_H_


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
/// 任务状态返回体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  JobStatusBody
    : public ModelBase
{
public:
    JobStatusBody();
    virtual ~JobStatusBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobStatusBody members

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务终止状态
    /// </summary>

    std::string getAbortStatus() const;
    bool abortStatusIsSet() const;
    void unsetabortStatus();
    void setAbortStatus(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string abortStatus_;
    bool abortStatusIsSet_;
    std::string label_;
    bool labelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_JobStatusBody_H_
