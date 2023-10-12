
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_Subtitle_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_Subtitle_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  Subtitle
    : public ModelBase
{
public:
    Subtitle();
    virtual ~Subtitle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subtitle members

    /// <summary>
    /// 字幕id。  取值范围：[1,8]。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 字幕文件类型，目前暂只支持“SRT”。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 字幕语言类型。  取值如下： - CN：表示中文字幕。 - EN：表示英文字幕。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 字幕文件的MD5值。
    /// </summary>

    std::string getMd5() const;
    bool md5IsSet() const;
    void unsetmd5();
    void setMd5(const std::string& value);

    /// <summary>
    /// 字幕描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string md5_;
    bool md5IsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_Subtitle_H_
