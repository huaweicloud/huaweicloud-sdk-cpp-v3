
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHotClodSeparationStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHotClodSeparationStatusResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowHotClodSeparationStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHotClodSeparationStatusResponse();
    virtual ~ShowHotClodSeparationStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHotClodSeparationStatusResponse members

    /// <summary>
    /// 功能是否开启
    /// </summary>

    bool isOpened() const;
    bool openedIsSet() const;
    void unsetopened();
    void setOpened(bool value);


protected:
    bool opened_;
    bool openedIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowHotClodSeparationStatusResponse_H_
