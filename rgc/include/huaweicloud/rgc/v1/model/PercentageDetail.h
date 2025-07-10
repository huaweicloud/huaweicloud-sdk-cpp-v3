
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_PercentageDetail_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_PercentageDetail_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Landing Zone设置的进度信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  PercentageDetail
    : public ModelBase
{
public:
    PercentageDetail();
    virtual ~PercentageDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PercentageDetail members

    /// <summary>
    /// 进度名称。
    /// </summary>

    std::string getPercentageName() const;
    bool percentageNameIsSet() const;
    void unsetpercentageName();
    void setPercentageName(const std::string& value);

    /// <summary>
    /// 进度状态。
    /// </summary>

    std::string getPercentageStatus() const;
    bool percentageStatusIsSet() const;
    void unsetpercentageStatus();
    void setPercentageStatus(const std::string& value);


protected:
    std::string percentageName_;
    bool percentageNameIsSet_;
    std::string percentageStatus_;
    bool percentageStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_PercentageDetail_H_
