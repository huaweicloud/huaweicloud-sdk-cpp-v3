
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SwitchedPacketRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SwitchedPacketRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  SwitchedPacketRequest
    : public ModelBase
{
public:
    SwitchedPacketRequest();
    virtual ~SwitchedPacketRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchedPacketRequest members

    /// <summary>
    /// CodeArts项目ID，32位数字、小写字母组合。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 源分组编号
    /// </summary>

    std::string getSourceGroupId() const;
    bool sourceGroupIdIsSet() const;
    void unsetsourceGroupId();
    void setSourceGroupId(const std::string& value);

    /// <summary>
    /// 目标分组编号
    /// </summary>

    std::string getTargetGroupId() const;
    bool targetGroupIdIsSet() const;
    void unsettargetGroupId();
    void setTargetGroupId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string sourceGroupId_;
    bool sourceGroupIdIsSet_;
    std::string targetGroupId_;
    bool targetGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SwitchedPacketRequest& dereference_from_shared_ptr(std::shared_ptr<SwitchedPacketRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_SwitchedPacketRequest_H_
