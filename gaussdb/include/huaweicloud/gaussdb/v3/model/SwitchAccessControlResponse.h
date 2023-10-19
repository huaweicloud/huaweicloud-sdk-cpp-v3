
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchAccessControlResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchAccessControlResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchAccessControlResponse
    : public ModelBase, public HttpResponse
{
public:
    SwitchAccessControlResponse();
    virtual ~SwitchAccessControlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchAccessControlResponse members

    /// <summary>
    /// 是否已开启访问控制。 取值： - true：开启。 - false：关闭。
    /// </summary>

    bool isOpenAccessControl() const;
    bool openAccessControlIsSet() const;
    void unsetopenAccessControl();
    void setOpenAccessControl(bool value);


protected:
    bool openAccessControl_;
    bool openAccessControlIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchAccessControlResponse_H_
