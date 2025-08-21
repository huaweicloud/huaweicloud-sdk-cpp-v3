
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CesDimsItem_display_id.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 展示内容
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CesDimsItem_display
    : public ModelBase
{
public:
    CesDimsItem_display();
    virtual ~CesDimsItem_display();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CesDimsItem_display members

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem_display_id getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const CesDimsItem_display_id& value);


protected:
    CesDimsItem_display_id id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesDimsItem_display_H_
