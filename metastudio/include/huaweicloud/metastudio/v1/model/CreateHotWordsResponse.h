
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/HotWordsTypeEnum.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/LanguageEnum.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateHotWordsResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateHotWordsResponse();
    virtual ~CreateHotWordsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateHotWordsResponse members

    /// <summary>
    /// 热词记录ID。
    /// </summary>

    std::string getHotWordsId() const;
    bool hotWordsIdIsSet() const;
    void unsethotWordsId();
    void setHotWordsId(const std::string& value);

    /// <summary>
    /// 应用ID。
    /// </summary>

    std::string getRobotId() const;
    bool robotIdIsSet() const;
    void unsetrobotId();
    void setRobotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HotWordsTypeEnum getHotWordsType() const;
    bool hotWordsTypeIsSet() const;
    void unsethotWordsType();
    void setHotWordsType(const HotWordsTypeEnum& value);

    /// <summary>
    /// 热词ID(sis中配置)。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// SIS服务所在区域projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 对接SIS服务的区域。 &gt; 0：北京四；3：上海一；
    /// </summary>

    int32_t getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    LanguageEnum getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const LanguageEnum& value);

    /// <summary>
    /// 创建时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 更新时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string hotWordsId_;
    bool hotWordsIdIsSet_;
    std::string robotId_;
    bool robotIdIsSet_;
    HotWordsTypeEnum hotWordsType_;
    bool hotWordsTypeIsSet_;
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    int32_t region_;
    bool regionIsSet_;
    LanguageEnum language_;
    bool languageIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateHotWordsResponse_H_
