
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePictureModelingJobRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePictureModelingJobRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/utils/HttpContent.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreatePictureModelingJobRequestBody
    : public ModelBase
{
public:
    CreatePictureModelingJobRequestBody();
    virtual ~CreatePictureModelingJobRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePictureModelingJobRequestBody members

    /// <summary>
    /// 照片文件。 &gt; 只能上传jpg/jpeg/png格式文件， 最大分辨率为3840*2160
    /// </summary>

    HttpContent getFile() const;
    bool fileIsSet() const;
    void unsetfile();
    void setFile(const HttpContent& value);

    /// <summary>
    /// 数字人风格ID。 * system_male_001：男性风格01 * system_female_001：女性风格01 * system_male_002：男性风格02 * system_female_002：女性风格02
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 数字人模型名称，首次创建时使用。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 照片建模任务结束的回调地址。
    /// </summary>

    std::string getNotifyUrl() const;
    bool notifyUrlIsSet() const;
    void unsetnotifyUrl();
    void setNotifyUrl(const std::string& value);


protected:
    HttpContent file_;
    bool fileIsSet_;
    std::string styleId_;
    bool styleIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string notifyUrl_;
    bool notifyUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreatePictureModelingJobRequestBody_H_
