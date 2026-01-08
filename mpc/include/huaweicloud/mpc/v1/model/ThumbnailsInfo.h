
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailsInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailsInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/PicInfo.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  ThumbnailsInfo
    : public ModelBase
{
public:
    ThumbnailsInfo();
    virtual ~ThumbnailsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ThumbnailsInfo members

    /// <summary>
    /// 截图文件信息。 
    /// </summary>

    std::vector<PicInfo>& getPicInfo();
    bool picInfoIsSet() const;
    void unsetpicInfo();
    void setPicInfo(const std::vector<PicInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 截图压缩包名。 
    /// </summary>

    std::string getOutputName() const;
    bool outputNameIsSet() const;
    void unsetoutputName();
    void setOutputName(const std::string& value);


protected:
    std::vector<PicInfo> picInfo_;
    bool picInfoIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string outputName_;
    bool outputNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_ThumbnailsInfo_H_
