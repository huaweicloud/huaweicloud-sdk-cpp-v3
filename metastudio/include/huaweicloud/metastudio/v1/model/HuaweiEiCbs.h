
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HuaweiEiCbs_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HuaweiEiCbs_H_


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
/// 华为云CBS应用配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  HuaweiEiCbs
    : public ModelBase
{
public:
    HuaweiEiCbs();
    virtual ~HuaweiEiCbs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HuaweiEiCbs members

    /// <summary>
    /// CBS应用ID。
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// CBS所在区域
    /// </summary>

    int32_t getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(int32_t value);

    /// <summary>
    /// CBS所在区域的projectId
    /// </summary>

    std::string getCbsProjectId() const;
    bool cbsProjectIdIsSet() const;
    void unsetcbsProjectId();
    void setCbsProjectId(const std::string& value);

    /// <summary>
    /// SIS所在区域
    /// </summary>

    int32_t getSisRegion() const;
    bool sisRegionIsSet() const;
    void unsetsisRegion();
    void setSisRegion(int32_t value);

    /// <summary>
    /// SIS所在区域的projectId
    /// </summary>

    std::string getSisProjectId() const;
    bool sisProjectIdIsSet() const;
    void unsetsisProjectId();
    void setSisProjectId(const std::string& value);

    /// <summary>
    /// 是否开启热词
    /// </summary>

    bool isEnableHotWords() const;
    bool enableHotWordsIsSet() const;
    void unsetenableHotWords();
    void setEnableHotWords(bool value);


protected:
    std::string appId_;
    bool appIdIsSet_;
    int32_t region_;
    bool regionIsSet_;
    std::string cbsProjectId_;
    bool cbsProjectIdIsSet_;
    int32_t sisRegion_;
    bool sisRegionIsSet_;
    std::string sisProjectId_;
    bool sisProjectIdIsSet_;
    bool enableHotWords_;
    bool enableHotWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_HuaweiEiCbs_H_
