
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_PictureReviewRet_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_PictureReviewRet_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/ReviewDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 图片审核结果
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  PictureReviewRet
    : public ModelBase
{
public:
    PictureReviewRet();
    virtual ~PictureReviewRet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PictureReviewRet members

    /// <summary>
    /// 检测结果是否通过。  取值如下： - block：包含敏感信息，不通过。 - pass：不包含敏感信息，通过。 - review：需要人工复检。
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 截图在视频中的时间偏移值。封面不涉及此字段  单位：秒。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 对应截图/封面的访问URL。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 政治因素审核结果。
    /// </summary>

    std::vector<ReviewDetail>& getPolitics();
    bool politicsIsSet() const;
    void unsetpolitics();
    void setPolitics(const std::vector<ReviewDetail>& value);

    /// <summary>
    /// 暴恐元素审核结果。
    /// </summary>

    std::vector<ReviewDetail>& getTerrorism();
    bool terrorismIsSet() const;
    void unsetterrorism();
    void setTerrorism(const std::vector<ReviewDetail>& value);

    /// <summary>
    /// 涉黄内容审核结果。
    /// </summary>

    std::vector<ReviewDetail>& getPorn();
    bool pornIsSet() const;
    void unsetporn();
    void setPorn(const std::vector<ReviewDetail>& value);


protected:
    std::string suggestion_;
    bool suggestionIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::vector<ReviewDetail> politics_;
    bool politicsIsSet_;
    std::vector<ReviewDetail> terrorism_;
    bool terrorismIsSet_;
    std::vector<ReviewDetail> porn_;
    bool pornIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_PictureReviewRet_H_
