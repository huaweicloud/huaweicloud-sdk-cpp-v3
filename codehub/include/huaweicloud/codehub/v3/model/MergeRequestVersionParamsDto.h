
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestVersionParamsDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestVersionParamsDto_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  MergeRequestVersionParamsDto
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
    /// MR最新变更id
    /// </summary>

    int32_t getDiffId() const;
    bool diffIdIsSet() const;
    void unsetdiffId();
    void setDiffId(int32_t value);

    /// <summary>
    /// 目标分支最新提交
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// 源分支最新提交
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_MergeRequestVersionParamsDto_H_
