
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequestBody_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequestBody_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/core/utils/HttpContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  SearchFaceByFileRequestBody
    : public ModelBase
{
public:
    SearchFaceByFileRequestBody();
    virtual ~SearchFaceByFileRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SearchFaceByFileRequestBody members

    /// <summary>
    /// 本地图片文件，图片不能超过8MB,建议小于1MB。上传文件时，请求格式为multipart。  必选，与image_url、image_base64、face_id四选一。
    /// </summary>

    HttpContent getImageFile() const;
    bool imageFileIsSet() const;
    void unsetimageFile();
    void setImageFile(const HttpContent& value);

    /// <summary>
    /// 返回查询到的最相似的N张人脸，N默认为10。
    /// </summary>

    int32_t getTopN() const;
    bool topNIsSet() const;
    void unsettopN();
    void setTopN(int32_t value);

    /// <summary>
    /// 人脸相似度阈值，低于这个阈值则不返回，取值范围0~1，一般情况下建议取值0.93，默认为0。
    /// </summary>

    double getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(double value);

    /// <summary>
    /// [支持字段排序，参考[sort语法](https://support.huaweicloud.com/api-face/face_02_0013.html)。](tag:hc) [支持字段排序，参考[sort语法](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0013.html)。](tag:hk)
    /// </summary>

    std::string getSort() const;
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::string& value);

    /// <summary>
    /// [过滤条件，参考[filter语法](https://support.huaweicloud.com/api-face/face_02_0014.html)。](tag:hc) [过滤条件，参考[filter语法](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0014.html)。](tag:hk)
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// 指定返回的自定义字段。
    /// </summary>

    std::string getReturnFields() const;
    bool returnFieldsIsSet() const;
    void unsetreturnFields();
    void setReturnFields(const std::string& value);


protected:
    HttpContent imageFile_;
    bool imageFileIsSet_;
    int32_t topN_;
    bool topNIsSet_;
    double threshold_;
    bool thresholdIsSet_;
    std::string sort_;
    bool sortIsSet_;
    std::string filter_;
    bool filterIsSet_;
    std::string returnFields_;
    bool returnFieldsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_SearchFaceByFileRequestBody_H_
