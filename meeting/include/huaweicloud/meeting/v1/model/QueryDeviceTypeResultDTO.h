
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceTypeResultDTO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceTypeResultDTO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 终端类型。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QueryDeviceTypeResultDTO
    : public ModelBase
{
public:
    QueryDeviceTypeResultDTO();
    virtual ~QueryDeviceTypeResultDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDeviceTypeResultDTO members

    /// <summary>
    /// 终端类型，区分自研和第三方终端。 * TE：华为自研硬终端 * 3rd：第三方硬终端 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 终端型号，枚举类型。 * TE10 * TE20 * TE30 * TE40 * TE50 * TE60 * HUAWEI Box 300 * HUAWEI Box 500 * HUAWEI Box 600 * HUAWEI Box 700 * HUAWEI Box 900 * DP300 * HUAWEI Box 200 * HUAWEI Box 300 * HUAWEI Box 500 * HUAWEI Board * polycomcisco 
    /// </summary>

    std::string getModel() const;
    bool modelIsSet() const;
    void unsetmodel();
    void setModel(const std::string& value);

    /// <summary>
    /// 是否支持激活码。
    /// </summary>

    bool isEnableActiveCode() const;
    bool enableActiveCodeIsSet() const;
    void unsetenableActiveCode();
    void setEnableActiveCode(bool value);

    /// <summary>
    /// 屏幕分辨率。1080P、720P等。
    /// </summary>

    std::string getResolution() const;
    bool resolutionIsSet() const;
    void unsetresolution();
    void setResolution(const std::string& value);

    /// <summary>
    /// 是否支持投影码。
    /// </summary>

    bool isSupportProjectionCode() const;
    bool supportProjectionCodeIsSet() const;
    void unsetsupportProjectionCode();
    void setSupportProjectionCode(bool value);

    /// <summary>
    /// 是否支持SVC。
    /// </summary>

    bool isSupportSVC() const;
    bool supportSVCIsSet() const;
    void unsetsupportSVC();
    void setSupportSVC(bool value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string model_;
    bool modelIsSet_;
    bool enableActiveCode_;
    bool enableActiveCodeIsSet_;
    std::string resolution_;
    bool resolutionIsSet_;
    bool supportProjectionCode_;
    bool supportProjectionCodeIsSet_;
    bool supportSVC_;
    bool supportSVCIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QueryDeviceTypeResultDTO_H_
