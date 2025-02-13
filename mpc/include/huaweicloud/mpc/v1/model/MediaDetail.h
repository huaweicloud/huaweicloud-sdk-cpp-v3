
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/OutputThumbnailPara.h>
#include <huaweicloud/mpc/v1/model/OutputWatermarkPara.h>
#include <huaweicloud/mpc/v1/model/OriginPara.h>
#include <string>
#include <huaweicloud/mpc/v1/model/OutputVideoPara.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MediaDetail
    : public ModelBase
{
public:
    MediaDetail();
    virtual ~MediaDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MediaDetail members

    /// <summary>
    /// 任务名称
    /// </summary>

    std::vector<std::string>& getFeatures();
    bool featuresIsSet() const;
    void unsetfeatures();
    void setFeatures(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    OriginPara getOriginPara() const;
    bool originParaIsSet() const;
    void unsetoriginPara();
    void setOriginPara(const OriginPara& value);

    /// <summary>
    /// 多路输出片源信息
    /// </summary>

    std::vector<OutputVideoPara>& getOutputVideoParas();
    bool outputVideoParasIsSet() const;
    void unsetoutputVideoParas();
    void setOutputVideoParas(const std::vector<OutputVideoPara>& value);

    /// <summary>
    /// 被替换的子索引文件 
    /// </summary>

    std::vector<std::string>& getReplaceSubIndex();
    bool replaceSubIndexIsSet() const;
    void unsetreplaceSubIndex();
    void setReplaceSubIndex(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    OutputThumbnailPara getOutputThumbnailPara() const;
    bool outputThumbnailParaIsSet() const;
    void unsetoutputThumbnailPara();
    void setOutputThumbnailPara(const OutputThumbnailPara& value);

    /// <summary>
    /// 
    /// </summary>

    OutputWatermarkPara getOutputWatermarkParas() const;
    bool outputWatermarkParasIsSet() const;
    void unsetoutputWatermarkParas();
    void setOutputWatermarkParas(const OutputWatermarkPara& value);


protected:
    std::vector<std::string> features_;
    bool featuresIsSet_;
    OriginPara originPara_;
    bool originParaIsSet_;
    std::vector<OutputVideoPara> outputVideoParas_;
    bool outputVideoParasIsSet_;
    std::vector<std::string> replaceSubIndex_;
    bool replaceSubIndexIsSet_;
    OutputThumbnailPara outputThumbnailPara_;
    bool outputThumbnailParaIsSet_;
    OutputWatermarkPara outputWatermarkParas_;
    bool outputWatermarkParasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MediaDetail_H_
