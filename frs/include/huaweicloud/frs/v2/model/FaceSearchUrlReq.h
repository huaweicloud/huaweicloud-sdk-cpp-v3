
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSearchUrlReq_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSearchUrlReq_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_FRS_V2_EXPORT  FaceSearchUrlReq
    : public ModelBase
{
public:
    FaceSearchUrlReq();
    virtual ~FaceSearchUrlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// FaceSearchUrlReq members

    /// <summary>
    /// [过滤条件，参考[filter语法](https://support.huaweicloud.com/api-face/face_02_0014.html)。](tag:hc)[过滤条件，参考[filter语法](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0014.html)。](tag:hk)
    /// </summary>

    std::string getFilter() const;
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::string& value);

    /// <summary>
    /// 返回查询到的最相似的N张人脸，N默认为10。
    /// </summary>

    int32_t getTopN() const;
    bool topNIsSet() const;
    void unsettopN();
    void setTopN(int32_t value);

    /// <summary>
    /// [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/api-face/face_02_0006.html)。(tag:hc) [图片的URL路径，目前仅支持华为云上OBS的URL，且人脸识别服务有权限读取该OBS桶的数据。 开通读取权限的操作请参见[服务授权](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0006.html)。(tag:hk)
    /// </summary>

    std::string getImageUrl() const;
    bool imageUrlIsSet() const;
    void unsetimageUrl();
    void setImageUrl(const std::string& value);

    /// <summary>
    /// 指定返回的自定义字段。
    /// </summary>

    std::vector<std::string>& getReturnFields();
    bool returnFieldsIsSet() const;
    void unsetreturnFields();
    void setReturnFields(const std::vector<std::string>& value);

    /// <summary>
    /// 人脸相似度阈值，低于这个阈值则不返回，取值范围0~1，一般情况下建议取值0.93，默认为0。
    /// </summary>

    double getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(double value);

    /// <summary>
    /// [支持字段排序，参考[sort语法](https://support.huaweicloud.com/api-face/face_02_0013.html)。](tag:hc)[支持字段排序，参考[sort语法](https://support.huaweicloud.com/intl/zh-cn/api-face/face_02_0013.html)。](tag:hk)
    /// </summary>

    std::vector<std::map<std::string, std::string>>& getSort();
    bool sortIsSet() const;
    void unsetsort();
    void setSort(const std::vector<std::map<std::string, std::string>>& value);


protected:
    std::string filter_;
    bool filterIsSet_;
    int32_t topN_;
    bool topNIsSet_;
    std::string imageUrl_;
    bool imageUrlIsSet_;
    std::vector<std::string> returnFields_;
    bool returnFieldsIsSet_;
    double threshold_;
    bool thresholdIsSet_;
    std::vector<std::map<std::string, std::string>> sort_;
    bool sortIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_FaceSearchUrlReq_H_
