
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_WordPronunciation_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_WordPronunciation_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  单词发音打分
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  WordPronunciation
    : public ModelBase
{
public:
    WordPronunciation();
    virtual ~WordPronunciation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WordPronunciation members

    /// <summary>
    /// 单词发音综合得分 0-100
    /// </summary>

    float getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(float value);

    /// <summary>
    /// 单词发音好坏得分 0-100
    /// </summary>

    float getGop() const;
    bool gopIsSet() const;
    void unsetgop();
    void setGop(float value);


protected:
    float score_;
    bool scoreIsSet_;
    float gop_;
    bool gopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_WordPronunciation_H_
