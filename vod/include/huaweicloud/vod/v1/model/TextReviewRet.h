
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TextReviewRet_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TextReviewRet_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 文本检测结果
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  TextReviewRet
    : public ModelBase
{
public:
    TextReviewRet();
    virtual ~TextReviewRet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TextReviewRet members

    /// <summary>
    /// 检测结果是否通过。  取值如下： - block：包含敏感信息，不通过。 - pass：不包含敏感信息，通过。 - review：需要人工复检。
    /// </summary>

    std::string getSuggestion() const;
    bool suggestionIsSet() const;
    void unsetsuggestion();
    void setSuggestion(const std::string& value);

    /// <summary>
    /// 涉政敏感词列表
    /// </summary>

    std::string getPolitics() const;
    bool politicsIsSet() const;
    void unsetpolitics();
    void setPolitics(const std::string& value);

    /// <summary>
    /// 涉黄敏感词列表
    /// </summary>

    std::string getPorn() const;
    bool pornIsSet() const;
    void unsetporn();
    void setPorn(const std::string& value);

    /// <summary>
    /// 辱骂敏感词列表
    /// </summary>

    std::string getAbuse() const;
    bool abuseIsSet() const;
    void unsetabuse();
    void setAbuse(const std::string& value);


protected:
    std::string suggestion_;
    bool suggestionIsSet_;
    std::string politics_;
    bool politicsIsSet_;
    std::string porn_;
    bool pornIsSet_;
    std::string abuse_;
    bool abuseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TextReviewRet_H_
