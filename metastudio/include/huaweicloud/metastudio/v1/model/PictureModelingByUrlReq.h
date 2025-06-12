
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingByUrlReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingByUrlReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PictureModelingByUrlReq
    : public ModelBase
{
public:
    PictureModelingByUrlReq();
    virtual ~PictureModelingByUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PictureModelingByUrlReq members

    /// <summary>
    /// 图片URL
    /// </summary>

    std::string getPictureUrl() const;
    bool pictureUrlIsSet() const;
    void unsetpictureUrl();
    void setPictureUrl(const std::string& value);

    /// <summary>
    /// 风格ID
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 模型名称
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
    std::string pictureUrl_;
    bool pictureUrlIsSet_;
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

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PictureModelingByUrlReq_H_
