
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfoResult_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfoResult_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  AnalysisInfoResult
    : public ModelBase
{
public:
    AnalysisInfoResult();
    virtual ~AnalysisInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AnalysisInfoResult members

    /// <summary>
    /// 角色类型, 目前仅支持 AGENT(座席), USER(用户)。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 情绪类型，目前支持NORMAL(正常)，ANGRY(愤怒)，UNKNOWN(未知)。 在识别配置中emotion为true时存在。
    /// </summary>

    std::string getEmotion() const;
    bool emotionIsSet() const;
    void unsetemotion();
    void setEmotion(const std::string& value);

    /// <summary>
    /// 语速信息，单位是\&quot;每秒字数\&quot;。 在识别配置中speed为true时存在。
    /// </summary>

    float getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(float value);


protected:
    std::string role_;
    bool roleIsSet_;
    std::string emotion_;
    bool emotionIsSet_;
    float speed_;
    bool speedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_AnalysisInfoResult_H_
