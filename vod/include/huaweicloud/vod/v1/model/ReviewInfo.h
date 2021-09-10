
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/PictureReviewRet.h>
#include <string>
#include <huaweicloud/vod/v1/model/TextReviewRet.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 审核信息数组。  &gt; 仅当审核成功后才能查询到此信息，未审核、正在审核以及审核失败时，无此字段信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ReviewInfo
    : public ModelBase
{
public:
    ReviewInfo();
    virtual ~ReviewInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ReviewInfo members

    /// <summary>
    /// 检测结果是否通过。  取值如下： - block：包含敏感信息，不通过。 - pass：不包含敏感信息，通过。 - review：需要人工复检。  &gt; 当同时检测多个场景时，suggestion的值以最可能包含敏感信息的场景为准。即任一场景出现了block则总的suggestion为block，所有场景都pass时suggestion为pass，这两种情况之外则一定有场景需要review，此时suggestion为review。
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TextReviewRet getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const TextReviewRet& value);

    /// <summary>
    /// 封面检测结果。
    /// </summary>

    std::vector<PictureReviewRet>& getCover();
    bool coverIsSet() const;
    void unsetcover();
    void setCover(const std::vector<PictureReviewRet>& value);

    /// <summary>
    /// 视频检测结果。
    /// </summary>

    std::vector<PictureReviewRet>& getVideo();
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const std::vector<PictureReviewRet>& value);

    /// <summary>
    /// 执行情况描述。
    /// </summary>

    std::string getExecDesc() const;
    bool execDescIsSet() const;
    void unsetexecDesc();
    void setExecDesc(const std::string& value);

    /// <summary>
    /// 审核状态。  取值如下： - UN_REVIEW：未审核 - REVIEWING：审核中 - REVIEW_SUSPICIOUS：审核可疑，需要人工审核 - REVIEW_PASSED：审核通过 - REVIEW_FAILED：审核失败。 - REVIEW_BLOCKED：已屏蔽。
    /// </summary>

    std::string getReviewStatus() const;
    bool reviewStatusIsSet() const;
    void unsetreviewStatus();
    void setReviewStatus(const std::string& value);


protected:
    std::string suggestion_;
    bool suggestionIsSet_;
    TextReviewRet text_;
    bool textIsSet_;
    std::vector<PictureReviewRet> cover_;
    bool coverIsSet_;
    std::vector<PictureReviewRet> video_;
    bool videoIsSet_;
    std::string execDesc_;
    bool execDescIsSet_;
    std::string reviewStatus_;
    bool reviewStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ReviewInfo_H_
