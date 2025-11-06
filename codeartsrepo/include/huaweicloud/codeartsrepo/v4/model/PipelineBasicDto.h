
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PipelineBasicDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PipelineBasicDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 流水线基本信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  PipelineBasicDto
    : public ModelBase
{
public:
    PipelineBasicDto();
    virtual ~PipelineBasicDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineBasicDto members

    /// <summary>
    /// 流水线ID
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 流水线链接
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// commit id
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 分支
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 流水线状态，pending为排队，running为运行中，success为成功，failed为失败，canceled为取消，skipped为跳过，timedout为超时
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PipelineBasicDto_H_
