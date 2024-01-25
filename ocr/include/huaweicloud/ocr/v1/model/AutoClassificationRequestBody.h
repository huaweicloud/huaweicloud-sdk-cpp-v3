
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationRequestBody_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  AutoClassificationRequestBody
    : public ModelBase
{
public:
    AutoClassificationRequestBody();
    virtual ~AutoClassificationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoClassificationRequestBody members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过8000px，支持JPEG、JPG、PNG、BMP、TIFF、PDF格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 可以指定要识别的票证，指定后不出现在此List的票证不识别。不指定时默认返回所有支持类别票证的识别信息。 
    /// </summary>

    std::vector<std::string>& getTypeList();
    bool typeListIsSet() const;
    void unsettypeList();
    void setTypeList(const std::vector<std::string>& value);

    /// <summary>
    /// 可指定需要识别票证的传入参数，具体参数可参考各票证API文档。若不指定则默认传入image 。 当前版本支持票证类型如下： - vat_invoice：增值税发票  - quota_invoice：定额发票  - taxi_invoice：出租车票  - train_ticket：火车票  - flight_itinerary：飞机行程单  - toll_invoice：车辆通行费发票  - mvs_invoice：机动车销售发票  - id_card：身份证  - passport：护照  - driver_license：驾驶证  - vehicle_license：行驶证  - transportation_license：道路运输证  - bankcard：银行卡  - bus_ship_ticket：车船票  - ride_hailing_itinerary：网约车行程单  - machine_printed_invoice：通用机打发票 &gt; 说明： - 若指定票证参数填写错误会导致该票证识别错误，会提示\&quot;AIS.0101\&quot;:\&quot;The input parameter is invalid.\&quot;报错。 
    /// </summary>

    Object getExtendedParameters() const;
    bool extendedParametersIsSet() const;
    void unsetextendedParameters();
    void setExtendedParameters(const Object& value);

    /// <summary>
    /// 检测印章开关，开启时则返回单张票证是否含有印章，否则不返回是否含有印章。可选值包括： - true：开启检测票证是否含有印章功能。  - false：关闭检测票证是否含有印章功能。 &gt; 说明： - 该功能仅检测判断有无印章，不返回印章具体内容。 
    /// </summary>

    bool isDetectSeal() const;
    bool detectSealIsSet() const;
    void unsetdetectSeal();
    void setDetectSeal(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::vector<std::string> typeList_;
    bool typeListIsSet_;
    Object extendedParameters_;
    bool extendedParametersIsSet_;
    bool detectSeal_;
    bool detectSealIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AutoClassificationRequestBody_H_
