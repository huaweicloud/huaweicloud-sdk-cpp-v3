
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteSubtitle_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteSubtitle_H_

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
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  DeleteSubtitle
    : public ModelBase
{
public:
    DeleteSubtitle();
    virtual ~DeleteSubtitle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteSubtitle members

    /// <summary>
    /// 字幕类型，字幕封装当前仅支持VTT
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 字幕语言
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_DeleteSubtitle_H_
