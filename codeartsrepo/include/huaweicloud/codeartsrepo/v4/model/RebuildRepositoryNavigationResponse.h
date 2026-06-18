
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RebuildRepositoryNavigationResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RebuildRepositoryNavigationResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  RebuildRepositoryNavigationResponse
    : public ModelBase, public HttpResponse
{
public:
    RebuildRepositoryNavigationResponse();
    virtual ~RebuildRepositoryNavigationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RebuildRepositoryNavigationResponse members

    /// <summary>
    /// **参数解释：** 结果标识。 **约束限制：** 不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 结果消息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 触发任务耗时（毫秒）。 **约束限制：** 不涉及。
    /// </summary>

    std::string getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(const std::string& value);

    /// <summary>
    /// **参数解释：** 当前代码导航索引大小（字节）。 **约束限制：** 不涉及。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string duration_;
    bool durationIsSet_;
    int64_t size_;
    bool sizeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_RebuildRepositoryNavigationResponse_H_
