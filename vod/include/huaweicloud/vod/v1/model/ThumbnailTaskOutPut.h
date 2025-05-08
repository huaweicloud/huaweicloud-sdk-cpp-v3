
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTaskOutPut_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTaskOutPut_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <huaweicloud/vod/v1/model/PicInfo.h>
#include <vector>

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
class HUAWEICLOUD_VOD_V1_EXPORT  ThumbnailTaskOutPut
    : public ModelBase
{
public:
    ThumbnailTaskOutPut();
    virtual ~ThumbnailTaskOutPut();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbnailTaskOutPut members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const ObsInfo& value);

    /// <summary>
    /// 截图信息列表
    /// </summary>

    std::vector<PicInfo>& getPicInfoList();
    bool picInfoListIsSet() const;
    void unsetpicInfoList();
    void setPicInfoList(const std::vector<PicInfo>& value);


protected:
    ObsInfo obsInfo_;
    bool obsInfoIsSet_;
    std::vector<PicInfo> picInfoList_;
    bool picInfoListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ThumbnailTaskOutPut_H_
