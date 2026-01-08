
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSpriteInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSpriteInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
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
class HUAWEICLOUD_MPC_V1_EXPORT  ImageSpriteInfo
    : public ModelBase
{
public:
    ImageSpriteInfo();
    virtual ~ImageSpriteInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageSpriteInfo members

    /// <summary>
    /// 雪碧图中小图的行数。
    /// </summary>

    int32_t getRowCount() const;
    bool rowCountIsSet() const;
    void unsetrowCount();
    void setRowCount(int32_t value);

    /// <summary>
    /// 雪碧图中小图的列数。
    /// </summary>

    int32_t getColumnCount() const;
    bool columnCountIsSet() const;
    void unsetcolumnCount();
    void setColumnCount(int32_t value);

    /// <summary>
    /// 雪碧图中小图数量。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 雪碧图小图宽度 
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// 雪碧图小图高度 
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// 每一张雪碧图大图的路径。 
    /// </summary>

    std::vector<std::string>& getOutputImageName();
    bool outputImageNameIsSet() const;
    void unsetoutputImageName();
    void setOutputImageName(const std::vector<std::string>& value);

    /// <summary>
    /// 雪碧图子图位置与时间关系的 WebVtt 文件路径。WebVtt 文件表明了各个雪碧图小图对应的时间点，以及在雪碧大图里的坐标位置，一般被播放器用于实现预览。 
    /// </summary>

    std::string getOutputWebvttName() const;
    bool outputWebvttNameIsSet() const;
    void unsetoutputWebvttName();
    void setOutputWebvttName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);


protected:
    int32_t rowCount_;
    bool rowCountIsSet_;
    int32_t columnCount_;
    bool columnCountIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::vector<std::string> outputImageName_;
    bool outputImageNameIsSet_;
    std::string outputWebvttName_;
    bool outputWebvttNameIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ImageSpriteInfo_H_
