
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadBuildFullLogRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadBuildFullLogRequest_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DownloadBuildFullLogRequest
    : public ModelBase
{
public:
    DownloadBuildFullLogRequest();
    virtual ~DownloadBuildFullLogRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadBuildFullLogRequest members

    /// <summary>
    /// 记录ID,36位数字、小写字母、&#39;-&#39;组组合。
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 日志等级 值为INFO | DEBUG。
    /// </summary>

    std::string getLogLevel() const;
    bool logLevelIsSet() const;
    void unsetlogLevel();
    void setLogLevel(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否压缩日志。 **约束限制**： 不涉及。 **取值范围**： true|false。 **默认取值**： false
    /// </summary>

    bool isCompress() const;
    bool compressIsSet() const;
    void unsetcompress();
    void setCompress(bool value);


protected:
    std::string recordId_;
    bool recordIdIsSet_;
    std::string logLevel_;
    bool logLevelIsSet_;
    bool compress_;
    bool compressIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadBuildFullLogRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadBuildFullLogRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DownloadBuildFullLogRequest_H_
