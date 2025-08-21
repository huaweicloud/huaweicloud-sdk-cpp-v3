
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v1/model/CesDimsItem_display.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// CES查询维度信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CesDimsItem
    : public ModelBase
{
public:
    CesDimsItem();
    virtual ~CesDimsItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CesDimsItem members

    /// <summary>
    /// 查询参数
    /// </summary>

    std::vector<std::string>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem_display getDisplay() const;
    bool displayIsSet() const;
    void unsetdisplay();
    void setDisplay(const CesDimsItem_display& value);


protected:
    std::vector<std::string> params_;
    bool paramsIsSet_;
    CesDimsItem_display display_;
    bool displayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_H_
