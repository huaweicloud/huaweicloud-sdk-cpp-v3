
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>

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
class HUAWEICLOUD_MPC_V1_EXPORT  OutputThumbnailPara
    : public ModelBase
{
public:
    OutputThumbnailPara();
    virtual ~OutputThumbnailPara();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputThumbnailPara members

    /// <summary>
    /// 抽帧图片张数 
    /// </summary>

    int32_t getTotalPictures() const;
    bool totalPicturesIsSet() const;
    void unsettotalPictures();
    void setTotalPictures(int32_t value);

    /// <summary>
    /// 抽帧图片宽度 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 抽帧图片高度 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 抽帧文件名 
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    int32_t totalPictures_;
    bool totalPicturesIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_OutputThumbnailPara_H_
