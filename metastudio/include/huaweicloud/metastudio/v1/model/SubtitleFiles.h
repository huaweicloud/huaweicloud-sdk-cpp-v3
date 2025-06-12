
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFiles_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFiles_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/SubtitleFileInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SubtitleFiles
    : public ModelBase
{
public:
    SubtitleFiles();
    virtual ~SubtitleFiles();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SubtitleFiles members

    /// <summary>
    /// 
    /// </summary>

    SubtitleFileInfo getTextSubtitleFile() const;
    bool textSubtitleFileIsSet() const;
    void unsettextSubtitleFile();
    void setTextSubtitleFile(const SubtitleFileInfo& value);

    /// <summary>
    /// 
    /// </summary>

    SubtitleFileInfo getAudioSubtitleFile() const;
    bool audioSubtitleFileIsSet() const;
    void unsetaudioSubtitleFile();
    void setAudioSubtitleFile(const SubtitleFileInfo& value);


protected:
    SubtitleFileInfo textSubtitleFile_;
    bool textSubtitleFileIsSet_;
    SubtitleFileInfo audioSubtitleFile_;
    bool audioSubtitleFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SubtitleFiles_H_
