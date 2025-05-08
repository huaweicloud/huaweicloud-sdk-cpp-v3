
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TaskOutPut_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TaskOutPut_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/ObsInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/ObjectMetaData.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  TaskOutPut
    : public ModelBase
{
public:
    TaskOutPut();
    virtual ~TaskOutPut();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskOutPut members

    /// <summary>
    /// 
    /// </summary>

    ObsInfo getObsInfo() const;
    bool obsInfoIsSet() const;
    void unsetobsInfo();
    void setObsInfo(const ObsInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObjectMetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const ObjectMetaData& value);

    /// <summary>
    /// 输出文件播放地址
    /// </summary>

    std::string getFileUrl() const;
    bool fileUrlIsSet() const;
    void unsetfileUrl();
    void setFileUrl(const std::string& value);


protected:
    ObsInfo obsInfo_;
    bool obsInfoIsSet_;
    ObjectMetaData metaData_;
    bool metaDataIsSet_;
    std::string fileUrl_;
    bool fileUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TaskOutPut_H_
