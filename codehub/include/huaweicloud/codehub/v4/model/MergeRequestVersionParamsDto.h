
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVersionParamsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVersionParamsDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 合并请求版本详情。
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestVersionParamsDto
    : public ModelBase
{
public:
    MergeRequestVersionParamsDto();
    virtual ~MergeRequestVersionParamsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestVersionParamsDto members

    /// <summary>
    /// **参数解释：** 版本id(由合并请求id和sha值共同组成)。
    /// </summary>

    int32_t getDiffId() const;
    bool diffIdIsSet() const;
    void unsetdiffId();
    void setDiffId(int32_t value);

    /// <summary>
    /// **参数解释：** 起始sha值。
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交记录id。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);


protected:
    int32_t diffId_;
    bool diffIdIsSet_;
    std::string startSha_;
    bool startShaIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestVersionParamsDto_H_
